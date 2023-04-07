#include<iostream>
using namespace std;
// int main(){//pattern 1
//     int i,j;
//     for(i=0; i<5;i++){
//         cout<<"*";
//         for(j=0; j<5;j++){

//             cout<<"*";
//             }    
//             cout<<endl;
//     }

// }
// int main(){//pattern 2
//     int i,j;
//     for(i=0; i<5;i++){
//         for(j=0; j<5;j++){
//         cout<<i;
//         }    
//             cout<<endl;
//     }

// }
// int  main(){//Pattern 3
//     int i=1;
//     while(i<5){
//         int j=1;
//         while(j<5){
//             cout<<5-j+1;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }
// int main(){// pattern 4
//     int i=1,n,count=1;
//     cout<<"enter the number:"<<n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         cout<<i;
//         while(j<=n){
//             cout<<" ";
//             cout<<count;
//             count++;
//             j++;
//         }
//         cout<<endl;
//     i++;
//     }
// }
// int main(){ // pattern 5
//     int i=1;
//     while(i<10){
//         int j=1;
//         while(j<i){
//         cout<<"*";
//         j++;
//         }
//     cout<<endl;
//     i++;
//     }
// }
// int main(){ //pattern 6
//     int i;
//     while(i<=5){
//         int j=1;
//         while(j<=i){
//             cout<<i;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){ //Pattern 7
//     int i=1;
//     while(i<=10){
//         int j=1;
//         // int value=i;
//         while(j<=i){
//             cout<<i+j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){ //Pattern 8
//     int i=1;
//     while(i<=4){
//         int j=1;
//         // int value=i;
//         while(j<=i){
//             cout<<i-j;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }
// int main(){ //Pattern 9
//     int i=1;
//     while(i<=4){
//         // int value=i;
//         int j=1;
//         while(j<=4){
//         char ch='a'+j-1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 10
//     int i=1;
//     while(i<=4){
//         // int value=i;
//         int j=1;
//         char ch='a'+i-1;
//         while(j<=4){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 11
//     int i=1;
//     while(i<=4){
//         // int value=i;
//         int j=1;
//         char ch='a'+i-1;
//         while(j<=i){
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 12
//     int i=1;
//     while(i<=4){
//         // int value=i;
//         int j=1;
//         char ch='a'+i-1;
//         while(j<=i){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 13
//     int i=1;
//     while(i<=4){
//         // int value=i;
//         int j=1;
//         char ch='a'+4-i;
//         while(j<=i){
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 14
//     int i=1;
//     while(i<=4){
//         int j= 4-i+1;
//         while(j>0){
//             cout<<"*";
//             j--;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// int main(){ //Pattern 15 inverted left triangle
//     int i=1;
//     int n=4;
//     while(i<=n){
//         int space = 1;
//       while(space<=i){
//         cout<<" ";
//         space++;
//       }
//       int j=n;
//     while(j>=i){
//         cout<<"1";
//         j--;
//     }
//       cout<<endl;
//       i++;
//     }
// }

// int main(){ //Pattern 15 inverted left triangle with numbers
//     int i=1;
//     int n=4;
//     while(i<=n){
//         int space = 1;
//       while(space<=i){
//         cout<<" ";
//         space++;
//       }
//       int j=n;
//     while(j>=i){
//         cout<< i;
//         j--;
//     }
//       cout<<endl;
//       i++;
//     }
// }
/*
         1
        121
       12321
      1234321
*/
// int main(){ //Pattern 16 Numbers pyramid
//     int i=1;
//     int n=10;
//     while(i<=n){
//         int space = n- i;
//       while(space>0){
//         cout<<" ";
//         space--;
//       }
//       int j=1;
//     while(j<=i){
//         cout<< j;
//         j++;
//     }
//     int j1=i-1;
//     while(j1){
//         cout<<j1;
//         j1--;
//     }
//       cout<<endl;
//       i++;
//     }
// }
/*  
   11
  1212
 123123
12341234
*/
// int main(){ //Pattern 17 inverted left triangle with numbers
//     int i=1;                                             
//     int n=4;
//     while(i<=n){
//         int space = n- i;
//       while(space>0){
//         cout<<" ";
//         space--;
//       }
//       int j=1;
//     while(j<=i){
//         cout<< j;
//         j++;
//     }
//     int j1=1;
//     while(j1<j){
//         cout<<j1;
//         j1++;
//     }
//       cout<<endl;
//       i++;
//     }
// }
int main(){ //Pattern 18 inverted left triangle with numbers
    int i=1;                                             
    int n=10;
    while(i<=n){
        int j= 1;
        while(j<=n-i+1){
            cout<<j<<" ";
            j++;
        }
        int space =  i*2;
        while(space < i * 4 -2 ){
            cout<<"*"<<" ";
            space++;
        }
        int start = n-i+1;
        while(start > 0){
            cout<<start<<" ";
            start--;
        }
       cout<<endl;
       i++;
    }
}