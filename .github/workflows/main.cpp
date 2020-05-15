#include <iostream>
#include<iomanip>
#include<fstream>
#define size 10
using namespace std;
fstream file;
string s[100];
struct Data
{
    string name;
    string universty;
    int time;
    Data*next;
    Data()
    {
        next=NULL;
    }

};
class Main1
{
    Data*head;
  Data*ptr;
  Data*temp;
  Data*Table[size];
public:
    Main1()
    {
        head=NULL;
        for(int i=0;i<size;i++)
        {
            Table[i]=NULL;
        }
    }
    int hash1(string name)
    {
int i=0;
        for(int k=0;k<name.length();k++)
        {
            i+=(int)name[k];


        }
        return i;
    }
    void Add(string name,int x,string un)
    {





            if(head==NULL)
            {

                 head=new Data;
                head->name=name;
        head->universty=un;
        head->next=NULL;
        head->time=x;
            file.open("Interview.txt",ios::out|ios::app);
cout<<"Name"<<setw(10)<<"Uinverty"<<setw(10)<<"Time"<<endl;
            file<<head->name<<setw(10)<<head->time<<setw(10)<<head->universty<<endl;
            file.close();
            }
            else
            {
                ptr=head;

                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
            temp->name=name;
        temp->universty=un;
        temp->next=NULL;
        ptr->next=temp;
          temp->time=x;



                 file.open("Interview.txt",ios::out|ios::app);
file<<"Name"<<setw(10)<<"Uinverty"<<setw(10)<<"Time"<<endl;
            file<<temp->name<<setw(10)<<temp->time<<setw(10)<<temp->universty<<endl;
            file.close();


            }
    }
    void print()
    {

            int i=0;
        file.open("Interview.txt",ios::in|ios::app);
        while(!file.eof())
        {


            file>>s[i];
            cout<<s[i]<<endl;
            i++;
        }
        file.close();
    }
};
int main()
{
    Main1 n;
    cout<<"Welcome"<<endl;
    string a;
    int b;
    string c;

    cout<<"Please enter Name"<<endl;
    cin>>a;
    cout<<"Please enter time of interiew"<<endl;
    cin>>b;
    cout<<"PM/AM"<<endl;
    cin>>c;
 n.Add(a,b,c);
 cout<<"Do you have a resume"<<endl;
 string Aa;
 cout<<"Y/N"<<endl;
 cin>>Aa;
 if(Aa=="Y")
 {
     n.print();
     return 0;
 }
 else
 {
     fstream filename;
     cout<<"Enter First name"<<endl;
     string l;
     cin>>l;
     cout<<"Enter Last name"<<endl;
     string h;
     cin>>h;
     cout<<"Enter City"<<endl;
     string k;
     cin>>k;
     cout<<"Phone Number"<<endl;
     int y;
     cin>>y;
     cout<<"Please enter email address"<<endl;
     string ap;
     cin>>ap;
     cout<<"JOB Despriction"<<endl;
     cout<<"WORK description"<<endl;
     string Q;
     cin>>Q;
     cout<<"ORGANIZATIONS"<<endl;
     cout<<"How many ORGANIZATIONS did you work with"<<endl;
     int pq;
     cin>>pq;
     string r;
     for(int i=0;i<pq;i++)
     {


     cin>>r;
     }
     cout<<"Education"<<endl;
     cout<<"Enter school name"<<endl;
     string p;
     cin>>p;
     cout<<"Did you attend High School"<<endl;
      cout<<"Y/N"<<endl;
      string aa;
 cin>>aa;
      string j;
 if(aa=="Y")
 {
     cout<<"Enter High school name"<<endl;

     string j;
     cin>>j;
 }
      cout<<"Did you attend College"<<endl;
      cout<<"Y/N"<<endl;
 cin>>Aa;
 string qw;
  if(Aa=="Y")
 {
     cout<<"Enter College name"<<endl;
     cin>>qw;


 }


     filename.open("Resume.doc",ios::out|ios::app);
     filename<<"Name"<<endl;
     filename<<l<<h<<endl;
     filename<<"City Name"<<endl;
     filename<<k<<endl;
     filename<<"Email-address"<<endl;
     filename<<ap<<endl;
     filename<<"Job Title"<<endl;
     filename<<Q<<endl;
     filename<<"Work ORGANIZATIONS"<<endl;
     filename<<r<<endl;
     filename<<"Educational"<<endl;
     filename<<"School name"<<endl;
     filename<<p<<endl;
     filename<<"High School"<<endl;
     filename<<j<<endl;
     filename<<"College"<<endl;
     filename<<qw<<endl;
     filename<<"__________________________________________"<<endl;
     filename.close();
     filename.open("Resume.doc",ios::in|ios::app);
     string line;
     while(!filename.eof())
     {
         getline(filename,line);
         cout<<line<<endl;

     }
     filename.close();



 }






}
