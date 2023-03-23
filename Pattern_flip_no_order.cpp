//
//  Pattern_flip_no_order.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 29/10/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,i=1,temp=0;
    cout<<"Enter number";
    cin>>n;
    while(i<=n){
        //code for flip
        int flip=1;
        while(flip<=n-i){
            cout<<" ";
            flip++;
        }
        //code for order
        int j=i;
        int k=1;
        while(k<=i){
            cout<<j;
            j++;
            k++;
        
            
        }
        /*
         less optimised
       int j=1;
        if(val>1){
            val=val-temp;
            temp++;
        }
        while(j<=i){
            cout<<val;
            j++;
            val++;
            
        }
         */
        
      cout<<endl;
        i++;
    }
}
