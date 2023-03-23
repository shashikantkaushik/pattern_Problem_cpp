//
//  Pattern_tring_n-newline_dec-invert-char.cpp
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
        char startchar='A'+n-i-1;
        while(j<=i){ char ch=startchar+j;
                cout<<ch;
            
                j++;
            }
            i++;
            cout<<endl;
        
    }
}
