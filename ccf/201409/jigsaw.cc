/*!
 * \file jigsaw.cc
 * \brief No.5
 *
 * \author sabertazimi, <sabertazimi@gmail.com>
 * \version 1.0
 * \date 2016
 * \license MIT
 */

/*
 * @link: http://blog.csdn.net/blzorro/article/details/41786121
 */

#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

typedef long long LL;
const int mod = 1000000007;
const int maxn = 130;
int off[5] = {0, 1, 1, 2, 2};
int d[maxn][maxn];
LL N;
int M;    //N行 M列
int maxs; //总状态数 1<<M

inline void int2arr(int num, bool arr[]) //数字转矩阵
{
    for (int i = 0; i < M; ++i, num >>= 1)
        arr[M - i - 1] = num & 1;
}

inline int arr2int(bool arr[]) //矩阵转数字
{
    int num = 0;
    for (int i = 0; i < M; (num <<= 1) |= arr[i++])
        ;
    return num;
}

bool sbuf[2][10];
inline bool check(int cur, int type) //判断在cur位置是否可以放置type方向的骨牌
{
    if (type == 1)
        return sbuf[0][cur] == 0 && sbuf[1][cur] == 0 && cur + 1 < M && sbuf[1][cur + 1] == 0;

    if (type == 2)
        return sbuf[0][cur] == 0 && sbuf[1][cur] == 0 && cur - 1 >= 0 && sbuf[1][cur - 1] == 0;

    if (type == 3)
        return sbuf[0][cur] == 0 && sbuf[1][cur] == 0 && cur + 1 < M && sbuf[0][cur + 1] == 0;

    if (type == 4)
        return sbuf[0][cur] == 0 && cur + 1 < M && sbuf[0][cur + 1] == 0 && sbuf[1][cur + 1] == 0;
}

inline void putblock(int cur, int type, int cont) //在cur位置放置type方向的骨牌
{
    if (type == 1)
        sbuf[1][cur] = sbuf[1][cur + 1] = cont;

    if (type == 2)
        sbuf[1][cur] = sbuf[1][cur - 1] = cont;

    if (type == 3)
        sbuf[1][cur] = cont;

    if (type == 4)
        sbuf[1][cur + 1] = cont;
}

void dfs(int cur) //dfs不多解释
{
    if (cur >= M)
    {
        ++d[arr2int(sbuf[1])][arr2int(sbuf[0])];
        return;
    }

    if (sbuf[0][cur] == 1)
        dfs(cur + 1); //如果当前位置已填，继续尝试下一列

    for (int i = 1; i <= 4; ++i)
        if (check(cur, i)) //如果当前位置可以放置i方向骨牌
        {
            putblock(cur, i, 1); //尝试放置i方向骨牌
            dfs(cur + off[i]);   //继续尝试后面列
            putblock(cur, i, 0); //撤销放置i方向骨牌
        }
}

inline void getd() //计算矩阵D
{
    maxs = 1 << M;
    memset(d, 0, sizeof(d));
    for (int i = 0; i < maxs; ++i)
        int2arr(i, sbuf[0]),
            dfs(0);
}

inline void matmult(int a[maxn][maxn], int b[maxn][maxn]) //矩阵乘法a*=b
{
    static int c[maxn][maxn];
    memset(c, 0, sizeof(c));
    for (int i = 0; i < maxs; ++i)
        for (int j = 0; j < maxs; ++j)
            for (int k = 0; k < maxs; ++k)
                c[i][j] = (c[i][j] + ((LL)a[i][k] * (LL)b[k][j]) % mod) % mod;

    memcpy(a, c, sizeof(c));
}

void matpower(int a[maxn][maxn], LL p) //矩阵快速幂a^p
{
    int ans[maxn][maxn];
    memset(ans, 0, sizeof(ans));
    for (int i = 0; i < maxs; ++i)
        ans[i][i] = 1; //ans=1

    for (; p; p >>= 1, matmult(a, a))
        if (p & 1)
            matmult(ans, a);     //ans*=a;
                                 //a*=a;
    memcpy(a, ans, sizeof(ans)); //return ans
}

int main(void)
{
    cin >> N >> M;
    getd();
    matpower(d, N);
    cout << d[maxs - 1][maxs - 1] << endl;
    return 0;
}
