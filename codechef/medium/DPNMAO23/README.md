# DPNMAO23

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Unique Array

In a data processing pipeline, you've received a list of transaction IDs. However, due to a system glitch, some IDs have been logged multiple times. Your task is to clean this data by removing all duplicate IDs, ensuring that the final list contains each ID only once, while preserving the original order of the first appearance of each ID.

Write a function that takes an array of integers $A$ and removes the duplicate elements.

### Input Format
- The first line contains a single integer, $N$, representing the number of elements in the array.
- The second line contains $N$ space separated integers, representing the elements of the array.
### Output Format
- Print the elements of the array after removing duplicates, separated by a single space.
### Constraints
- $1 \leq N \leq 10^5$
- $1 \leq A_i \leq 10^9$
### Sample 1:
Input
Output

```
7
1 2 2 3 4 4 5
```

```
1 2 3 4 5
```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-19T04:51:31.897Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	int size;
	cin>>size;
	bool duplicate;
    int arr[size];
    int arrnew[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int w=0;w<size;w++){
        duplicate=false;
        for(int g=w-1;g>=0;g--){
            if(arr[g]==arr[w]){
        duplicate=true;
                break;
            }}
        if(!duplicate)cout<<arr[w]<<" ";
        }
        
    
}

   
```

---

[View on CodeChef](https://www.codechef.com/problems/DPNMAO23)