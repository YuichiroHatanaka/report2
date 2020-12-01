#include <stdio.h>
#include <ctype.h>
 
int main(){
    FILE *lf,*sf;
    int c;
	
    if((!(lf=fopen("1.c","r"))) || (!(sf=fopen("test.txt","w")))){
        printf(" ファイルオープンエラー\n");
        return -1;
    }

    while((c=fgetc(lf))!=EOF){
    if(isalpha(c)){
      if('a' <= c && c <= 'z'){
	  c = toupper(c);
	}
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
