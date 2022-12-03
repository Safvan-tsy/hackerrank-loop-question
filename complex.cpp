#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    int i, a,b;
    cin>>a>>b;
    string nums[11]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(i=a;i<=b;i++){
    if (i>9 && i%2==0)
    {
        cout<<"even"<<endl;
    }
    else if (i>9 && i%2!=0)
    {
            cout<<"odd"<<endl;
    }
    else{
        cout<<nums[i]<<endl;
    }
}

}