# Yogurt Sale Problem

## Problem Statement

The price of one yogurt at the "Vosmiorochka" store is `a` burles, but there is a promotion where you can buy two yogurts for `b` burles.

Maxim needs to buy exactly `n` yogurts. When buying two yogurts, he can choose to buy them at the regular price or at the promotion price.

What is the minimum amount of burles Maxim should spend to buy `n` yogurts?

### Input

- The first line contains a single integer `t` (1 ≤ `t` ≤ 10<sup>4</sup>) — the number of test cases.
- The first and only line of each test case contains three integers `n`, `a`, and `b` (1 ≤ `n` ≤ 100, 1 ≤ `a`, `b` ≤ 30) — the number of yogurts Maxim wants to buy, the price for one yogurt, and the price for two yogurts on promotion.

### Output

For each test case, print the minimum cost of buying `n` yogurts in "Vosmiorochka" in a separate line.

### Example

#### Input
```
4
2 5 9
3 5 9
3 5 11
4 5 11
```

#### Output
```
9 
14 
15 
20
```

### Note
In the third test case of the example, it is more advantageous to buy three yogurts for 15 burles than two for 11 and one for 5. In the fourth test case of the example, you need to buy four yogurts, each for 5 burles.

---


### Explanation

1. For the first test case, it is cheaper to buy two yogurts for 9 burles than to buy each yogurt at 5 burles. The total cost is 9 burles.
2. For the second test case, buying two yogurts for 9 burles and one yogurt for 5 burles makes the total 14 burles.
3. In the third test case, buying all three yogurts at 5 burles each is cheaper (15 burles total).
4. In the fourth test case, buying two yogurts for 11 burles twice gives the minimum cost of 20 burles.

### Solution

#### C++ Code

```cpp
#include<iostream>
using namespace std; 

int main(){
    int t,n,a,b;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        if(2*a<=b){
            cout<<n*a<<endl;
        }else{
            cout<<(n/2)*b+(n%2)*a<<endl;
        }
    }
}

```
---

```python
def yogurt_sale(t, test_cases):
    results = []
    for case in test_cases:
        n, a, b = case
        if 2 * a <= b:
            results.append(n * a)
        else:
            results.append((n // 2) * b + (n % 2) * a)
    return results

# Input
t = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(t)]

# Process and Output
results = yogurt_sale(t, test_cases)
for result in results:
    print(result)
```

