#include <iostream>
#include <cctype>
#include <math.h>
using namespace std;

int main() {
    char a;
    int i = 0;
    while((a = cin.get()) != EOF){
            if (a != ' '){
              if(!islower(a)&& i%2==1) a = tolower(a);
              else if(islower(a)&& i%2==0) a = toupper(a);

              i++;
            }
            cout << a;
    }
    return 0;
}
