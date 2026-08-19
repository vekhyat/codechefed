# FINDUP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Find duplicate in a range

You are given an array  **A**  containing  **N + 1**  integers. Each integer is in the range  **1**  to  **N**  (inclusive).

Since there are  **N + 1**  elements but only  **N**  distinct possible values, at least one number appears more than once.

Your task is to  **find and print the duplicate number**.

 **Note:** 

- The input array must be treated as read-only.
- There is exactly one duplicate value, although it may appear more than twice.
### Input Format
- The first line contains a single integer T, denoting the number of test cases.
- For each test case: The first line contains a single integer N. The second line contains N + 1 space-separated integers representing the array A.
### Output Format

For each test case, print a single integer — the duplicate number.

### Constraints
- $1 \le T \le 10^5$
- $1 \le N \le 2 \times 10^5$
- $1 \le A_i \le N$
- Exactly one value is duplicated.
- The sum of N over all test cases does not exceed $2 \times 10^5$.
### Sample 1:
Input
Output

```
3
4
1 3 4 2 2
5
3 1 3 4 2 5
6
1 5 6 2 4 3 6
```

```
2
3
6
```

### Explanation:
### Test Case 1

The number  **2**  appears twice in the array, so the answer is  **2**.

### Test Case 2

The number  **3**  appears twice in the array, so the answer is  **3**.

### Test Case 3

The number  **6**  appears twice in the array, so the answer is  **6**.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T04:52:14.871Z  

```c_cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    bool duplicate;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int size;
        cin >> size;
        int arr[size + 1];
        for (int g = 0; g < size + 1; g++) {
            cin >> arr[g];
        }
        for (int t = 0; t < size + 1; t++) {
            duplicate=false;
            for (int w = t + 1; w < size + 1; w++) {
                
                if (arr[t] == arr[w]) {
                    duplicate = true;
                    break;
                }
            }
            if (duplicate) {
                cout << arr[t]<<endl;
            }

        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FINDUP)