#include<stdio.h>
#include <ctype.h>

int x;
int i;
int c;
int count[26];
FILE *lf, *sf;

int main(void){
  if((!(lf=fopen("1.c","r"))) || (!(sf=fopen("test.txt","w")))){
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
    fprintf(sf, "%c はテキスト内に %d 個ある。\n", 65+i, count[i]);
  }
  fclose(lf);
  fclose(sf);
}
