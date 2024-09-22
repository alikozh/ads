#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int x;
    cin>>x;
    int min = 10000;
    int diff, id;
    for(int i=0; i<n; i++){
        diff = abs(x - a[i]);
        if(diff < min){
            min = diff;
            id = i;
        }
    }
        
    cout<<id;
    return 0;
}