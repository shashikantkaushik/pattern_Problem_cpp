//
//  Pattern_simpl_tringl_no-rev-start-i_90.cpp
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
        int k=i;
        while(j<=i){
            cout<<k;
            j++;
            k--;
        }
        
        i++;
        cout<<endl;
    }
}
