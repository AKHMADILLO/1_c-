//U2110060
//Akhmadillo Sayfullayev
#include <iostream>
using namespace std;
class Daytime {
private:
 int hour, minute, second;
public:
 Daytime() {
  cout << "Input hour(s) :";
  cin >> hour;
  cout << "Input minute(s)";
  cin >> minute;
  cout << "Input second(s)";
  cin >> second;
  if (hour >= 24 )
  {
   hour = 00;
  }
  if (minute >= 60 )
  {
   hour += minute / 60;
   minute = minute % 60;
    }
   if (second >= 60 )
  {
   minute += second / 60;
   second = second % 60;
    }

   }
 int getHour() const
{
  return hour;
 }
 int getMinute() const
 {
  return minute;
 }
 int getSecond() const
 {
  return second;
 }
 int asSeconds() const {
  int sec;
  sec = hour * 3600 + minute * 60 + second;
  return sec;
 }
 void operator ++()
 {
  second++;
 }
 void operator --()
 {
  minute++;
 }
 void display() {


  cout << hour << " : " << minute << " : " << second << endl;
 }
 void increament_second()
 {
  cout << "After increamented second :" << second << endl;
 }
 void decreament_minute()
 {
  cout << "After decreamented minute :" << minute << endl;
 }
 };
 class Dollar{
 private:
      float currency, soums, euro,dollar;
public:
 float getDollar()  {
     cout<<"Let's create a currency in dollor"<<endl;
     cin>>dollar;
     return dollar; }
 float  getSoums()  {
      cout<<"Let's create a currency in soums"<<endl;
     cin>>soums;
     return soums;  }
 float  getEuro()  {
      cout<<"Let's create a currency in euro to convert sum"<<endl;
      cin>>euro;
      currency=euro*10000;
      return currency;  }
 void setRates() {
     cout<<"dollar"<<dollar<<endl;
 cout<<"soums"<<soums<<endl;
 cout<<"Euro in soums"<<currency;



  }
 };
int main() {int a;
cout<<"press 1 and 2 to open tasks respectively"<<endl;
cin>>a;
switch(a){
    {case 1:{

 Daytime d;
 int choice;
cout << "Which task do you want to run "<<endl;
cout<<"1. To Display Time."<<endl;
cout<<"2. To Display Time in Seconds."<<endl;
cout<<"3. To Increment seconds."<<endl;
cout<<"4. To decrements minutes."<<endl;
cout<<"0. To exit"<<endl;
cin >> choice;

 if (choice == 1)
 {
  Daytime d;
  d.display();
 }
 else if (choice == 2)
 {
  Daytime d;
  cout << "Day time in seconds " << d.asSeconds() << endl;;
 }
 else if (choice == 3)
 {
  Daytime d;
  ++d;
  d.increament_second();
 }
 else if (choice == 4){
  Daytime d;
  --d;
  d.decreament_minute();
 }}break;
case 2:{
Dollar d1;
d1.getDollar();
d1. getSoums();
d1. getEuro();
d1.setRates();
}
    }}
 system("pause");
 return 0;

}
