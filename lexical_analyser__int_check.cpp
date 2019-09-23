#include <bits/stdc++.h>
using namespace std;

bool isIntegerVar(string s){
	if(s.size() > 0 && ((s[0] >= 'i' && s[0] <= 'n') || (s[0] >= 'I' && s[0] <= 'N'))){
		for(int i = 1;i<s.size();i++){
			if((s[i] < 'a' && s[i] > 'z') || (s[i] < 'A' && s[i] > 'Z') || (s[i] < '0' && s[i] > '9')){
				return false;
			}
		}
	}
	else{
		return false;
	}
	return true;
}

bool isShortInt(string s){
	if(s.size() <= 4){
		if(s.size() > 0 && (s[0] >= '1' && s[0] <= '9') ){
			for(int i =1;i<s.size();i++){
				if(s[0] < '0' && s[0] > '9'){
					return false;
				}
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
	return true;
}

bool isLongInt(string s){
	if (s.size() > 0 && (s[0] >= '1' && s[0] <= '9'))
	{
		for (int i = 1; i < s.size(); i++)
		{
			if (s[0] < '0' && s[0] > '9')
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	return true;
}

int main(){
	string input;
	cin>>input;
	if(isIntegerVar(input)){
		cout<<"Integer Variable\n";
	}
	else if(isShortInt(input)){
		cout<<"Short Integer\n";
	}
	else if(isLongInt(input)){
		cout<<"Long Integer\n";
	}
	else{
		cout<<"Invailed\n";
	}

}