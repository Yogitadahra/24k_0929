#include <iostream>
using namespace std;

class menuitem{
protected :
string dishname;
double price;
public:
menuitem(string name,double p):dishname(name),price(p){}

virtual void showdetails()=0;
virtual void prepare()=0;

};

class appetizer : public menuitem{
public :
appetizer(string name,double p):menuitem(name,p){}
void showdetails(){
    cout<<"dish name : "<<dishname<<endl;;
     cout<<"dish price : "<<price;
}

void prepare(){
    cout<<dishname<<" is being prepared!"<<endl;
}

};

class maincourse : public menuitem{
public :
maincourse(string name,double p):menuitem(name,p){}
void showdetails(){
    cout<<"dish name : "<<dishname<<endl;;
     cout<<"dish price : "<<price;
}

void prepare(){
    cout<<dishname<<" is being prepared!"<<endl;
}

};
int main(){

menuitem *m1=new appetizer("pasta",1500);
m1->prepare();
m1->showdetails();

maincourse m("chicken steak",2000);
m.prepare();
m.showdetails();


    return 0;
}