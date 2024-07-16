#include <iostream>
#include <array>
#include <vector>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x[]) {
        
        int size=sizeof(x)/sizeof(x[0]);
        
        
        if((size%2)==0){
            
            int mid=(size/2)-1;
            vector<int> arr(size/2);
            for(int i=0;i<=mid;i++){
                 arr.push_back(x[i]);
            }
            for(int i=mid+1;i<(size/2);i++){
            
                if(x[i]==arr.back()){
                    arr.pop_back();
                }
                if(arr.empty()){
                    return true;
                }
                else{
                    return false;
                }
                
            }
            
            
        }
        
        else {
            int mid=size/2;
            vector<int> arr(mid-1);
            for(int i=0;i<mid;i++){
                arr.push_back(x[i]);
            }
            for(int i=mid+1;i<size;i++){
                if(x[i]==arr.back()){
                    arr.pop_back();
                }
                if(arr.empty()){
                    return true;
                }
                else{
                    return false;
                }
            }
            
        }
        
    }
};


int main()
{
    int max=5;
    int arr[max];
cout<<"Palindrome Array Check"<<endl;
cout<<"Enter the array of integer:"<<endl;
for(int i=0;i<max;i++){
    cin>>arr[i];
}
Solution Obj1;
bool isPalindrome=Obj1.isPalindrome(arr);

if(isPalindrome==true){
    cout<<"Given array is a palindrome array";
}
else{
    cout<<"Given array is not a palindrome array";
}
return 0;
}