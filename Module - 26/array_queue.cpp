#include <bits/stdc++.h>
using namespace std;
int front = -1, rear = -1;
int option();
int enqueue(int value,int arr[],int n);

int main()
{
    int n;
    cout << "Enter array size  : ";
    cin >> n;
    int arr[n];
    front = rear = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ch = option();
    while (ch != 0)
    {
        if(ch==1){
            int value;
            cout<< "Enter value for enqueue : ";
            cin>> value;
            *arr = enqueue(value,arr,n);
        }
    }
}

int option()
{

    cout << "1. For enqueue\n";
    cout << "2. For dequeue\n";
    cout << "3. For peak\n";
    cout << "4. Is Empty ? \n";
    cout << "1. Print array\n";
    int n;
    cout << "Enter your choice : ";
    cin >> n;
    return n;
}

int enqueue(int val, int a[], int n){
    if(f==-1 && r ==-1){
        f++;
        r++;
        a[r] = val;
        return a[r];

    }
}