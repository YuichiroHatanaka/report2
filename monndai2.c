#include<stdio.h>
#include <ctype.h>

int x;
int i;
int c;
int count[26];
FILE *lf, *sf;

int main(void){
  lf = fopen("test.txt","r");
  sf = fopen("test2.txt","w");
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
