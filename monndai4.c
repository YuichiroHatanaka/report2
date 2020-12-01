#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int x;
int i, j;
int c;
int M;
int a;
int count[26];
int GetRandom(int min, int max);
FILE *lf;

int GetRandom(int min, int max){
  return min + (int)(rand()*(max-min+1.0)/(1.0+RAND_MAX));
}

int main(void){
  lf = fopen("test.txt","r");
  if(lf == NULL){
     printf(" ファイルオープンエラー\n");
     return -1;
  }
  while((c=fgetc(lf))!=EOF){
    for(i = 0;i < 26;i++){
      if(c == 65 + i){
        count[i] = count[i] + 1;
       }
     }
  }
  for(i = 0;i < 26;i++){
    M = M + count[i];
  }
//printf("%d\n",M);
  for(i = 0;i < 100;i++){
    a = GetRandom(1,M);
//printf("ランダム = %d",a);
    int p = 0;
    for(j = 0;j < 26;j++){
      if(p <  a && a <= p + count[j]){
        printf("%c", 65+j);
        }
    p = p + count[j];
     }
   }
  printf("\n");
  fclose(lf);
}
