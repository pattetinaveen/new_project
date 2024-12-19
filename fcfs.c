#inclue<stdio.h>
int main()
{
    int n,i;
    int bt[10],wt[10],tat[10];
    int twt=0,ttat=0;

    printf("enter the no of prosesses:");
    scanf("%d",&n);

    printf("enter the burst time for each process;");
    for(i=0;i<n;i++)
    {
        printf("prosess %d";i+1);
        scanf("%d";&bt[i]);

    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=bt[i-1]+wt[i-1];

    }
     for(i=1;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        
    }
    

}