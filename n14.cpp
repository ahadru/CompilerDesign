#include<bits/stdc++.h>
#define P(X) cout<<X<<endl;
#define P2(X,Y) cout<<X<<" "<<Y<<endl;
using namespace std;
#define MX 10000

vector<char>firstValues[MX];
char grammar[MX][100];
bool mark[MX];
int nonTerminal[200];

bool isNonTerminal(char ch){
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='('||ch==')') return 1;
    if(ch>='a'&&ch<='z') return 1;
    if(ch=='#') return 1;
    return 0;
}

/*
5
E=TR
R=+TR|#
T=FY
Y=*FY|#
F=(E)|i
*/

void calc(int pos){
    if(mark[pos]) return;
    char ch;
    int i,j,mr,v,ln=strlen(grammar[pos]);
    //P2("ss:",grammar[pos][0]);
    for(i=2;i<ln;i++){
        ch = grammar[pos][i];
        //P(grammar[pos])
        if(isNonTerminal(ch)){
            firstValues[pos].push_back(ch);
            while(grammar[pos][i]!='|'&&i<ln){
                //P(grammar[pos][i])
                i++;
            }
            //P(i)
        }
        else{
            v = nonTerminal[ch];
            mr=0;
            calc(v);
            //P2(ch,i)
            for(j=0;j<firstValues[v].size();j++){
                if(firstValues[v][j]!='#') {
                    firstValues[pos].push_back(firstValues[v][j]);
                }
                else mr=1;
            }
            if(!mr) break;
        }
    }
    //P(pos)
    mark[pos] = 1;
}

void first(int n){
    int i,j;
    for(i=0;i<n;i++){
        //P(i)
        if(!mark[i])calc(i);
    }
}

bool mr[MX];

void print(int n){
    int i,j;
    char ch;
    for(i=0;i<n;i++){
        memset(mr,0,sizeof mr);
        cout<<grammar[i][0]<<" = { ";
        for(j=0;j<firstValues[i].size();j++){
            ch = firstValues[i][j];
            if(j+1!=firstValues[i].size()&&!mr[ch]) cout<<ch<<" , ";
            else if(!mr[i]) cout<<ch;
            mr[ch]=1;
        }
        cout<<" }\n";
    }
}

int main(){
    int i,j,k,l,m,n;
    freopen("n14_.txt","r",stdin);
    cin>>n;
    for(i=0;i<n;i++){
        cin>>grammar[i];
        //cout<<"D "<<grammar[i]<<endl;
        nonTerminal[grammar[i][0]] = i;
    }
    first(n);
    print(n);
    return 0;
}

