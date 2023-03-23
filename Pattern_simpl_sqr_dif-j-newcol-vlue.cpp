//
//  Pattern_simpl_sqr_dif-j-newcol-vlue.cpp
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
        while(j<=n){
            cout<<j;
            j++;
        }
        i++;
        cout<<endl;
    }
}
