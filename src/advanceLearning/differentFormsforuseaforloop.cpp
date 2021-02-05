#include <cstdio>
using namespace std;

int main(){
    char s[] = "hello world";
    

    for (int i = 0; s[i] != 0;++i)
        printf("first basic for loop %c\n",s[i]);
    for (char *cp=s; *cp;++cp)
        printf("second for loop %c\n",*cp);
    for (char c :  s )
    {
        if(c==0)
            break;
        printf("third for loop %c\n", c);
    }

    return 0;
}