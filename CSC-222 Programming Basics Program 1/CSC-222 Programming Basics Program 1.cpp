// CSC-222 Project 1.cpp : 

#include <iostream>
using namespace std;

int main()
{
    float item_price;
    float markup_per;
    float sales_tax;
    float markup_amount;
    float store_price;
    float tax_amount;

    // Asks for the original item price, the markup percentage, and the sales tax
    //
    cout << "What is the original price of the item? \n";
    cin >> item_price;
    cout << "\n What is the mark up percentage \n";
    cin >> markup_per;
    cout << "\n What is the sales tax? \n";
    cin >> sales_tax;

    //Calculates the markup amount, the store price, and the tax amount

    markup_per = markup_per / 100;
    markup_amount = item_price * markup_per;
    store_price = markup_amount + item_price;
    sales_tax = sales_tax / 100;
    tax_amount = store_price * sales_tax;

    //Outputs the original price, the markup percentage, the store selling price,
    //the sales tax amount, and the final price

    cout << "\n Original Price: $" << item_price;
    cout << "\n Markup Percentage: " << markup_per * 100 << "%";
    cout << "\n Store Selling Price: $" << store_price;
    cout << "\n Sales Tax Amount: $" << tax_amount;
    cout << "\n Final Price: $" << store_price + tax_amount;
}


