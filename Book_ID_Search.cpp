#include<iostream>
using namespace std;
int main()
{
int book[5]; //Declaration of array
int searchID;

cout<<"Enter 5 book IDs:\n";
for(int i=0;i<5;i++)   //Assigning values
   {
cin>> book[i];
   }
cout<<"Enter book Id to search:\n";
cin>>searchID;
for(int i=0;i<5;i++)      
{
if(book[i] == searchID)
{
cout<<"book found";
return 0;
}
}


cout<<"Book not found";

return 0;
}

