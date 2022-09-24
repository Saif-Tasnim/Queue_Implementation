#include<bits/stdc++.h>
#include"MY_Stack_Temp.h"
#include"header.h"
using namespace std;

int main(){

Stack<int> st;
Queue <int> q;

int n;
cout<< "Enter queue size : ";
cin>> n;
int k,x,y;
cout<< "Enter K number of group : ";
cin>> k;
x = n/k;
y = n%k;
for(int i=0;i<n;i++){
    int val;
    cin>> val;
    q.push(val);
}

for(int i = 0; i<x; i++){
    int j = 1;
    while(j<=k){
        st.push(q.pop());
        j++;
    }
    while(!st.empty_stack()){
        q.push(st.pop());
    }

}

for(int i = 0; i<y; i++){
    int j = 1;
    while(j<=k){
        st.push(q.pop());
        j++;
    }
    while(!st.empty_stack()){
        q.push(st.pop());
    }
    }
    
while(!q.empty()){
    cout<< q.pop() << " " ;
}
cout<< endl;

}