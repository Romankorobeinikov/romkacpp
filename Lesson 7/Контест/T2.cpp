#include <stdio.h>
#include <string.h>
#include <iostream>
#include <cctype>
int main()
{
char s[1000];

gets(s);
unsigned int a,i;
a=0;
for (i=0;i<strlen(s)-1;i++){
 if (s[i]!=' '){
    if (islower(s[i]) && i % 2 == 0)
            s = std::toupper(s[i]);
 } else if ((!islower(s[i]) && i % 2 != 0))
            s = std::tolower(s);
}

std::cout<<s;
}
