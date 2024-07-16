#include <iostream>
#include <vector>

using namespace std;

int fib(int val){
if(val==0)
return 0;

if(val==1)
return 1;

if(val==2)
return 1;

else{
    return fib(val-1)+fib(val-2);
}

}

int main(){

int val=0;
int fibo;
cout<<"Enter the nth fibonacci number you want:"<<endl;
cin>>val;

fibo=fib(val);

cout<<"The "<<val<<"th fibonacci number is:"<<fibo;

}