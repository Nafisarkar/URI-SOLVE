#include<stdio.h>
int main(){
    int fule_type,fule_type_alcool=0,fule_type_gasoline=0,fule_type_diesel=0;
    for(;;){
        scanf("%d",&fule_type);
        if(fule_type==4){
            break;
        }
        else{
            if(fule_type==1){
              fule_type_alcool+=1;
            }
            else if(fule_type==2){
              fule_type_gasoline+=1;
            }
            else if(fule_type==3){
                fule_type_diesel+=1;
            }
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",fule_type_alcool,fule_type_gasoline,fule_type_diesel);
    return 0;
}