#include <stdio.h>
int main(){
  char caractere [100];
  int nombre, i;
  printf("Entrez un numero de telephone:");
  scanf("%c",caractere);

for (i=0;caractere != '\0';i++){
  if(caractere[i]=='A'||caractere[i]=='B'||caractere[i]== 'C'){
    nombre=2;
  }
  else if (caractere[i]=='D'||caractere[i]=='E'||caractere[i]=='F'){
    nombre=3;
  }
  else if(caractere[i]=='G'||caractere[i]=='H'||caractere[i]=='I'){
    nombre=4;
  }
  else if (caractere[i]=='J'||caractere[i]=='K'||caractere[i]=='L'){
    nombre=5;
  }
  else if (caractere[i]=='M'||caractere[i]=='N'||caractere[i]=='O'){  
    nombre=6;
  }
  else if (caractere[i]=='P'||caractere[i]=='R'||caractere[i]=='S'){  
    nombre=7;
  }
  else if (caractere[i]== 'T'||caractere[i]=='U'||caractere[i]=='V'){  
    nombre=8;
  }
  else if (caractere[i]=='W'||caractere[i]=='X'||caractere[i]=='Y'){  
    nombre=9;
  }
  
  printf("%c",caractere[i]);
}
  return 0;
}