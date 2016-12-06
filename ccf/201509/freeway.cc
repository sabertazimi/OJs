/*!
 * \file freeway.cc
 * \brief No.4
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

#include <iostream>  
#include <cstdio>  
#include <cstring>  
#include <set>  
#include <queue>  
using namespace std;  
const int ADJ_NUM = 50;  
const int SIZE = 10001;  
struct _graph{  
    int adj[ADJ_NUM]; // 来记录邻接点的下标   
    int num; // 指示邻接点的数目   
};  
_graph V[SIZE] = {0};  
int LOW[SIZE] = {0};  
int DFN[SIZE] = {0};  
bool instack[SIZE] = {false}; // 用来记录一个顶点是否在栈里面  
int Stap[SIZE] = {0};  
int Belong[SIZE] = {0};  
int Dindex, Stop, Bcnt;  
int answer = 0;  
  
void tarjan(int i)  
{  
    int j;  
    int index = 0;  
    DFN[i] = LOW[i] = ++Dindex; // 标记   
    instack[i] = true; // 表示这个节点在栈里面   
    Stap[++Stop] = i; // 入栈   
    while (true) // 寻找邻节点   
    {  
          
        j = V[i].adj[index++];  
        if (j == 0) break;  
        if (!DFN[j]) // 如果该点还未有入栈   
        {  
            tarjan(j); // 从这个节点开始访问,也就是递归   
            if (LOW[j] < LOW[i]) // j节点访问完成之后，LOW[j]可能发生了变化，要更新LOW[i]   
                LOW[i] = LOW[j];  
        }  
        else if (instack[j] && DFN[j] < LOW[i]) // 该节点已经在栈里面了   
            LOW[i] = DFN[j];  
    }  
      
    if (DFN[i] == LOW[i]) // DFN[i] == LOW[i]这说明有一个强连通分量   
    {  
        int sum = 0;  
        Bcnt++; // 这里表示联通分量的数量加一   
        do  
        {  
            j = Stap[Stop--];  
            instack[j] = false; // 这里表示出栈   
            Belong[j] = Bcnt;   
            sum++;  
        }  
        while (j != i);  
        if (sum != 0)  
            answer += (sum * (sum - 1)) / 2;  
          
    }  
}  
  
void solve(int N)  
{  
    int i;  
    Stop = Bcnt = Dindex = 0;  
    memset(DFN, 0, sizeof(DFN));  
    for (i = 1; i <= N; i++)  
        if (!DFN[i])  
            tarjan(i);  
}  
int main()  
{  
    int n, m;  
    int a, b;  
    cin >> n >> m;  
    while (m--)  
    {  
        cin >> a >> b;  
        V[a].adj[V[a].num] = b; // 从 a到b有一条边  
        V[a].num++; // 计数器加1   
    }  
    solve(n);  
    cout << answer << endl;  
    return 0;  
}