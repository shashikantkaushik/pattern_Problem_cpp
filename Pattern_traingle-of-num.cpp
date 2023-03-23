//
//  Pattern_traingle-of-num.cpp
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
       
        
        
        int space=1;
        while(space<=n-i){
            cout<<" ";
            space++;
            }
        
        int j=1;
        int val=i;
        while(j<=i){
            cout<<val;
                j++;
            val++;
            }

        j=2*i-2;
       int k=2;
        while(k<=i){
            cout<<j;
            k++;
            j--;
            }
        
            i++;
            cout<<endl;
        
    }
}
