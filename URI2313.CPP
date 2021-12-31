#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a!= 0 || b!= 0 || c!=0)
    { 
        if(a==b && b==c)
        {
          printf("Valido-Equilatero\n");
          
          if(pow(c, 2)==pow(a,2)+pow(b,2))
        {
          printf("Retangulo: S\n");
        }
          else
        {
          printf("Retangulo: N\n");
        }
        }

        if(a!=b && b!=c && a!=c)
        {
          printf("Valido-Escaleno\n");
          
          if(pow(c, 2)==pow(a,2)+pow(b,2))
        {
          printf("Retangulo: S\n");
        }
          else
        {
          printf("Retangulo: N\n");
        }
        }
        if((a==b && a!=c)||(b==c && b!=a)||(c==a && c!= b))
        {
          printf("Valido-Isoceles\n");
          
          if(pow(c, 2)==pow(a,2)+pow(b,2))
        {
          printf("Retangulo: S\n");
        }
          else
        {
          printf("Retangulo: N\n");
        }
        }
    }
    else
    {
    printf("Invalido\n");
    }
    return 0; 
}
