//
//  Pattern_simpl_sqr_char-inc.cpp
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
        while(j<=n){
            
            char ch='A'+j-1;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}
