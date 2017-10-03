#include<iostream>
using namespace std;
class bank
{
  private:
  char name[10],type[10];
  int ano,bal,dep,withd;
  public:
  void declare()
  {
    cout<<"enter the name of bank holder";
    cout<<endl;
    cin>>name;
    cout<<"enter the acount number ";
    cout<<endl;
    cin>>ano;
    cout<<"enter the balance current amount";
    cout<<endl;
    cin>>bal;
    }
    void deposit()
     {
        cout<<"enter the amount to be deposit";
	cout<<endl;
	cin>>dep;
	total=bal+dep;
	
	}
	void withdrawl()
	{
	  cout<<"enter the amount to be withdrawl";
	  cout<<endl;
	  cin>>withd;
	  final=total-withd;
	  }
	  void display()
	  {
	    cout<<"the name of account holder is  "<<name<<endl;
	    cout<<"the account number of acconut holder is "<<ano<<endl;
	    cout<<"the balance in the account is "<<bal<<endl;
	    cout<<"the balance after deposit of "<< dep << " is "<< total<<endl;
	    cout<<"the balance after withdrawl of "<< withd <<" is"<<final<<endl;
	    }
	    };
	    void main()
	    {
	      bank i;
	      i.declare();
	      i.deposit();
	      i.withdrawl();
	      i.display();
	      return 0;
	      }

	  
	  


