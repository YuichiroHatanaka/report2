#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

int x;
int i;
int c;
int M;
int randnum;
int count[26];
int str[i]
FILE *lf *sf;

int main(void){
  srand((unsigned int)time(NULL));
  if((!(lf=fopen("test.txt","r"))) || (!(sf=fopen("test2.txt","w")))){
    printf(" ファイルオープンエラー\n");
    return -1;
  }
  i = 0;
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
  for(i = 0;i < 26;i++){
    M = M + count[i];
  }
  M = M + count[26];
  for(i = 0; i < M; i++) {
	  	fscanf(lf, "%c", &str[i]);		//テキストファイルから一文字ずつ配列に格納
  	}
  	for(count = 0; count < 100; i++){
	  	randnum = rand()%M;			//乱数の生成
	  	fprintf(sf, "%c", str[randnum]);		//配列の乱数番目の要素を入力
	  }
  printf("\n");
  fclose(lf);
  fclose(sf);
  return 0;
}
