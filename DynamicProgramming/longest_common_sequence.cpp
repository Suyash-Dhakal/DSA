#include <iostream>
#include <vector>

using namespace std;

int longest_sequence_finder(vector<int> &arr1,vector<int> &arr2,int size)
{
int a,b,seq_counter=0;


for(int i=0;i<size;i++){
if(arr1[i]==arr2[i]){
    seq_counter++;
}
}

}

int main()
{

vector<int> seq1;
vector<int> seq2;

int size;
cout<<"Enter the size of array:"<<endl;
cin>>size;
cout<<"Enter the first sequence into the array:"<<endl;
for(int i=0;i<size;i++){
    cin>>seq1[i];
}

cout<<"Enter the second sequence into the array:"<<endl;
for(int i=0;i<size;i++){
    cin>>seq2[i];
}

int seq_size=longest_sequence_finder(seq1,seq2,size);

cout<<"The longest common subsequence between Array 1 & Array 2 is: "<<seq_size;

return 0;
}