#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    FILE *fp;
    fp = fopen("lotto.txt","wb+");
    int n;
    printf("歡迎光臨長庚樂透彩購買機台\n請問要買幾組樂透彩 : ");
    scanf("%d", &n);
    printf("已將您購買的 %d 組樂透組合輸出至 lotto.txt\n",n);
    int a[6];
    int b[70];
    int c;
    for (int i=1; i<70; i++) {
        b[i]=i;
    }
    int i,T,x,j;
    T=7;
    x=6;
    srand(T);
    fprintf(fp,"======== lotto649 ========\n");
    time_t curtime;
    time(&curtime);
    fprintf(fp," %s\n",ctime(&curtime));
    for(int j=1;j<x;j++){
        
        fprintf(fp,"[%d] ",j);
        if(j<n+1){
        for(int i=0;i<x+1;i++){
        if(i<6){
            fprintf(fp,"%02d ",rand()%69);
        }
            else{
                fprintf(fp,"%02d ",rand()%10);
            }
        }
         fprintf(fp,"\n");
        }
        else{
            for(int i=0;i<x+1;i++){
            fprintf(fp,"-- ");
            }
            fprintf(fp,"\n");
        }
        
    }
        
    fprintf(fp,"=======csie@CGU========\n");
    fclose(fp);

    return 0;
}
