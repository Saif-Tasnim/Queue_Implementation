#include <bits/stdc++.h>
#include "MY_Stack_Temp.h"
using namespace std;

int main()
{
    Stack<int> st;
    Stack<int> min;
    int n;
    int minimum = INT_MAX;
    cout << "Enter Array Size : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= minimum)
        {
            minimum = arr[i];
            min.push(arr[i]);
        }
        st.push(arr[i]);
    }

   // int min_top;
    while (!st.empty_stack())
    {
        if (st.top_Value() != min.top_Value())
        {
          //  min_top = min.top_Value();
            cout << "Current min stack value is : " << min.top_Value() << endl;
            st.pop();
        }
        else
        {
          //  min_top = min.top_Value();
            cout << "Current min stack value is : " <<  min.top_Value()<< endl;
            min.pop();
            st.pop();
        }
    }
    return 0;
}
