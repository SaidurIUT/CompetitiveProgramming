# Problem: Progressive Square

A progressive square of size n is an \(n \times n\) matrix. Maxim chooses three integers \(a_{1,1}, c,\) and \(d\) and constructs a progressive square according to the following rules:

\[
a_{i+1,j} = a_{i,j} + c
\]
\[
a_{i,j+1} = a_{i,j} + d
\]

For example, if \(n = 3\), \(a_{1,1} = 1\), \(c = 2\), and \(d = 3\), then the progressive square looks as follows:

\[
\begin{bmatrix}
1 & 4 & 7 \\
3 & 6 & 9 \\
5 & 8 & 11
\end{bmatrix}
\]

Maxim has constructed a progressive square and remembered the values of \(n, c, d\). Recently, he found an array \(b\) of \(n^2\) integers in random order and wants to make sure that these elements are the elements of that specific square.

It can be shown that for any values of \(n, a_{1,1}, c,\) and \(d\), there exists exactly one progressive square that satisfies all the rules.

### Input

- The first line contains an integer \(t\) (\(1 \leq t \leq 10^4\)) — the number of test cases.
- The first line of each test case contains three integers \(n, c, d\) (\(2 \leq n \leq 500, 1 \leq c, d \leq 10^6\)) — the size of the square and the values of \(c\) and \(d\).
- The second line of each test case contains \(n \cdot n\) integers \(b_1, b_2, \ldots, b_{n \cdot n}\) (\(1 \leq b_i \leq 10^9\)) — the elements found by Maxim.

It is guaranteed that the sum of \(n^2\) over all test cases does not exceed \(25 \cdot 10^4\).

### Output

For each test case, output "YES" if a progressive square for the given \(n, c, d\) can be constructed from the array elements, otherwise output "NO".

You can output each letter in any case (lowercase or uppercase).

### Example

#### Input

```
5
3 2 3
3 9 6 5 7 1 10 4 8
3 2 3
3 9 6 5 7 1 11 4 8
2 100 100
400 300 400 500
3 2 3
3 9 6 6 5 1 11 4 8
4 4 4
15 27 7 19 23 23 11 15 7 3 19 23 11 15 11 15
```

#### Output

```
NO
YES
YES
NO
NO
```
---

### Explanation

The problem requires us to verify if a set of numbers provided in an unsorted array could represent the elements of a specific progressive square. Given the rules for constructing the progressive square, we can solve this problem by following these steps:

1. **Input Parsing**: First, we read the input values for \(n\), \(c\), \(d\), and the list of elements for the matrix.
   
2. **Sorting the Array**: Since the elements are unordered, the first step is to sort the input array (`givenArr`).

3. **Constructing the Progressive Square**: We know that the top-left element of the matrix is the smallest element in the array (i.e., `givenArr[0]`). Using the given rules, we can generate the entire matrix based on this first element, \(c\), and \(d\). We store these elements in `newArr`.

4. **Comparing the Arrays**: Both arrays (`givenArr` and `newArr`) are sorted, and since each progressive square has exactly one unique configuration, we simply compare the two arrays to check if they are identical.
   - If they match, it means the input array can indeed represent a progressive square, and we output "YES".
   - Otherwise, we output "NO".

By iterating through each test case and repeating the process, we efficiently determine if the provided array represents the progressive square described.

This approach ensures that the problem constraints are respected, as sorting the array and constructing the square both operate in \(O(n^2 \log n)\), which is feasible given the input size.


---

### Solution

#### C++
```cpp
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int t, n, c, d;
    cin >> t;
    while(t--){
        cin >> n >> c >> d;
        int temp;
        vector<int> givenArr, newArr;
        
        // Read the given array
        for(int i = 0 ; i < n * n; i++){
            cin >> temp;
            givenArr.push_back(temp);
        }
        
        // Sort the given array
        sort(givenArr.begin(), givenArr.end());
        
        // Construct the expected progressive square elements
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                newArr.push_back(givenArr[0] + i * c + j * d);
            }
        }
        
        // Sort the constructed array
        sort(newArr.begin(), newArr.end());
        
        // Compare the two arrays
        if(newArr == givenArr){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
```

#### Python 

```
t = int(input())

for _ in range(t):
    n, c, d = map(int, input().split())
    givenArr = list(map(int, input().split()))
    
    # Sort the given array
    givenArr.sort()
    
    # Construct the expected progressive square elements
    newArr = []
    for i in range(n):
        for j in range(n):
            newArr.append(givenArr[0] + i * c + j * d)
    
    # Sort the constructed array
    newArr.sort()
    
    # Compare the two arrays
    if newArr == givenArr:
        print("YES")
    else:
        print("NO")

```


