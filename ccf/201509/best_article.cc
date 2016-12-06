/*!
 * \file best_article.cc
 * \brief
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <map>  
#include <set>  
#include <cmath>  
#include <ctime>  
#include <Stack>  
#include <queue>  
#include <cstdio>  
#include <cctype>  
#include <bitset>  
#include <string>  
#include <vector>  
#include <cstring>  
#include <iostream>  
#include <algorithm>  
#include <functional>  

#define fuck(x) cout << "[" << x << "]"  
#define FIN freopen("input.txt", "r", stdin)  
#define FOUT freopen("output.txt", "w+", stdout)  

using namespace std;  

typedef long long LL;  
typedef pair<int, int> PII;  
typedef vector<LL> vec;  
typedef vector<vec> mat;  
  
const int MX = 1e4 + 5;  
const LL INF = 0x3f3f3f3f3f3f3f3f;  
  
int rear, root;  
int Next[MX][26], Fail[MX], End[MX];  

int New() {  
    rear++;  
    End[rear] = 0;  
    for(int i = 0; i < 26; i++) {  
        Next[rear][i] = -1;  
    }  
    return rear;  
}  

void Init() {  
    rear = 0;  
    root = New();  
}  

void Add(char *A) {  
    int n = strlen(A), now = root;  
    for(int i = 0; i < n; i++) {  
        int id = A[i] - 'a';  
        if(Next[now][id] == -1) {  
            Next[now][id] = New();  
        }  
        now = Next[now][id];  
    }  
    End[now]++;  
}  

void mat_fill(mat &A, LL val) {  
    for(int i = 0; i < A.size(); i++) {  
        for(int j = 0; j < A[0].size(); j++) {  
            A[i][j] = val;  
        }  
    }  
}  

mat Build() {  
    queue<int>Q;  
    Fail[root] = root;  
    for(int i = 0; i < 26; i++) {  
        if(Next[root][i] == -1) {  
            Next[root][i] = root;  
        } else {  
            Fail[Next[root][i]] = root;  
            Q.push(Next[root][i]);  
        }  
    }  
    while(!Q.empty()) {  
        int u = Q.front(); Q.pop();  
        End[u] += End[Fail[u]];  
        for(int i = 0; i < 26; i++) {  
            if(Next[u][i] == -1) {  
                Next[u][i] = Next[Fail[u]][i];  
            } else {  
                Fail[Next[u][i]] = Next[Fail[u]][i];  
                Q.push(Next[u][i]);  
            }  
        }  
    }  
    mat A(rear, vec(rear));  
    mat_fill(A, -INF);  
    for(int i = 1; i <= rear; i++) {  
        for(int j = 0; j < 26; j++) {  
            int chd = Next[i][j];  
            A[chd - 1][i - 1] = End[chd];  
        }  
    }  
    return A;  
}  

mat mat_mul(mat &A, mat &B) {  
    mat C(A.size(), vec(B[0].size()));  
    mat_fill(C, -INF);  
    for(int i = 0; i < A.size(); i++) {  
        for(int j = 0; j < B[0].size(); j++) {  
            for(int k = 0; k < B.size(); k++) {  
                if(A[i][k] + B[k][j] >= 0) {  
                    C[i][j] = max(C[i][j], A[i][k] + B[k][j]);  
                }  
            }  
        }  
    }  
    return C;  
}  

mat mat_pow(mat A, LL n) {  
    mat B = A; n--;  
    while(n) {  
        if(n & 1) B = mat_mul(B, A);  
        A = mat_mul(A, A);  
        n >>= 1;  
    }  
    return B;  
}  

void print(mat &A) {  
    for(int i = 0; i < A.size(); i++) {  
        for(int j = 0; j < A[0].size(); j++) {  
            fuck(A[i][j]);  
        } printf("\n");  
    }  
}  
  
char S[MX];  

int main() {  
    int n; LL m; //FIN;  
    scanf("%d%lld", &n, &m);  
    Init();  

    for(int i = 1; i <= n; i++) {  
        scanf("%s", S);  
        Add(S);  
    }  

    mat A = Build();  
    A = mat_pow(A, m);  
  
    LL ans = 0;  

    for(int i = 0; i < rear; i++) {  
        ans = max(ans, A[i][0]);  
    }  

    printf("%lld\n", ans);  
    return 0;  
}  