#include <stdio.h>
int i = 0;
int my_strlen (char* s) {
    while(*(s+i)!=0){
        i++;
    }return i++;
}
int rec_strlen(char*s){
    if(*s =='\0'){return 0;}
    else{return rec_strlen(s+1)+1;}
    
}
char* my_sort(char* s) {
    int len = 0;
    for(int i = 0; *(s+1) != '\0'; i++) {len++;}
    for(int i = 0; i < len; i++ ){
        for(int j = 0; j < len - 1 - i;j++) {
            if(*(s+j)>*(s+j+1)){
               char temp = *( s + j );
               *(s+j)= *(s+j+1);
               *(s+j+1)=temp;
            }
        }
    }
    return s;
}

int main()
{
    char s[64] = "IU is a girl!";
    printf("len = %d\n", my_strlen(s));
    printf("len = %d\n", rec_strlen(s));
    printf("sort = %s", my_sort);

    return 0;
}
