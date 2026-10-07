//Smart restaurant order management system .
// Write a C++ program to store five customers order numbers in a queue and process the orders in the order in which they were rece>
#include<iostream>
using namespace std;
int main()
{
         int queue[5]; //Orders
         int rear=0;  //Insertion
         int front=0;  //Removal


        cout<<"----------------------------------------------\n";
        cout<<"===Smart restaurant order management system===\n";
        cout<<"----------------------------------------------\n";
        //Entry of orders
        cout<<"Enter your Orders:\n";
        for(int i=0;i<5;i++)
        {
                cin>>queue[rear];
                rear++;
        }

        //Process orders
        cout<<"\nProcessing orders:\n";

        while(front<rear)
        {
                cout<<"Processing Orders:"<<queue[front]<<endl;
                front++;
        }
        return 0;
}

