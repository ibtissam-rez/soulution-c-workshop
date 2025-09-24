#include<stdio.h>
int main(){
    int heure ,minute,seconde;
    int minutee=0;
    printf("Entrez une heure (24h) :");
    scanf("%d",&heure);
    printf("Entrez  une minute :");
    scanf("%d",&minute);
    minutee=heure * 60 + minute;
    if( heure >24 || minute> 60){
          printf("il n'exixte pas un voyage a cette heure:");
    };
    if(minutee>480 && minutee<=583){
        printf("Lheure de depart la plus proche est 8h00 a.m.10h16 a.m.");
    }
     else if(minutee>583 && minutee<=679){
        printf("Lheure de depart la plus proche est9h43 a.m.11h52 a.m.");
     }
     else if(minutee>679 && minutee<=767){
                printf("L heure de depart la plus proche est 11h19 a.m.1h31 p.m.");
     }
     else if(minutee>767 && minutee<=840){
        printf("Lheure de depart la plus proche est 12h47 p.m.3h00 p.m.");
     }
      else if(minutee>840 && minutee<=945){
        printf("Lheure de depart la plus proche est 2h00 p.m.4h08 p.m.");

     }
       else if(minutee>945&& minutee<=1020){
         printf("Lheure de depart la plus proche est 3h45 p.m.5h55 p.m.");
       }
       else if (minutee>1020&& minutee<=1305){
          printf("Lheure de depart la plus proche est 7h00 p.m.9h20 p.m.");    
       }
       else if(minutee>=1305 ){
         printf("Lheure de depart la plus proche est 9h45 p.m.11h58 p.m.");  

       }
     return 0;


}