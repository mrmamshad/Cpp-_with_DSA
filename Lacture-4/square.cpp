#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout<<"Enter Your n:";
    // cin>>n;
    // for (int i = 1; i <= n; i++) //outer Loop
    // {
    //     for (int j = 1; j <= n; j++) // inner loop
    //     {
    //         cout<<j<< " " ;
    //     }
    //     cout<<endl;
    // }


    // Print abcd in square pattarn  

    // int n = 4;

    // for(int i=0; i<n; i++){
    //     char ch = 'A';
    //     for(int j=0; j<n; j++ ){
    //       cout<<ch;
    //       ch++;
    //     }
    //     cout<<endl;
    // }

    // // output : ABCD
    // //          ABCD
    // //         ABCD
    // //         ABCD     


    int n = 3; 
    int num = 1;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n ; j++){
          cout<<num<< " ";
          num++;
        }
        cout<<endl;
    }   

   // // output : 1 2 3 
    // //         4 5 6 
    // //         7 8 9 
   

    return 0;
}