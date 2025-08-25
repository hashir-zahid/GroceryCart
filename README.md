# 🛒 DSA-GroceryCart

A **Grocery Management System** implemented in **C++** using **Data Structures and Algorithms (DSA)** concepts.  
This project demonstrates how linked lists can be applied to build a real-world system such as a shopping cart.

---

## 🚀 Features
- Load grocery items from a text file (`Text.txt`)
- Display available products with details (ID, Name, Description, Price)
- Add products to a shopping cart
- Remove products from the cart
- Display items in the cart
- Generate a final bill

---

## 🏗️ Tech Stack
- **Language:** C++  
- **Concepts Used:**  
  - Linked Lists (Custom Implementation)  
  - Classes & Objects  
  - File Handling  
  - Dynamic Memory Management  

---

## 📂 Project Structure
```
📦 DSA-GroceryCart
 ┣ 📜 Main.cpp        # Entry point of the program
 ┣ 📜 Items.h         # Class for Grocery Items
 ┣ 📜 Cart.h          # Class for Cart Item
 ┣ 📜 ILL.h           # Item Linked List (inherits custom LinkedList)
 ┣ 📜 CartLL.h        # Cart Linked List
 ┣ 📜 LinkedList.h    # Generic Linked List implementation
 ┣ 📜 Text.txt        # Input file containing grocery items
 ┗ 📜 README.md       # Project Documentation
```

---

## ⚙️ How It Works
1. Items are **loaded from `Text.txt`** into a linked list.
2. User can choose from the menu:
   - **1:** Add item to cart  
   - **2:** Delete item from cart  
   - **3:** Display all available items  
   - **0:** Generate bill and exit  
3. The system maintains two linked lists:
   - One for **available grocery items**
   - One for the **shopping cart**

---

## 📊 Example Items (from `Text.txt`)
```
Item ID : 111
Item Name : Detergent
Item Description : Best quality detergent
Price Per Item : 800

Item ID : 112
Item Name : Rice
Item Description : special Rice
Price Per Item : 500

Item ID : 113
Item Name : Flour
Item Description : best flour in pakistan
Price Per Item : 200

Item ID : 114
Item Name : Cooking Oil
Item Description : special sunflower oil
Price Per Item : 700

Item ID : 115
Item Name : Salt
Item Description : Iodized salt
Price Per Item : 100
```

---

## 📊 Example Workflow
```
---------------XXXXXXXXX-------------
Enter 1 to add product in a cart
Enter 2 to delete product from a cart
Enter 3 to display the products
Enter 0 to generate your bill
---------------XXXXXXXXX-------------

Enter the ID of Item : 112
Enter the quantity of product : 2
Item Added

-------------BILL--------------
Your total bill amount is : 1000
```

---

## 📝 Future Improvements
- Save bill details to a file
- Add search functionality for items
- Support discounts & coupons
- Graphical Interface for better UX

---

## 👨‍💻 Author
**Muhammad Hashir Zahid**
