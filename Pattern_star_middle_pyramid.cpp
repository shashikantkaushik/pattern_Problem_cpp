//
//  Pattern_star_middle.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 29/10/22.


#include<iostream>
using namespace std;
int main(){
    int i=1,n,j,k;
    cout<<"Enter number";
    cin>>n;
    while(i<=n){
        j=n;
        while(j>=i){
            cout<<" ";
            j--;
        }
         k=1;
      j=1;
       

        while(k<=i){
            cout<<"*";
            k++;
        }
                while(j<i){
                    cout<<"*";
                    j++;
                }
        
        cout<<endl;
        i++;
        }
        
    }

