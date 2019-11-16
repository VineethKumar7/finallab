#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void main(){
  char a[100];
  int j=0, length;
  printf("Enter the line : ");
  gets(a);
  if(a[0]=='/'){
    if(a[1]=='/'){
      printf("It is comment line \n ");
      j=1;
    }
    else if(a[1]=='*'){
      length = strlen(a);
      if(a[length-2] == '*' && a[length-1] == '/'){
        printf("It is a comment line \n");
        j=1;
        exit(0);
      }
    }
  }
  if (j==0){
    printf("It is not a comment \n");
  }
}
