#include<stdio.h>

int t[4][7]; // row = n+1, column = w+1

int max(int a,int b){
    return a<b?b:a;
}
int kp(int wt[],int pr[],int w,int n){
    
    if(w==0||n==0){
        return 0;
    }
    if(t[n][w]!=-1){
        return t[n][w];
    }
        if(wt[n-1]<=w){
            t[n][w]=max((pr[n-1]+kp(wt,pr,w-wt[n-1],n-1)),kp(wt,pr,w,n-1));
            return t[n][w];
           
        }
        if(wt[n-1]>w) t[n][w]= kp(wt,pr,w,n-1);
            return t[n][w];
            
    
}

int main(){
    int wt[] = {1, 2, 3};
    int pr[] = {10, 15, 40};
    int n = 3;
    int W = 6;
    for(int i=0;i<4;i++){
        for(int j=0;j<7;j++){
            t[i][j]=-1;
        }
    }
    printf("%d\n",kp(wt,pr,W,n));
    printf("%d",count);
    return 0;
}
