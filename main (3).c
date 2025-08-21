#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void) {
 int toa=0;
 int tob=0;
 int pla;
 int plb;
 int plaa; 
 int plbb;  
 srand(time(NULL));
 for(int i=0;i<3;i++) {
   pla=rand()%6+1;
 toa+=pla;
   plaa=rand()%6+1;
 toa+=plaa;
 }
 printf("%i\n",toa);
  for(int i=0;i<3;i++) {
     plb=rand()%6+1;
   tob+=plb;
     plbb=rand()%6+1;
   tob+=plbb;
   }
   printf("%i\n",tob);
 if(pla==plaa){
    pla=rand()%6+1;
 toa+=pla;
 }
printf("%i\n",toa);
  if(plb==plbb){
    plb=rand()%6+1;
  tob+=plb;
  }
  printf("%i\n",tob);
  if(toa<tob){
    printf("player 2 wins");
  }
  if(toa>tob){
    printf("player 1 wins");
  }
  return 0;
}