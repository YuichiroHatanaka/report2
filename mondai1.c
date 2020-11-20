#include <stdio.h>
#include <ctype.h>
 
int main(){
    //ファイル構造体へのポインタを宣言
    //読込み用、書き込み用それぞれ宣言する
    FILE *lf,*sf;
    int c;
 
    //読み込み、書込みそれぞれでオープン
    //短縮して書いていますが、
    //if(lf=fopen("1.c","r")==NULL){}
    //if(sf=fopen("test.c","w")==NULL){}
    //の場合と同じです。
    if(!(lf=fopen("1.c","r")) || (!(sf=fopen("test.c","w")))){
        printf(" ファイルオープンエラー\n");
        return -1;
    }
 
    //ファイルの中身がEOFになるまで続ける
    //ファイルから一文字読み込みcへ格納
    while((c=fgetc(lf))!=EOF){
        //ファイルに出力
	
    if(isalpha(c)){
      fputc(c,sf);
    }else if(c == ' '){
      fputc(c,sf);
    }else if(c == '\n'){
      fputc(c,sf);
    }else{
      fputc(' ',sf);
    }
    }
 
    //書込みクローズ
    fclose(sf);
    //読み込みクローズ
    fclose(lf);
 
    return 0;
}

