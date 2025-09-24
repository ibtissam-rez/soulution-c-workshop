#include<stdio.h>
int main(){
    float volume=0,r=10;
    const float pi=3.14;
    r=r*r*r;
    volume=(4.0f/3.0f)*pi*r;
    printf("/la volume est %.2f",volume);
    return 0;
    
}