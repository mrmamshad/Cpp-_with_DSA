// #include <iostream>
// using namespace std;

// int main()
// {
//       int n  = 4;
//       int count = 1;

//       for(int i = 0; i < n ; i++){
//         for( int j = 0; j < count; j++){
//           cout<< '*';
//         }
//         count++;
//         cout<<endl;
//       }
//       // output: *
//   //             **
//   //             ***
//   //             ****

// }

// #include<iostream>
// using namespace std;

// int main(){
//   int n  = 4;
//   int count = 1;
//   int num = 1;
//   for(int i = 0; i < n; i++){
//     for(int j = 0; j < count; j++){
//         cout<<num;
//     }
//     num++;
//     count++;
//     cout<<endl;

//   }
//    return 0;
// }

// output: 1
// 22
// 333
// 4444

// #include <iostream>
// using namespace std;

// int main()
// {
//   int n = 4;
//   int count = 1;
//   for (int i = 0; i < n; i++)
//   {
//     int num = 1;
//     for (int j = 0; j < count; j++)
//     {
//       cout << num;
//       num++;
//     }
//     count++;
//     cout << endl;
//   }
//   return 0;
// }

// output: 1
        // 12
        // 123
        // 1234


#include <iostream>
using namespace std;

int main()
{
  int n = 4;
  // int count = 1;
  //  int num = 1;
  for (int i = 0; i < n; i++)
  {
   
    for (int j = i + 1; j > 0; j--)
    {
      cout << j; 
    //  num++;
    }
    // count++;
    cout << endl;
  }
  return 0;
}