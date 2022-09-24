#include<bits/stdc++.h>
#include"My_Queue.h"
using namespace std;

int main(){

    Queue q ;
    int n;
    cin>> n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        q.push(a);
    }

   cout<< "Front Value : "<<q.front_value() << endl;
   cout<< "Back Value :  "<<q.back_value() << endl;


    while(!q.empty()){
        cout<< q.pop() << endl;
    }
}
