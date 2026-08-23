# DSACPR53

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Traversal of 2d arrays

Like a normal array, we can traverse a 2D array of size $N$, using a loop going through each of its indexes from $0$ to $N-1$. Accessing an index from this array will give us the array at that index.
Now, we can use another nested loop to traverse through all the inner array elements.
Thus, the pseudo-code to print all the elements of a 2D array of size $N \times M$ will be:

```
for i from 0 to N-1
    for j from 0 to M-1
        print arr[i][j]
    come to the next line

```

### Task

Write a program to do the following:

- Take $N$ and $M$ as input
- Declare a 2D array of size $N \times M$
- Take $N \times M$ inputs and store them in the 2D array at appropriate index
- Output the 2D array
### Sample 1:
Input
Output

```
2 3
1 2 3
4 5 6
```

```
1 2 3
4 5 6
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-23T09:33:11.335Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
    int arr[n][m];
    for (int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            
        }
    }
    for (int w=0;w<n;w++){
        for(int k=0;k<m;k++){
            cout<<arr[w][k]<<" ";
            
        }
        cout<<endl;
        
    }
    
}

```

---

[View on CodeChef](https://www.codechef.com/problems/DSACPR53)