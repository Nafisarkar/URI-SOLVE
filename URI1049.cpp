#include<stdio.h>
int main(){
    char name1[10],name2[10],name3[10];
    scanf("%s\n",name1);
    scanf("%s\n",name2);
    scanf("%s",name3);
    if (name1[0]=='v'){
        if(name2[0]=='a'){
            if(name3[0]=='c'){
                printf("aguia\n");
            }
            else if(name3[0]=='o'){
                printf("pomba\n");
            }
        }
        else if(name2[0]=='m'){
            if(name3[0]=='o'){
                printf("homem\n");
            }
            else if(name3[0]=='h'){
                printf("vaca\n");
            }

        }
    }
    else if(name1[0]=='i'){
        if(name2[0]=='i'){
            if(name3[2]=='m'){
                printf("pulga\n");
            }
            else if(name3[2]=='r'){
                printf("lagarta\n");
            }
        }
        else if(name2[0]=='a'){
            if(name3[0]=='h'){
                printf("sanguessuga\n");
            }
            else if(name3[0]=='o'){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}