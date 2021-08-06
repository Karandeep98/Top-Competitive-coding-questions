#include <bits/stdc++.h>

using namespace std;
class Channel{
    public:
    string channel_name;
    string channelID;
    int base=-1;
    int sd=-1;
    int hd=-1;
    int _4k=-1;

    string channel_location="Delhi";
};
class Customer{
    public:
    string name;
    string custID;
    int balance;
    int no_of_channels;
    vector<string> channel_list;

};
class Service_Provider{
    int no_of_customers;
    int no_of_channels;
     //Customer Customer_list[no_of_customers];
    // Channel channel_list[no_of_channels];



public:
     //void add_channel(string custID,string channelID,string type,string location){
     void add_channel(Customer a,Channel ch,string name,string type,string location){


        if(location==ch.channel_location){
            if(type=="base"){
                if(ch.base!=-1){ //if value is -1 it means that type is not available in that channel
                        if(a.balance>ch.base){
                            a.balance -= ch.base;
                        }
                        else cout<<"Insufficient balance";
                }
                else cout<<"Error message";
            }
            if(type=="sd"){
                if(ch.sd!=-1){ //if value is -1 it means that type is not available in that channel
                    a.balance -= ch.sd;
                }
                else cout<<"Error message";
            }
            if(type=="hd"){
                if(ch.base!=-1){ //if value is -1 it means that type is not available in that channel
                    a.balance -= ch.hd;
                }
                else cout<<"Error message";
            }
            if(type=="4k"){
                if(ch._4k!=-1){ //if value is -1 it means that type is not available in that channel
                    a.balance -= ch._4k;
                }
                else cout<<"Error message";
            }

            a.channel_list.push_back(name);

        }
        else{
            cout<<"Sorry!This channel is not available at your location";
        }
    }
    void upgrade_channel();
    void remove_channel();

};


int main()
{
    Customer a;
    a.name="Karandeep";
    a.balance=1000;
    a.custID="DL1";

     Customer b;
    b.name="Akash";
    b.balance=500;
    b.custID="DL2";

    //Admin Code
    Channel ch;
    ch.channel_name="ABC";
    ch.base=120;
    ch.sd=130;

    Channel ch2;
    ch2.channel_name="PQR";
    ch2.base=120;
    ch2.sd=130;
    ch2.hd=150;
    ch2._4k=200;


    Service_Provider sp;
    sp.add_channel(a,ch,"ABC","sd","Delhi");
     sp.add_channel(b,ch2,"PQR","hd","Delhi");

    cout<<"Balance="<<a.balance<<endl;
    for(string s:a.channel_list){
        cout<<s<<endl;
    }
     cout<<"Balance="<<b.balance<<endl;
    for(string s:b.channel_list){
        cout<<s<<endl;
    }


    return 0;
}
