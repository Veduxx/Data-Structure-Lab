// write a cpp program to store 5 customer token numbers in a queue and serve the customers in the same order in which they received their order 

#include <iostream>
using namespace std;

int main(){
    int queue[5];
    int front = 0;
    int rear = 0;

    cout<<"============Restaurant queue serve system=============\n";
    for(int i = 0;i<5;i++){
        cout<<"Enter token number "<<i+1<<": ";
        cin>>queue[rear];
        rear++;
    }

    cout<<"=========Serving orders============\n";
    int b = 1;
    while(front<rear){
        
        cout<<"The order served at number "<<b<<" is: "<<queue[front]<<endl;
        front++;
        b++;
        
    }
    return 0;
}
