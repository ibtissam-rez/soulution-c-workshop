#include<stdio.h>
int main(){
    int nomber,carre,i;
    printf("entrez un nomber:");
    scanf("%d",&nomber);
    i=1;
for(i = 1; i*i <= nomber; i++){
    carre = i * i;
    if (carre % 2 == 0){
            printf("%d\n", carre);
}
       i += 1;
}
       return 0;
}