#include<stdio.h>
int main(){
    int flag=0;
    int n,s,diff,tst=0;
    printf("Enter size of memory");
    scanf("%d",&s);
    printf("enter the no of request");
    scanf("%d",&n);
    int req[n+1];
    printf("Enter the current head position");
    scanf("%d",&req[0]);
    printf("Enter the requests");
    for (int i = 1; i <= n; i++)
    {
        scanf("%d",&req[i]);
    }
    int sl;
    int prediff=s;
    for (int i = 1; i <= n; i++)
    {
        if (req[i]<req[0])
        {
            diff=req[0]-req[i];
            if (diff<prediff)
            {
                sl=req[i];
                prediff=diff;
            }    
        }    
    }
    tst=((s-1)-req[0])+(s-1)+sl;
    printf("Total seek time is %d",tst);
    return 0;
    
}