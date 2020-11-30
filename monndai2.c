#include<stdio.h>
#include <ctype.h>

char a;
int x, i;
int c;
int count[26];
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
    printf("%c はテキスト内に %d 個ある。\n", 65+i, count[i]);
  }
}
