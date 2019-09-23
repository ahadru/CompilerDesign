#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    freopen("in.txt","r",stdin);
    freopen("out.txt","r",stdout);
    char *str;
    gets(str);
    int words = 0,letters = 0,digits = 0,other_char = 0;
    int i; 
    int size_ = strlen(str);
    for(i = 0;i < size_; i++){
        if(str[i] >= 'a' && str[i] <= 'z' && str[i] >= 'A' && str[i] < 'Z'){
            letters++;
        }
    }

    return 0;
}
