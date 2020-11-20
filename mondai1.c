#include <stdio.h>
#include <ctype.h>
 
int main(){
    FILE *lf,*sf;
    int c;
 
    if(!(lf=fopen("1.c","r")) || (!(sf=fopen("test.c","w")))){
     //1.c test.cはファイル名
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
    fclose(sf);
    fclose(lf);
 
    return 0;
}
