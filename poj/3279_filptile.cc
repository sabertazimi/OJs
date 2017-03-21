#include <iostream>
#include <cstdio>

using namespace std;

const int maxn = 16;
int M,N;
const int dx[5] = {-1,0,0,0,1};
const int dy[5] = {0,-1,0,1,0};
int tile[maxn][maxn];
int opt[maxn][maxn]; //保存最优解
int flip[maxn][maxn]; //保存中间结果

//查询(x,y）的颜色
int get(int x,int y) {
    int c = tile[x][y];  //注意这里要加上原来的状态
    for (int d = 0; d < 5; d++)  //查询周围四个以及自己的翻转次数
    {
        int x2 = x + dx[d],y2 = y + dy[d];
        if (0 <= x2 && x2 < M && 0 <= y2 && y2 < N)
        {
            c += flip[x2][y2];
        }
    }
    return c % 2;  //奇数为1，偶数为0
}

//求出第1行确定的情况下的最小操作次数
//不存在解得话，返回-1
int calc()
{
    //求出从第2行开始的翻转方法
    for (int i = 1; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if (get(i - 1,j) != 0)
            {
                //如果（i- 1，j）是黑色的话，则必须翻转这个格子
                flip[i][j] = 1;
            }
        }
    }
    //判断最后一行是否全白
    for (int j = 0; j < N; j++)
    {
        //无解
        if (get(M-1,j) != 0) return -1;
    }

    //统计翻转次数
    int res = 0;
    for (int i = 0; i < M;i ++)
    {
        for (int j = 0; j < N; j++)
        {
            res += flip[i][j];
        }
    }
    return res;
}
void solve()
{
    int res = -1;
    //按照字典序尝试第一行的所有可能性
    for (int i = 0; i < 1 << N; i++)  //i表示一个二进制数，用来枚举第1行的各种不同翻法，如0001就是只翻最后一个
    {
        memset(flip,0,sizeof(flip));
        for (int j = 0; j < N; j++)
        {
            flip[0][N - j - 1] = i >> j & 1;
            /*eg:0011001
            ①j == 0; i >> j 即0011001 & 1 -> 1
            ②j == 1; i >> j 即0001100 & 1 -> 0
            ...
            每次取出最后一位，存入flip中
            */
        }
        int num = calc();  //num记录翻转次数
        if (num >= 0 && ( res < 0 || res > num))  //如果找到一种可能并且所用步数更少的话，记下这种翻法
        {
            res = num;
            memcpy(opt,flip,sizeof(flip));
        }
    }
    if (res < 0)
    {
        //无解
        printf("IMPOSSIBLE\n");
    }
    else  //最后找到的就是最少的翻法，模拟一遍，然后输出
    {
        for (int  i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                printf("%d%c",opt[i][j], j + 1 == N ? '\n': ' ');
            }
        }
    }
}

int main()
{
    cin >> M >> N;
    for (int i = 0; i < M; i ++)  //数据输入
    {
        for (int j = 0; j < N; j++)
        {
            cin >> tile[i][j]; //0表示白色，1表示黑色
        }
    }
    solve();
    return 0;
}
