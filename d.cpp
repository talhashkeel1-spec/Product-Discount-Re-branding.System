#include <iostream>
#include<string>
using namespace std;


class Product{
private:
    string title;
    double price;
public:
    Product(string title , double price){
        this->title=title;
        this->price=price;
    }
    string gettertitle(){
        return title;
    };
    double pricenew(){
        return price;
    };
    Product(const Product &item){
        this->title="Refurbished - " + item.title;
      this->price=item.price*0.80;
    }
};
int main()
{
    Product p1("iphone 13 pro max",1299.50);
    Product p2(p1);
    cout<<p2.gettertitle()<<endl<<p2.pricenew();
        return 0;
}