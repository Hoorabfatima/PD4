 #include<iostream>
 using namespace std;
 void discount(string,int);
 main()
{
  string country;
  int price;
  cout<<"Enter the country's name: ";
  cin>>country;
  cout<<"Enter the ticket price in dollars: $";
  cin>>price;
  discount(country,price);
}
 void discount(string country,int price)
{
  if(country=="Pakistan"||country=="pakistan")
    {
      price=price-(price*5/100);
      cout<<"Final ticket price after discount: $"<<price;
    }
  else if(country=="ireland"||country=="Ireland")
    {
      price=price-(price*10/100);
      cout<<"Final ticket price after discount: $"<<price;
    }
  else if(country=="india"||country=="India")
    {
      price=price-(price*20/100);
      cout<<"Final ticket price after discount: $"<<price;
    }
  else if(country=="England"||country=="england")
    {
      price=price-(price*30/100);
      cout<<"Final ticket price after discount: $"<<price;
    }
 else
    {
      price=price-(price*45/100);
      cout<<"Final ticket price after discount: $"<<price;
    } 
}

