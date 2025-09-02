#include <stdio.h>
#
int main(){
    float r=10;
    float p = 3.14 ;

    
    
    float v = (4.0f/3.0f) * p;
    for (int i = 0; i < 3; i++)
    {
        v = v*r;
    }
    
    
    
    printf("the volume is : %.1f",v);

    return 0;
}