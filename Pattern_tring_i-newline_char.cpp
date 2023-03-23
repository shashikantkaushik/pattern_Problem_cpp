//
//  Pattern_tring_i-newline_char.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 01/11/22.
//


#include<iostream>
using namespace std;
int main(){
    int n,i=1,j;
    cout<<"enter n";
    cin>>n;
    while(i<=n){
        j=1;
        char startchar='A'+i-1;
        while(j<=i){
            
            char ch=startchar;
            cout<<startchar;
            j++;
        }
        i++;
        cout<<endl;
    }
}
