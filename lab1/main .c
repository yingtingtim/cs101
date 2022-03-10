#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main()
{
    FILE *fp;
    char name[16];
    int n,h;
    printf("歡迎光臨長庚樂透彩購買機台\n請問要買幾組樂透彩 : ");
    scanf("%d", &n);
    printf("請輸入操作人員ID:(0-5):");
    scanf("%d",&h);
    printf("已將您購買的 %d 組樂透組合輸出至 lotto.txt\n",n);
    for(int l=1,m=0; m==0;l++){
        sprintf(name, "lotto[%04d].txt",l);
        if(access(name,F_OK)!=0) {
            fp = fopen(name,"w+");
            fprintf(fp,"======== lotto649 ========\n");
            fprintf(fp,"=======+ No.%05d +=======\n",l);
            m=1;
        };
    }
    int write_array[1] = {0};
    FILE *fp2=fopen(counter_file,"r");
    if(fp == NULL){
        FILE*tmpfp = fopen(counter_file,"wb+");
        fwrite(write_array, sizeof(int),1,tmpfp);
        fclose(tmpfp);
    }
    int get_counter(){
        int read_array[1];
    FILE *fp2=fopen(counter_file,"rb");
    fread(read_arr,sizeof(int),tmpfp);
    fclose(tmpfp);
    return read_array[0];
    }
    int write_arrary[1];
    write_array[0] = counter;
    FILE* tmpfp =fopen(counter_file,"wb");
    fwrite(write_array, sizeof(int),1,tmpfp);
    fclose(tmpfp);
    int a[6];
    int b[70];
    int c;
    for (int i=1; i<70; i++) {
        b[i]=i;
    }
    int i,T,x,j;
    T=7;
    x=6;
    srand(time(NULL));
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
    fprintf(fp,"=======*Op.%05d*=======",h)    
    fprintf(fp,"=======csie@CGU========\n");
    fclose(fp);

    return 0;
}
