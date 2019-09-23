#include <bits/stdc++.h>
using namespace std;
const vector<string> KEYWORD = {
    "alignas", "alignof", "and", "and_eq", "asm", "atomic_cancel", "atomic_commit", "atomic_noexcept",
    "auto", "bitand", "bitor", "bool", "break", "case", "catch", "char", "char8_t", "char16_t",
    "char32_t", "class", "concept", "const", "consteval", "constexpr", "const_cast", "continue",
    "co_await","co_return", "co_yield", "decltype", "default", "delete", "do", "double", "dynamic_cast",
    "else","enum","explicit","export","extern","false","float","for","friend","goto","if","inline","int",
    "long","mutable","namespace","new","noexcept","not","not_eq","nullptr","operator","or","or_eq",
    "private","protected","public","reflexpr","register","reinterpret_cast","requires","return","short",
    "signed","sizeof","static","static_assert","static_cast","struct","switch","synchronized","template",
    "this","thread_local","throw","true","try","typedef","typeid","typename", "union","unsigned","using",
    "virtual","void","volatile","wchar_t","while","xor","xor_eq"
};

bool isVariable(string word){

}
bool isKeyword(string word){

}
bool isOperator(string word){

}


int main(){
    ifstream inputCode;
    inputCode.open("input_code.txt");
    while(inputCode){
        string line;
        getline(inputCode,line);

    }   
}