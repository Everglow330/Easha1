#include<iostream>
using namespace std;
int deletion(int arr[],int TotalElement,int DeltetionIndex){
for(int i=DeltetionIndex;i<TotalElement-1;i++){
 arr[i]=arr[i+1];}

TotalElement--;
for(int i=0;i<TotalElement;i++){cout<<arr[i]<<" ";}
return TotalElement;
}
int main(){
int TotalElement;
cin>>TotalElement;
int arr[TotalElement];
for(int i=0;i<TotalElement;i++){cin>>arr[i];}
deletion(arr,TotalElement,3);



}
