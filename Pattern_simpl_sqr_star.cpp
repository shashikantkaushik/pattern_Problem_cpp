//
//  Pattern_simpl_star.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 30/10/22.
//
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}
