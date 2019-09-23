#include <bits/stdc++.h>
using namespace std;

int isOperator(char ch){
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){
        return 1;
    }
    else{
        return 0;
    }
}

int isIdentifier(char ch){
    if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string expression;
    cin>>expression;
    int size__ = expression.size();
    int bracketCheck = 0;
    for(int i = 0; i < size__; i++){
        if(expression[i] == '('){
            bracketCheck++;
            if(i+1 < size__ && !isIdentifier(expression[i+1]) || expression[i+1] == ')'){
                printf("Invalid\n");
                return 0;
            }
        }
        else if(expression[i] == ')'){
            bracketCheck--;
            if(i+1 < size__ && !isOperator(expression[i+1])){
                printf("Invalid\n");
                return 0;
            }
        }
        else if(isOperator(expression[i])){
            if(i+1 < size__ && (!isIdentifier(expression[i+1]) && expression[i+1] != '(' || expression[i+1] == ')')){
                printf("Invalid\n");
                return 0;
            }
        }
        else if(isIdentifier(expression[i])){
            while(isIdentifier(expression[i])){
                i++;
            }
            i--;
            if(i+1 < size__ && (!isOperator(expression[i+1]) && expression[i+1] != ')')){
                printf("Invalid\n");
                return 0;
            }
        }
        else if(expression[i] >= '0' && expression[i] <= '9'){

        }
        else{

        }
    }
    if(bracketCheck == 0){
        printf("Valid\n");
    }
    return 0;
}