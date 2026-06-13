#include<iostream>
using namespace std;
int main(){
int num;
cout<<"enter any number"<<endl; //store data from user
cin>>num;
int i=1; //i=rows
while(i<=num){ // forloop
    int j=1; //j=column
    while(j<=num){
        cout<<j<<"";
        j=j+1;
    }
cout<<endl;
i=i+1;
}
return 0;
}
