#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(int argc, char** argv) {
    char st[100];
    int k = atoi(argv[1]);
    printf("%d\n", k);
    printf("Enter your sentance: ");
    scanf("%[^\n]*", st);
    int len = strlen(st);
    for (int i = 0; i < len; i++){
      if (isalpha(st[i])){
        if (st[i] == toupper(st[i])){
        int num = st[i];
        if (num+k > 90){printf("%c", num+k-26);}
        else{printf("%c", num+k);}}
        else{
          int num = st[i];
          if (num+k > 122){printf("%c", num+k -26);}
          else {printf("%c", num+k);}}

      }
      else{printf("%c", st[i]);}
    }
}
