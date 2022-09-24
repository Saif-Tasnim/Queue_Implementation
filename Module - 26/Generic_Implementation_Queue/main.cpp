#include <bits/stdc++.h>
#include "header.h"
using namespace std;

typedef pair<int, char> mytype;

int main()
{

    Queue<mytype> q;

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int c1;
        char c2;
        cin >> c1 >> c2;
        q.push(make_pair(c1, c2));
    }
   cout<< endl;
    mytype chk = q.front_value();
    cout << chk.first << " | " << chk.second << endl;

    chk = q.back_value();
    cout << chk.first << " | " << chk.second << endl;
    cout << endl
         << endl;

    while (!q.empty())
    {
       chk = q.pop();
       cout<< chk.first << " | " << chk.second << endl;
    }

    //    int n;
    //    cin>> n;
    //    for(int i=0;i<n;i++){
    //      float a;
    //      cin>> a;
    //      q.push(a);
    //    }

    //    q.front_value();
    //    q.back_value();

    //    while(!q.empty()){
    //     cout<< q.pop() << endl;
    //    }

  
}