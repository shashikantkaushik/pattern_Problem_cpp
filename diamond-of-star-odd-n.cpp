//
//  diamond-of-star-odd-n.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 01/11/22.
//

#include<iostream>
using namespace std;
int main(){
    int n,i=1,j,k=1,starline,mid;
    cout<<"enter number";
    cin>>n;
    while(i<=(n/2+1)){
        int space=1;
        while(space<=(n/2)-i+1){
            cout<<" ";
            space++;
        }
   j=1;
        while(j<=(2*i)-1){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    starline=((((n/2)+1)*2)-1)-2;
   i=1;
        while(i<=n/2){
            int space=1;
            while(space<=i){
                cout<<" ";
                space++;
            }
            k=1;
            while(k<=starline && starline>0){
                cout<<"*";
                k++;
              }
            starline=starline-2;
        cout<<endl;
        i++;
    }
}
