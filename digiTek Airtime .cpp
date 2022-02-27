#include <iostream>
using namespace std ;

void menu(){
cout <<"\n\n**********DigiTeck Airtime**********\n";
cout <<"\n          1.Daily Airtime\n";
cout <<"\n          2.Weekly Airtime\n";
cout <<"\n          3.Monthly Airtime\n"; 
cout<<"\n           4.exit\n";
cout <<"\n***************************************\n\n";
}

int main(){
//daily bundles :70 mbs@20 ,250mbs@50,500mbs@100
//Weekly bundles1.5Gb@300,5GB@500
//monthly bundles:30GB@1000,50GB@5000
//airtime balance
//digi account
system("cls");
int option;
int digibalance;
cout<<"Enter your account balance\n";
cin>>digibalance;
menu();
cout <<"Hello,Enter the option you want\n";
cin >>option;
switch(option){
    case 1:
    int num;
    cout <<"1.70mbs @20/-\n";
     cout <<"2.250 mbs @50/-\n";
      cout <<"3.500 mbs @100\n";
       cin>>num;
       if(num==1){
           if(digibalance>=50){
digibalance-=20;
cout <<"you have successfully bought 70mbs\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
     cout <<"Your account balance is low\n";
 }
       }else if(num ==2){
if(digibalance >=50){
digibalance-=50;
cout <<"you have successfully bought 250mbs\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
      cout <<"Your account balance is low\n";
 }
       }else{
if(digibalance>=100){
digibalance-=100;
cout <<"you have successfully bought 500mbs\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
 cout <<"Your account balance is low\n";
 }
       }
       case 2:
       int opp;
       cout <<"1.5GB@500\n";
              cout <<"2.5Gb@300\n";
              cin>>opp;
if(opp==1){
    if(digibalance>=500){
digibalance-=500;
cout <<"you have successfully bought 1.5Gb\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
      cout <<"Your account balance is low\n";
 }
}else{
if(digibalance>=300){
digibalance-=300;
cout <<"you have successfully bought 2.5Gb\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
    cout <<"Your account balance is low\n";   
 }
}
            case 3:
            
       int val;
       cout <<"1.30GB@1000\n";
              cout <<"2.50Gb@5000\n";
              cin>>opp;
if(val==1){
    if(digibalance >=1000){
digibalance-=1000;
cout <<"you have successfully bought 30Gb\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
     cout <<"Your account balance is low\n";
 }
}else{
if(digibalance >=5000){
digibalance-=5000;
cout <<"you have successfully bought 50Gb\n";
 cout <<"Your new digiTeck balance is: "<<digibalance<<endl;}else{
       cout <<"Your account balance is low\n";
 }
}
}
    return 0;
}