#include <iostream>

using namespace std;

class Topping{
    protected:
        string detail;
        double price;
    public:
        virtual void show() = 0;

        Topping(){
            detail = "no detail";
            price = 0;
        }
        
        Topping(string detail,double price){
            this->detail = detail;
            if(price > 0){
                this->price = price;
            }else{
                this->price = 1;
            }
        }

        string getDetail(){
            return detail;
        }
        double getPrice(){

            return price;
        }
        virtual operator string(){
            return detail;
        }
};
class Chocolate:public Topping{
    protected:
        int type; //1.dark 2.white 3.milk
    public:
        Chocolate():Topping("made in Swiss",40) {
            type = 1;
        }
        Chocolate(int type,string detail,double price):Topping(detail,price){
            if(type > 0 && type < 4){
                type = type;
            }else{
                type = 1;
            }
        }
        Chocolate(string detail):Topping(detail,40){
            type = 1;
        }
        int getType(){
            return type;
        }
        string getTypeString(){
            switch(type){
                case 1:return "dark chocolate";
                case 2:return "white chocolate";
                case 3:return "milk chocolate";
                default: return "dark chocolate";
            }
        }
        void show(){
            cout<<"Type : " <<getTypeString() <<"\n";
            cout<<"Detail : " <<getDetail() <<"\n";
            cout<<"Price : " <<getPrice() <<"\n";
        }
        operator string(){
            return getTypeString();
        }
};
class Fruit:public Topping{
    string name;
    public:
        Fruit():Topping("sweet",30){
            name = "strawberry";
        }
        
        Fruit(string name,string detail,double price):Topping(detail,price){
            this->name = name;
        }
        Fruit(string name):Topping(name,30){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void show(){
            cout<< "Name : " <<name<<"\n";
            cout<< "Price : " <<getPrice()<<"\n";
            cout<< "Detail : " <<getDetail()<<"\n";
        }
        operator string(){
            return name;
        }
};
class Dessert: public Topping{
    private:
        int price;
        string flavor;
        Topping **topping;
        int num;
    public:
        // virtual void show() = 0;
        // Dessert(){
        //     setPrice(1);
        //     setFlavor("delicious");
        //     num = 1;
        //     toppping = new Topping*[num];
        // }
        // Dessert(int price,string flavor,int num){
        //     setPrice(price);
        //     setFlavor(flavor);
        //     if(num <=0){
        //         num = 1;
        //     }
        //     this->num = num;
        //     topping = new Topping*[num];
        // }
};
class IceCream{
    private:
        int type; //1.NormalIceCream 2.GenLaTO 3.YoghurtIceCream
    public:
       
};
int main(){
}