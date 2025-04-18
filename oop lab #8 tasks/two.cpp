#include <iostream>
using namespace std;

class patient{
private :
string name;
int id;
public:
patient(string n,int i):name(n),id(i){}

virtual void displaytreatment()=0;
virtual void calculatecost(int days)=0;


};

class inpatient : public patient{
    public : 
    inpatient(string n,int i):patient(n,i){}
    void displaytreatment(){
     cout<<"we have every easy available for you! hope you get well soon"<<endl;
    }

     void calculatecost(int days){
        cout <<"total cost of "<<days <<" is : "<<days*10000<<endl;
     }
};

class outpatient : public patient{
    public : 
    outpatient(string n,int i):patient(n,i){}
    void displaytreatment(){
     cout<<"we hope that youe experince was good with us !"<<endl;
    }

     void calculatecost(int days){
        cout <<"total cost of "<<days <<" is : "<<days*10000<<endl;
     }
};


int main(){

 patient *p1=new inpatient("hamza",101);
 patient *p2=new inpatient("hunain",102);

 p1->displaytreatment();
 p1->calculatecost(5);

 p2->displaytreatment();
 p2->calculatecost(8);



    return 0;
}