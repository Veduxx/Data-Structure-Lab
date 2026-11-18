#include<iostream>
#include<string>
#include<limits>
using namespace std;


struct Product{
	int id;
	string name;
	double price;
	int stock;
	Product* next;
	Product* hashNext;
};

Product* head = NULL;
const int SIZE = 10;
Product* hashTable[SIZE]={NULL};


int hashFunction(int id)
	{
		return id%SIZE;
	}

void addProduct()
	{
		Product* p = new Product;
		cout<<"Enter product  identification number:";
		cin>>p->id;


		int index = hashFunction(p->id);
		Product* temp = hashTable[index];
		while(temp!=NULL)
			{
				if(temp->id==p->id)
					{
						cout<<"Product ID already exists!\n";
						delete p;
						return;
					}
				temp = temp->hashNext;
			}

		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"Enter Product Name:";
		getline(cin,p->name);

		cout<<"Enter Price:";
		cin>>p->price;

		cout<<"Enter Stock Quantity:";
		cin>>p->stock;

		p->next = head;
		head = p;

		p->hashNext = hashTable[index];
		hashTable[index]=p;

		cout<<"Product added successfully!\n";
	}

void searchProduct()
	{
		int id;
		cout<<"Enter Product ID to search:";
		cin>>id;

		int index = hashFunction(id);
		Product* temp= hashTable[index];
		while(temp!=NULL)
		{
			if (temp->id == id)
			{
				cout<<"\nProduct Found!\n";
				cout<<"Product ID:"<<temp->id<<endl; 
				cout<<"Name:"<<temp->name<<endl; 
				cout<<"Price:"<<temp->price<<endl;
				cout<<"Stock:"<<temp->stock<<endl;
				return;
			}
			temp=temp->hashNext;
		}
		cout<<"Product not found!\n";
	}

void displayProduct()
	{
		Product* temp=head;

		if(temp ==NULL)
			{
				cout<<"No product record is available.\n";
				return;
			}
		cout<<"\n---All Available Products---\n";
		while(temp!=NULL)
			{
				cout<<"\nProduct ID:"<<temp->id<<endl;
				cout<<"Name:"<<temp->name<<endl;
				cout<<"Price:"<<temp->price<<endl;
				cout<<"Stock:"<<temp->stock<<endl;
				temp=temp->next;
			}
	}

void updateProduct()
	{
		int id;
		cout<<"Enter product ID to update:";
		cin>>id;

		int index = hashFunction(id);
		Product* temp = hashTable[index];
		while(temp!=NULL)
			{
				if(temp->id==id)
					{
						cin.ignore(numeric_limits<streamsize>::max(),'\n');
						cout<<"Enter New Product Name:";
						getline(cin,temp->name);

						cout<<"Enter new price:";
						cin>>temp->price;

						cout<<"Enter New Stock Quantity:";
						cin>>temp->stock;

						cout<<"Product details updated successfully!\n";
						return;
					}
					temp = temp->hashNext;
			}
			cout<<"Product not found!\n";
	}


int main()
	{
		int choice;
		do
			{
				cout<<"\n---E-Commerce Product Catalog & Inventory System---\n";
				cout<<"1.Add New Product\n";
				cout<<"2.Search Product\n";
				cout<<"3.Update Product Details\n";
				cout<<"4.Remove Discontinued Product\n";
				cout<<"5.Display All Product\n";
				cout<<"6.Exit\n";
				cout<<"Enter your choice.";
				cin>>choice;

				switch(choice)
					{
						case 1:
							addProduct();
							break;
						case 2:
                                                        searchProduct();
                                                        break;
						case 3:
                                                        updateProduct();
                                                        break;
						case 5:
                                                        displayProduct();
                                                        break;
						case 6:
                                                        cout<<"Exiting program...\n";
                                                        break;
						default:
							cout<<"Invalid choice!\n";
					}
			}
		while(choice!=6);
		return 0;
	}
