# A. Primary Task

**Time limit per test**: 1 second  
**Memory limit per test**: 256 megabytes

Dmitry wrote down `t` integers on the board, and that is good. He is sure that he lost an **important integer** `n` among them, and that is bad.

The integer `n` had the form `10^x (x ≥ 2)`, where the symbol `^` denotes exponentiation. Something went wrong, and Dmitry missed the symbol `^` when writing the **important integer**. For example, instead of the integer `10^5`, he would have written `105`, and instead of `10^19`, he would have written `1019`.

Dmitry wants to understand which of the integers on the board could have been the **important integer** and which could not.

## Input

The first line of the input contains one integer `t` (`1 ≤ t ≤ 10^4`) — the number of integers on the board.

The next `t` lines each contain an integer `a` (`1 ≤ a ≤ 10000`) — the next integer from the board.

## Output

For each integer on the board, output `"YES"` if it could have been the **important integer** and `"NO"` otherwise.

You may output each letter in any case (lowercase or uppercase). For example, the strings `"yEs"`, `"yes"`, `"Yes"`, and `"YES"` will be accepted as a positive answer.

## Example

### Input
```
7
100
1010
101
105
2033
1019
1002
```

### Output

```
NO
YES
NO
YES
NO
YES
NO
```

### Tags
* implementation
* math
* strings
* 800


---

**Note**: This problem requires checking if a number could have been miswritten as `10^x`, where `x ≥ 2`. You should determine whether the number follows the pattern of missing the exponentiation symbol in a power of 10.

---


### Solve in CPP
```
#include<iostream>
using namespace std;

int main(){
    int t;
    string temp;
    cin >> t;
    
    while(t--){
        cin >> temp;
        if(temp[0] == '1' && temp[1] == '0' ){
            if(temp.length() > 3 && temp[2]-'0'>0){
                cout <<"YES" << endl;
            } else if(temp[2]-'0'>1){
                cout <<"YES" << endl;
            } else {
                cout <<"NO" << endl;
            }
            
        }else{
            cout <<"NO" << endl;
        }
    }
    
    return 0;
}

```

---


### Solve in Python

```
t = int(input())  # Read the number of test cases

for _ in range(t):
    temp = input()  # Read the input string

    # Check if the first two characters are '1' and '0'
    if temp[0] == '1' and temp[1] == '0':
        if len(temp) > 3 and int(temp[2]) > 0:
            print("YES")
        elif int(temp[2]) > 1:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")
```





