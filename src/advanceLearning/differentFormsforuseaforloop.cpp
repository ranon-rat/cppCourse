#include <cstdio>

int main(){
    char s[] = "hello world";
    

    for (int i = 0; s[i] != 0;++i)
        printf("first basic for loop %s\n",s[i]);
    for (char *cp=s; *cp;++cp)
        printf("second for loop %s\n",cp);
    for (char c:s){
        if(c==0)
            break;
        printf("third for loop %s\n", cp);
    }
          
    return 0;
}