#include<bits/stdc++.h>
#include"MY_Stack_Temp.h"
using namespace std;

bool balanced_parenthesis(string s){
Stack <char> st;
for(int i=0;i<s.length();i++){

    /// opening brackets handle
    if(s[i]=='(' || s[i] == '{' || s[i]=='['){
       st.push(s[i]);
    }
    else{
        if(s[i]==')'){
            if(st.top_Value()=='('){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(s[i]=='}'){
            if(st.top_Value()=='{'){
                st.pop();
            }
            else{
                return false;
            }
        }

        else if(s[i]==']'){
            if(st.top_Value()=='['){
                st.pop();
            }
            else{
                return false;
            }
        }
    }
}
if(!st.empty_stack()){
    return false;
}

return true;
}

int main(){
string s;
cin>> s;
bool b = balanced_parenthesis(s);
if(b) cout<< "YES\n";
else cout<< "NO\n";

}
