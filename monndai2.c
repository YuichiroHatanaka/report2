#include<stdio.h>
#include <ctype.h>

char a;
int x;
int i, j, k;
int c;
int tmp;
int count[26];
int rank[26];
FILE *lf;

int main(void){
  lf = fopen("test.txt","r");
  while((c=fgetc(lf))!=EOF){
    for(i = 0;i < 26;i++){
      if(c == 65 + i){
        count[i] = count[i] + 1;
      }
    }
  }
  for(i = 0;i < 26;i++){
    rank[i] = count[i];
  }
  for(j = 0;j < 25;j++){
    for(k = 0;k < 25-j;k++){
      if(rank[i] < rank[i+1]){
        tmp = rank[i];
        rank[i] = rank[i+1];
        rank[i+1] = tmp;
      }
    }
  }
  for(i = 0;i < 26;i++){
    printf("%c はテキスト内に %d 個ある。\n", 65+i, rank[i]);
  }
}
