#include <stdio.h>
#include <stdlib.h>
#include<algorithm>

using namespace std;

#define MAX_2 4001
#define MAX 16100000

int num[MAX_2][4],left[MAX],right[MAX];

int ErFen(int a[],int n,int x)  //二分查找，在数组right[]中查找x的位置，并且反馈x出现的次数
{
    int pd=0,ant,lefts,rights,middle;
    lefts=0;
    rights=n-1;
    while(lefts<=rights)
    {
        middle=(lefts+rights)>>1;
        if(a[middle]==x)
        {
            pd=1;
            break;
        }
        else if(x>a[middle])  lefts=middle+1;
        else   rights=middle-1;
    }
    if(pd)
    {
        for(ant=0;lefts<n;lefts++)  //***这里是易错点，函数需要返回的是x出现的次数!
        {
            if(a[lefts]==x)  ant++;
            else if(ant!=0&&a[lefts]!=x)  break;
        }
        return ant;
    }
    return -1;
}

int main()
{
    int n,m,i,j,k,temp;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<4;j++)
            {
                scanf("%d",&num[i][j]);
            }
        }
        for(i=0,k=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                left[k]=num[i][0]+num[j][1];   //1,2组列表相加
                right[k++]=num[i][2]+num[j][3];  //3,4组列表相加
            }
        }
        sort(left,left+k);  //qsort排序会TLE
        sort(right,right+k);
        for(i=0,m=0;i<k;i++)
        {
            temp=ErFen(right,k,-left[i]);  //*** right[j]=-left[i]则满足相加为0
            if(temp!=-1)
                m+=temp;;
        }
        printf("%d\n",m);
    }
    return 0;
}
