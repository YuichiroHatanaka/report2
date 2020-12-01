#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x;
int i;
int c;
int maxnum;
int randnum;
int count[26];

FILE *lf, *sf;

int main(void){
  srand((unsigned int)time(NULL));
  if((!(lf=fopen("test.txt","r"))) || (!(sf=fopen("test3.txt","w")))){
    printf(" ファイルオープンエラー\n");
    return -1;
  }
  
  while((c=fgetc(lf))!=EOF){
    for(i = 0;i < 26;i++){
      
      if(c == 65 + i){
        count[i] = count[i] + 1;
       }
      
      if(c == ' '){
        count[26] = count[26] + 1;
      }
      
    }
  }
  
  maxnum = 0;
  
  for(i = 0;i < 26;i++){
    maxnum = maxnum + count[i];
  }
  
  maxnum = maxnum + count[26];

  char str[maxnum];

  for(i = 0; i < maxnum; i++) {
    fscanf(lf, "%c", &str[i]);		//テキストファイルから一文字ずつ配列に格納
  }
  
//printf("%c",str[10]);
  for(i = 0; i < 100; i++){
    randnum = rand()%maxnum;			//乱数の生成
    fprintf(sf, "%c", str[randnum]);		//配列の乱数番目の要素を入力
    }
  fclose(lf);
  fclose(sf);
}
