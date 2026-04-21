#include<iostream>
#include<vector>
using namespace std;

class Item
{
public:
    int itemId;
    string itemName;
    float price;
};

class ShoppingCart
{
private:
    vector<Item> items;

public:

    void addItem()
    {
        Item it;

        cout<<"Enter Item Id: ";
        cin>>it.itemId;

        cout<<"Enter Item Name: ";
        cin>>it.itemName;

        cout<<"Enter Price: ";
        cin>>it.price;

        try
        {
            if(it.price < 0)
            {
                throw it.price;
            }

            items.push_back(it);
        }
        catch(float p)
        {
            cout<<"Invalid price! Cannot be negative\n";
        }
    }

    void displayItems()
    {
        if(items.empty())
        {
            cout<<"Cart is empty\n";
            return;
        }

        for(auto x : items)
        {
            cout<<"ID: "<<x.itemId
                <<" Name: "<<x.itemName
                <<" Price: "<<x.price<<endl;
        }
    }

    void totalBill()
    {
        float total = 0;

        for(auto x : items)
        {
            total += x.price;
        }

        cout<<"Total Bill = "<<total<<endl;
    }
};

int main()
{
    ShoppingCart s;
    int choice;

    while(true)
    {
        cout<<"\n1.Add Item\n";
        cout<<"2.Display Items\n";
        cout<<"3.Total Bill\n";
        cout<<"4.Exit\n";

        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                s.addItem();
                break;

            case 2:
                s.displayItems();
                break;

            case 3:
                s.totalBill();
                break;

            case 4:
                return 0;

            default:
                cout<<"Invalid choice\n";
        }
    }
}