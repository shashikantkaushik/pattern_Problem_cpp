//
//  Pattern_number_star.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 04/11/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter n";
    cin>>n;
    for(i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        
   
            for(int j=1;j<i;j++){
                    cout<<"*";

            }
        
        for(int j=1;j<i;j++){
                cout<<"*";
        }
        
        
        for(int k=n-i+1,j=1;j<=n-i+1;j++,k--){
            cout<<k;
        }
       
        cout<<endl;
        }
    }
