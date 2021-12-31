#include <iostream>
#include <math.h>
#include"inout.h"
using namespace std;
int main(){
    inout();
    int x,y,z;
    while(cin >> x >> y >> z){
        if(x == 0 && y == 0 && z == 0){
            break;
        }
        else{
            long long int multibro = x*y*z;
            multibro = (int) cbrt(multibro);
            cout << multibro << endl;
        }
    }
    return 0;
}