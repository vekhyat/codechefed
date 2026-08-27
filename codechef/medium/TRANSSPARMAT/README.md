# TRANSSPARMAT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Transpose of a sparse matrix

You are given a sparse matrix represented in  **triplet form**. The first triplet contains the number of rows, columns, and non-zero elements. Each of the following triplets contains the row index, column index, and value of a non-zero element.

Your task is to compute the  **transpose**  of the sparse matrix and print it in triplet form.

In the transpose of a matrix, the rows become columns and the columns become rows. Every non-zero element at position `(r, c)` moves to position `(c, r)`.

The output triplets must be printed in  **row-major order**  of the transposed matrix, i.e., sorted first by row index and then by column index.

### Input Format
- The first line contains three integers R, C, and N, representing the number of rows, columns, and non-zero elements.
- The next N lines each contain three integers r, c, and val, representing a non-zero element at row r and column c.

 **Note:**  Row and column indices are  **0-based**.

### Output Format

Print  **N + 1**  lines representing the transpose in triplet form.

- The first line should contain: C R N
- The next N lines should contain: row column value in ascending order of row index and then column index.
### Constraints
- $1 \le R, C \le 1000$
- $0 \le N \le \min(R \times C,\ 10^5)$
- $0 \le r \lt R$
- $0 \le c \lt C$
- $-10^9 \le val \le 10^9,\ val \neq 0$
### Sample 1:
Input
Output

```
6 7 4
0 2 5
2 6 9
4 1 8
5 5 3
```

```
7 6 4
1 4 8
2 0 5
5 5 3
6 2 9
```

### Explanation:

The input represents the following sparse matrix:

```
0 0 5 0 0 0 0
0 0 0 0 0 0 0
0 0 0 0 0 0 9
0 0 0 0 0 0 0
0 8 0 0 0 0 0
0 0 0 0 0 3 0

```

After transposing, the non-zero elements become:

- $(1, 4) \rightarrow 8$
- $(2, 0) \rightarrow 5$
- $(5, 5) \rightarrow 3$
- $(6, 2) \rightarrow 9$

These are printed in row-major order of the transposed matrix.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-27T16:30:14.358Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> v;
    int R,C,N;
    cin>>R>>C>>N;
    v.emplace_back(vector<int>{R,C,N});
    for (int i=0;i<N;i++){
        int r,c,val;
        cin >> r>>c>>val;
        v.emplace_back(vector<int>{r,c,val});
    }
    vector<int> count(C);
    for(int i=1;i<N+1;i++){
     count[v[i][1]]++;   
    }
    vector<int> index(C);
    for(int i=0;i<C;i++){
        if(i==0){
            index[i]=0;
        }
        else{
            index[i]=index[i-1]+count[i-1];
        }
    }
    int vout[N+1][3];
    for (int i=0;i<N+1;i++){
        if(i==0){
            vout[0][0]=v[0][1];
            vout[0][1]=v[0][0];
            vout[0][2]=v[0][2];
        }
        int a=v[i][1];
        int b=index[a];
        vout[b+1][0]=v[i][1];
        vout[b+1][1]=v[i][0];
        vout[b+1][2]=v[i][2];
        index[a]++;
    }
    for(int i =0;i<N+1;i++){
        cout<<vout[i][0]<<" "<<vout[i][1]<<" "<<vout[i][2]<<endl;
    }
}

```

---

[View on CodeChef](https://www.codechef.com/problems/TRANSSPARMAT)