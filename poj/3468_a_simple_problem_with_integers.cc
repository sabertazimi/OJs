#include<stdio.h>
#define lson l,m,rt<<1
#define rson m+1,r,rt<<1|1
#define N 100010
__int64 tree[N<<2],add[N<<2];
void pushup(int rt)
{
    tree[rt]=tree[rt<<1]+tree[rt<<1|1];
}
void pushdown(int rt,int m)
{
    if(add[rt])
    {
        add[rt<<1]+=add[rt];
        add[rt<<1|1]+=add[rt];
        tree[rt<<1]+=add[rt]*(m-(m>>1));
        tree[rt<<1|1]+=add[rt]*(m>>1);
        add[rt]=0;
    }
}
void build(int l,int r,int rt)
{
    add[rt]=0;
    if(l==r)
    {
        scanf("%I64d",&tree[rt]);
        return ;
    }
    int m=(l+r)>>1;
    build(lson);
    build(rson);
    pushup(rt);
}
void update(int L,int R,int c,int l,int r,int rt)
{
    if(L<=l&&R>=r)
    {
        add[rt]+=c;
        tree[rt]+=c*(r-l+1);
        return ;
    }
    pushdown(rt,r-l+1);
    int m=(l+r)>>1;
    if(L<=m)
        update(L,R,c,lson);
    if(R>m)
        update(L,R,c,rson);
    pushup(rt);
}
__int64 query(int L,int R,int l,int r,int rt)
{
    if(L<=l&&R>=r)
        return tree[rt];
    pushdown(rt,r-l+1);
    int m=(l+r)>>1;
    __int64 ret=0;
    if(L<=m)
        ret+=query(L,R,lson);
    if(R>m)
        ret+=query(L,R,rson);
    return ret;
}
int main()
{
    int n,q,a,b,c;
    char s[2];
    scanf("%d%d",&n,&q);
    build(1,n,1);
    while(q--)
    {
        scanf("%s",s);
        if(s[0]=='Q')
        {
            scanf("%d%d",&a,&b);
            printf("%I64d\n",query(a,b,1,n,1));
        }
        else
        {
            scanf("%d%d%d",&a,&b,&c);
            update(a,b,c,1,n,1);
        }
    }
    return 0;
}
