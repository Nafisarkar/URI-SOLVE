#include<stdio.h>
#include<string.h>
int main(){
    int j,a,i,size,box;
    char line[100];
    char oline[100]={};
    scanf("%d",&a);
    getchar();
    for (i = a;i>0;i--)
    {
        fgets(line,99,stdin);
        size=strlen(line);
        for(j=0;j<size;j++){
            if(j==0 && line[j]!=' '){
                oline[j]=line[j];
                box++;
            }
            if(line[j]==' ' && line[j+1]!=' '){
                oline[box]=line[j+1];
                box++;
            }  
        }
        puts(oline);
    }
    
    return 0;
}