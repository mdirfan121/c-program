#include<iostream>
using namespace std;
class DOB
{
  private: 
  int date,month,year;
  public:
  void take(int g,int h,int i,int j,int k,int l);
  void display();
};
  
  void DOB::take(int g,int h ,int i,int j,int k,int l)
  {
     if(g>j&&h>k)
     {
       date=j+30-g;
       month=(k+11)-h;
       year=l-1-i;
     }
       else if(h>k)
      {
         date=j-g;
	 month=(k+12)-h;
	 year=(l-1)-i;
     }
	else if(g>j)
	  { 
		 date=(j+30)-g;
		 month=(k-1)-h;
		 year=l-i;
      }
     else
     {
      date=j-g;
       month=k-h;
       year=l-i;
     }
  }
     
     void DOB::display()
    {
       cout<<"your current age is "<<year<<"year "<<month<<"month "<<date<<"day "<<endl;
    }
    int main()
    {
      DOB x;
      int a,b,c,d,e,f;
      cout<<"enter your DOB and current date";
      cin>>a>>b>>c>>d>>e>>f;
      x.take(a,b,c,d,e,f);
      x.display();
    }
