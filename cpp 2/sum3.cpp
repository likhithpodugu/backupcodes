#include <iostream>
using namespace std;

class employee{
    public: 
    string company_name;
    int employee_id;
    string pan;
    float month_salary ;
};

class student{
    public:
    int student_id;
    int number_of_registered_credits;
    float cost_of_credits ;
};

class tenant : public employee , public student {
    public:
    float monthly_rent;
    string name;
    string PAN;
    void input(){
        cout<<"----------EMPLOYEE--------------"<<endl;
        cin>>company_name ;
        cin>>employee_id;
        cin>>pan;
        cin>>month_salary;
        cout<<"-------------STUDENT-------------"<<endl;
        cin>>student_id ;
        cin>>number_of_registered_credits;
        cin>>cost_of_credits;
        cout<<"-----------------tenant--------------"<<endl;
        cin>>monthly_rent;
        cin>>name;
        cin>>PAN;
    };
    void valid(){
        bool valid = true ;
        if(!isalpha(employee_id)) ;
        valid = false;

        if(valid == true){
            cout<<"HE IS VALID EMPLOYEE"<<endl;
        }
        else{
            cout<<"HE IS NOT AN VALID EMPLOYEE"<<endl ;
        };
    };
    void verify(){
        bool ver = false;
        if(number_of_registered_credits > monthly_rent){
            ver = true ;
        };
        if (month_salary > monthly_rent){
            ver = true ;
        };
        if (ver == true){
            cout<<"HE HAD ENOUGH MONEY"<<endl;
        }
        else{
            cout<<"HE HAD NO MONEY"<<endl;
        };
    } ;
};

int main(){
    tenant t1;
    t1.input();
    t1.valid();
    t1.verify();
};