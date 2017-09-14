#include<stdio.h>  
void create(void);  
int safe(int,int j,int m,int n);  
int isLink(int ,int);  
void dfs(int);  
void out(void);  
  
struct problem{  
    int farmer;  
    int wolf;  
    int sheep;  
    int vegetable;  
};   
  
int visit[16];  
int max=0;  
int pa=0;  
struct problem p[16];  
int link[16][16];  
int path[16];  
  
int main(){  
    int i;  
    for(i=0;i<16;i++) visit[i]=0;  
    create();  
    dfs(0);  
    return 0;  
}  
  
void create(){  
    int i,j,m,n;  
    for(i=0;i<2;i++)  
        for(j=0;j<2;j++)  
            for(m=0;m<2;m++)  
                for(n=0;n<2;n++){  
                    if(safe(i,j,m,n)){  
                        p[max].farmer=i;  
                        p[max].wolf=j;  
                        p[max].sheep=m;  
                        p[max].vegetable=n;  
                        max++;  
                    }  
                }  
    max--;  
    for(i=0;i<=max;i++)  
        for(j=0;j<=max;j++){  
            if(isLink(i,j))  
                link[i][j]=1;  
            else   
                link[i][j]=0;  
        }  
}  
  
int safe(int i,int j,int m,int n){  
    if(i!=m&&(j==m||m==n))  return 0;  
    return 1;  
}  
  
int isLink(int i,int j){  
    int k=0;  
    if(p[i].wolf!=p[j].wolf) k++;  
    if(p[i].sheep!=p[j].sheep) k++;  
    if(p[i].vegetable!=p[j].vegetable) k++;  
    if(p[i].farmer!=p[j].farmer&&k<=1) return 1;  
    return 0;  
}  
  
void dfs(int n){  
    int i;  
    visit[n]=1;  
    path[pa++]=n;  
    if(n==max){  
        out();  
        return;  
    }  
    for(i=0;i<=max;i++){  
        if(link[n][i]&&!visit[i]){  
            dfs(i);  
            pa--;  
            visit[i]=0;   
        }  
    }  
}  
  
void out(){  
    int i;  
    for(i=1;i<pa;i++){  
        if(p[path[i-1]].wolf==0&&p[path[i]].wolf==1) printf("wolf_go\n");     
        else if(p[path[i-1]].wolf==1&&p[path[i]].wolf==0) printf("wolf_come\n");  
          
        else if(p[path[i-1]].sheep==0&&p[path[i]].sheep==1) printf("sheep_go\n");  
        else if(p[path[i-1]].sheep==1&&p[path[i]].sheep==0) printf("sheep_come\n");  
          
        else if(p[path[i-1]].vegetable==0&&p[path[i]].vegetable==1) printf("vegetable_go\n");  
        else if(p[path[i-1]].vegetable==1&&p[path[i]].vegetable==0) printf("vegetable_come\n");  
          
        else if(p[path[i-1]].farmer==0&&p[path[i]].farmer==1) printf("nothing_go\n");  
        else if(p[path[i-1]].farmer==1&&p[path[i]].farmer==0) printf("nothing_come\n");  
    }  
    printf("succeed\n\n");  
}  