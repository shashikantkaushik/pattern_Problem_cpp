//
//  Pattern_simpl_tringl_90.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 01/11/22.
//




#include<iostream>
using namespace std;
int main(){
    int n,i=1,j;
    cout<<"Enter value of n";
    cin>>n;
    
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<i;
            j++;
        }
        
        i++;
        cout<<endl;
    }
}

