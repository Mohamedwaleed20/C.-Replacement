#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n ;
    cin >> n ;
    long long arr[n];
    for(long long i = 0 ; i<n;i++)
    {
        cin >> arr[i];
    }
    for(long long i = 0 ; i<n;i++)
    {
        if(arr[i]>0)
        {
            cout << "1" << " " ;
        }
        else if(arr[i]<0)
        {
            cout << "2" << " " ;
        }
        else if(arr[i]==0)
        {
            cout << "0" << " " ;
        }
    }

    return 0;
}
