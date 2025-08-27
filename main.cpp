#include <iostream>
#include <fstream>
#include <string>
#include "Items.h"
#include "Cart.h"
#include "CartLL.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	ILL<Items*> items;
	CartLL<Cart*> cart;
			
	int choice;
	int id1;
	int quantity1;
	double price1;
	int id2;
		
           ifstream inputFile("C:\\Users\\hashir\\Desktop\\DSA\\Text.txt"); //Use your text fiile path
           if (!inputFile) 
	{
                       cerr << "Error: Could not open the file!" <<endl;
                       return 1;
           }
            int id,quantity;
            string name, desc,line;
            double price;
 
            while (inputFile >> id) 
	 {
                      inputFile.ignore(); 
                      std::getline(inputFile, name);
                      std::getline(inputFile, desc);
                      inputFile >> price;
                      inputFile.ignore(); 
                      items.addToTail(new Items(id, name, desc, price));
            }
            inputFile.close();
            items.traversing();

	do
	{
		 cout<<"\n---------------XXXXXXXXX-------------"<<endl;
            	 cout<<"\nEnter 1 to add product in a cart";
	            cout<<"\nEnter 2 to delete product from a cart";
	            cout<<"\nEnter 3 to display the products";
	            cout<<"\nEnter 0 to generate your bill"<<endl;
	            cin>>choice;
	   	 cout<<"\n---------------XXXXXXXXX-------------"<<endl;
	    
	             switch(choice)
	             {
	    	             case 1:
	    	                     cout<<"\nEnter the ID of Item : ";
	    	                     cin>>id1;
	                                cout<<"\nEnter the quantity of product : ";
	                                cin>>quantity1;
                                           price1=items.add(id1);
	    		           cart.addToTail(new Cart(id1,quantity1,price1*quantity1));
	    		           cout<<"\nItem Added\n";
	    		           break;
	    	             case 2:
	    		           cout<<"\nEnter the ID of Item : ";
	    	                      cin>>id2;
				cart.remove(id2);
				cout<<"\nItem Deleted\n";
				cart.traversing();
	    		           break;
	    	             case 3:
	    		            items.traversing();
	    		            break;
	    	             case 0:
	    		             cout<<"\n-------------BILL--------------"<<endl;
	    		             cout<<"\nYour total bill amount is : "<<cart.generateBill();
	    	                        exit(0);
		 }
           }
	while(true);	
	return 0;
}

