#include <iostream>
using namespace std;
// int main(){
//     char a;
//     cin>>a;
//     cout<<(int)a;
// }
// int main(){
//     char a;
//     cout<<"Enter the character whose ASCII value you want:"<<endl;
// cin>>a;
// cout<<"The ASCII value of this character is: "<<int(a);
// return 0;
// }
// int   main(){
//     char b;
//     int p;
//     cout<<"Please enter your name here: ";
//     cin>>b;
//     cout<<"Please enter your age here: ";
//     cin>>p;
//     cout<<"Hello "<<b<<"."<<"Your age after 5 years from now would be: "<<p+5;
//     return 0;
// }
// int main(){
//     int a;
//     cout<<"Please enter your speed: "<<endl;
//     cin>>a;
//     if(a<40){
//         cout<<"Good going....";
    
//     }
//     else if(a<50){
//         cout<<"Just right....";
//     }
//     else{
//         cout<<"Too fast....";
//     }
//     return 0;
// }
// int main(){
//     string a;
//     int b;
//     cout<<"Please enter your name here:"<<endl;
//     cin>>a;
//     cout<<"Please enter your age here:"<<endl;
//     cin>>b;
//     cout<<"Hello "<<a<<"."<<endl<<"Your age after 5 years would be:-"<<(b+5);
//     return 0;
    
// }
int main(){
   int x, count = 0;
   float sum=0.0;
   cout<<"Please enter some integers"<<endl;
   while(cin >>x){
    sum+=x;
    ++count;
   }
   cout<<"The average of the munbers is: ";
   cout<<sum/count;
   return 0;
}
