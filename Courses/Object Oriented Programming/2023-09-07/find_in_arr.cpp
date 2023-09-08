#include<iostream>
using namespace std;

void findKey(int arr[5],int key){
    int i;
    bool foundIt = false;
    for(i=0;i<5;i++){
        if(arr[i]==key){
            foundIt = true;
            break;
        }
    }
    if(foundIt){cout<<key<<" Found at array Index "<<i<<endl;}
    else{cout<<key<<" Not found in array"<<endl;}
}

int main(){
    int arr[5] = {55,66,77,44,88};
    findKey(arr,77);
}
