 #include<iostream>
 using namespace std;
 void FlowerShop(int,int,int);
 main()
{
   int redrose,whiterose,tulips;
   cout<<"Red Roses: ";
   cin>>redrose;
   cout<<"White Roses: ";
   cin>>whiterose;
   cout<<"Tulips: ";
   cin>>tulips;
   FlowerShop(redrose,whiterose,tulips);
}
 void FlowerShop(int redrose,int whiterose,int tulips)
{
   float price;
   float payable;
   price=(redrose*2)+(whiterose*4.10)+(tulips*2.50);
   cout<<"Original Price: "<<price<<endl;
  if(price>200)
 {
   payable=price-(price*20/100);
   cout<<"Price after discout: "<<payable;
 }
 if(price<=200)
   cout<<price;
}
  