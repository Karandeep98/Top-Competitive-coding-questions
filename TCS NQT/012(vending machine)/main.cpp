#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<string> c{"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
    vector<string> t{"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
    vector<string> s{"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};
     vector<string> b{"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
    char ch; int id;
    cin>>ch>>id;
    ch=tolower(ch);
    switch(ch){
    case 'c':
        if(id>0 && id<=c.size()){
            cout<<"Welcome to CCD!\nEnjoy your "<<c[id-1];
        }
        else cout<<"INVALID OPTION!";
        break;
    case 't':
        if(id>0 && id<=t.size()){
            cout<<"Welcome to CCD!\nEnjoy your "<<t[id-1];
        }
        else cout<<"INVALID OPTION!";
        break;
     case 's':
        if(id>0 && id<=s.size()){
            cout<<"Welcome to CCD!\nEnjoy your "<<s[id-1];
        }
        else cout<<"INVALID OPTION!";
        break;
     case 'b':
    if(id>0 && id<=b.size()){
        cout<<"Welcome to CCD!\nEnjoy your "<<b[id-1];
    }
    else cout<<"INVALID OPTION!";
    break;
    default: cout<<"INVALID INPUT!";
    }
    return 0;
}
