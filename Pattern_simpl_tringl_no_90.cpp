//
//  Pattern_simpl_tringl_no_90.cpp
//  C++ DSA CN
//
//  Created by Shashi Kant on 01/11/22.
//

//
//  Pattern_simpl_sqr_dif-j-rev-newcol-vlue.cpp
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
        j=n;
        while(j>0){
            cout<<j;
            j--;
        }
        /*
         while(j<=n){
         cout<<n-j+1;
         j++;
         }
         */
        i++;
        cout<<endl;
    }
}
