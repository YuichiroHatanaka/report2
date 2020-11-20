#include <stdio.h>
#include <ctype.h>
 
int main(){
    FILE *lf,*sf;
    int c;
 
    if(!(lf=fopen("1.c","r")) || (!(sf=fopen("test.c","w")))){
        printf(" ファイルオープンエラー\n");
        return -1;
    }
 
    while((c=fgetc(lf))!=EOF){
        //fputc(c,sf);
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
