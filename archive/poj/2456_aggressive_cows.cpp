/*!
* \file 2456_aggressive_cows.cc
* \brief
*
* \author sabertazimi, <sabertazimi@gmail.com>
* \version 1.0
* \date 2017
* \license MIT
*/

#include<stdio.h>  
#include<algorithm>  

using namespace std;  

const int N = 100005;  

int a[N], n, c;  

bool judge(int x)  
{  
    int cnt = 1, tmp = a[0];  
    for(int i = 1; i <n; i++)  
    {  
        if(a[i] - tmp >= x)  
        {  
            cnt++;  
            tmp = a[i];  
            if(cnt>= c) // 可以放下 C 头牛  
            return true;  
        }  
    }  
    return false;  
}  

int get_ans() // 二分搜索最小值  
{  
    int l = 0, r = a[n-1] - a[0];  
    while(l <= r)  
    {  
        int mid = (l + r) / 2;  
        if(judge(mid))  
        l = mid + 1;  
        else  
        r = mid - 1;  
    }  
    return l - 1;  
}  

int main()  
{  
    while(~scanf("%d%d",&n,&c))  
    {  
        for(int i = 0; i <n; i++)  
        scanf("%d",&a[i]);  
        sort(a, a+n);  
        printf("%d\n",get_ans());  
    }  
    return 0;  
}  
