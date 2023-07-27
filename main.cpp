//#include <iostream>
#include<bits/stdc++.h>
//#include <string>
//#include <vector>
//#include<fstream>
//#include<stdlib.h>
#include<windows.h>
using namespace std;
int main()
{
    HANDLE color;
    color=GetStdHandle(STD_OUTPUT_HANDLE);
    int sum1=0,items,sum=0;
    vector<string> str{ "Paracetamol","Dolo 650","Antibiotics","Antihistamins","Omeprazole" };
    int real_price[str.size()]={10,10,10,10,10};
    int j[str.size()];
    int q[str.size()];
    int price[]={25,50,100,200,400};
    int id[]={1,2,3,4,5};
    int quantity[]={10,20,30,40,50};
    int expiry[]={2023,2024,2020,2026,2027};
    vector<string>customer{"Naresh","Suresh","Seetha","Geetha"};
    vector<string>customer_file{"Naresh.txt","Suresh.txt","Seetha.txt","Geetha.txt"};
    SetConsoleTextAttribute(color,03);
    cout<<"***************************SRMAP MEDICAL STORE******************************************\n\n\n"<<endl;
    SetConsoleTextAttribute(color,02);
    cout<<"Enter the password"<<endl;
    int password;
    cin>>password;
    int count1=0;
    if(password==1234567)
    {
        count1++;
        goto start;
    }
    else
    {
        int count=3;
        SetConsoleTextAttribute(color,04);
        cout<<"!@#$%^^&***************WRONG PASSWORD************&^%$#@!\n\n"<<endl;
        SetConsoleTextAttribute(color,05);
        for(int i=count;i>0;i--)
        {
            cout<<"TRY AGAIN "<<i<<" CHANCES LEFT"<<endl;
            int passwordd;
            cin>>passwordd;
            if(passwordd==1234567)
            {
                count1++;
                goto start;
            }
        }
    }
    start:
        if(count1>0)
        {
            cout<<"\n\n\n\n";
            SetConsoleTextAttribute(color,01);
            system("cls");
            cout<<"Choose your choice\n\n"<<endl;
            SetConsoleTextAttribute(color,05);
            cout<<"1 : Medicine Stock Record Management System"<<endl;
            cout<<"2 : Customer information and Billing System"<<endl;
            cout<<"3 : Sale and Supplier Management System"<<endl;
            cout<<"4 : EXIT"<<endl;
            int choice;
            cin>>choice;
            if(choice==1)
            {
                x: int choice1;
                SetConsoleTextAttribute(color,02);
                cout<<"******************Medicine Stock Record Management System******************\n\n\n"<<endl;
                SetConsoleTextAttribute(color,03);
                cout<<"=======Enter your choice======="<<endl;
                cout<<"1.Medicines Record"<<endl;
                cout<<"2.Medicines need to be restocked"<<endl;
                cout<<"3.Add Medicine to the list"<<endl;
                cout<<"4.Delete the Expired Medicine"<<endl;
                cin>>choice1;
                if(choice1==1)
                {

                y:{    cout<<"\n\n\n";
                    SetConsoleTextAttribute(color,02);
                    cout<<"****************************Medicines Record************************************\n\n\n\n"<<endl;
                    SetConsoleTextAttribute(color,04);
                    cout<<" ID NO              NAME             PRICE            QUANTITY             EXPIRY "<<endl;
                    SetConsoleTextAttribute(color,06);
                    for(int i=0;i<str.size();i++)
                    {
                       cout<<"  "<<i+1<<"            "<<str[i]<<"         "<<price[i]<<"           "<<quantity[i]<<"           "<<expiry[i]<<endl;
                    }
                  }
                  SetConsoleTextAttribute(color,01);
                    cout<<"Want to get back to home page then print 'y'"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y')
                    {
                        goto start;
                    }
                }
                else if(choice1==2)
                {
                    SetConsoleTextAttribute(color,02);
                    cout<<"**********Medicines need to be restocked*************"<<endl;
                    for(int i=0;i<str.size();i++)
                    {
                        if(quantity[i]<20)
                        {
                            SetConsoleTextAttribute(color,05);
                            cout<<"Need to restock "<<str[i]<<" only "<<quantity[i]<<" left"<<endl;
                        }
                    }
                    SetConsoleTextAttribute(color,03);
                   cout<<"Want to get back to home page then print 'y'"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y')
                    {
                        goto start;
                    }
                }
                else if(choice1==3)
                {
                   int n=str.size();
                   SetConsoleTextAttribute(color,02);
                   cout<<"*******************************************Add Medicine to the list***************************************"<<endl;
                   SetConsoleTextAttribute(color,04);
                   string str1;
                   cout<<"Enter the name of the medicine"<<endl;
                   cin>>str1;
                   str.push_back(str1);
                   str.resize(str.size()+1);
                   cout<<"Enter the price of the "<<str[n]<<endl;
                   cin>>price[n];
                   cout<<"Enter the quantiy of the "<<str[n]<<" are going to be added"<<endl;
                   cin>>quantity[n];
                   cout<<"Enter the expiry date"<<endl;
                   cin>>expiry[n];
                   cout<<"++++++++++Medicine record after adding item ++++++"<<endl;
                   goto y;
                   SetConsoleTextAttribute(color,03);
                   cout<<"Want to get back to home page then print 'y'"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y')
                    {
                        goto start;
                    }
                }
                else if(choice1==4)
                {
                   time_t time = std::time(nullptr);
                   tm* now = localtime(&time);
                   int present_year=(now->tm_year + 1900);
                   for(int i=0;i<str.size();i++)
                   {
                     if(present_year>expiry[i])
                       {
                         for(int j=i;j<str.size()-1;j++)
                          {
                              str[j]=str[j+1];
                             price[j]=price[j+1];
                             quantity[j]=quantity[j+1];
                              expiry[j]=expiry[j+1];
                           }
                       }
                    }
                    str.resize(str.size()-1);
                    goto y;
                    SetConsoleTextAttribute(color,03);
                    cout<<"Want to get back to home page then print 'y'"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y')
                    {
                        goto start;
                    }
                }
                else
                {
                    cout<<"Enter valid choice\n"<<endl;
                    goto x;
                }
            }
            else if(choice==2)
            {
                int choice2;
                SetConsoleTextAttribute(color,02);
                cout<<"*****************Customer information and Billing System*******************\n\n\n"<<endl;
                SetConsoleTextAttribute(color,05);
                cout<<"1.Customer Info"<<endl;
                cout<<"2.Billing"<<endl;
                cin>>choice2;
                if(choice2==1)
                {
                    SetConsoleTextAttribute(color,02);
                    cout<<"*******************************CUSTOMER INFO***********************************\n\n\n"<<endl;
                    cout<<"Enter your choice\n\n\n"<<endl;
                    cout<<"1.Add new customer"<<endl;
                    cout<<"2.Search about customer"<<endl;
                    cout<<"3.LIst of existing customers"<<endl;
                    int choice2;
                    cin>>choice2;
                    if(choice2==1)
                    {
                        fstream file;
                        string source;
                        SetConsoleTextAttribute(color,04);
                        cout<<"Enter the file name to be created on the name of customer"<<endl;
                        cin>>source;
                        string name;
                        cout<<"Enter name of the customer"<<endl;
                        cin>>name;
                        file.open(source,ios::out | ios::app);
                        if(file)
                        {
                            cout<<"File on name of "<<name<<" customer created successfully"<<endl;
                        }
                        customer.push_back(name);
                        customer.resize(customer.size()+1);
                        customer_file.push_back(source);
                        customer_file.resize(customer_file.size()+1);
                        SetConsoleTextAttribute(color,03);
                        cout<<"Want to get back to home page then print 'y'"<<endl;
                        char a;
                        cin>>a;
                        if(a=='y')
                        {
                           goto start;
                        }
                    }
                    else  if(choice2==2)
                    {
                        cout<<"Enter name of the customer\n";
                        string name;
                        cin>>name;
                        fstream f;
                        string line;
                        for(int i=0;i<customer_file.size();i++)
                        {
                            if(name==customer[i])
                            {
                                f.open(customer_file[i],ios::app);
                                if(f.is_open())
                                {
                                    cout<<"+++++++++++++++++++NAME  : "<<name<<"++++++++++++++++++++++++"<<endl;
                                    while(f.good())
                                    {
                                        getline(f,line);
                                        cout<<line<<endl;;
                                    }
                                }
                                f.close();
                            }
                        }
                        cout<<"Want to get back to home page then print 'y'"<<endl;
                        char a;
                        cin>>a;
                        if(a=='y')
                        {
                          goto start;
                        }
                    }
                    else if(choice2==3)
                    {
                        fstream f;
                        string line;
                        for(int i=0;i<customer_file.size();i++)
                        {
                            f.open(customer_file[i]);
                            if(f.is_open())
                            {
                                cout<<"+++++++++++++++++++NAME  : "<<customer[i]<<"++++++++++++++++++++++++"<<endl;
                                while(f.good())
                                {
                                    getline(f,line);
                                    cout<<line<<endl;;
                                }
                            }
                            f.close();
                        }
                        cout<<"Want to get back to home page then print 'y'"<<endl;
                        char a;
                        cin>>a;
                        if(a=='y')
                        {
                           goto start;
                        }
                    }
                }
                else if(choice2==2)
                {
                    cout<<"++++++++++++++++++++++++++++MENU++++++++++++++++++++++++++++++++"<<endl;
                    cout<<"*******Medicines Record********"<<endl;
                    cout<<" ID NO              NAME             PRICE            QUANTITY             EXPIRY "<<endl;
                    for(int i=0;i<str.size();i++)
                    {
                       cout<<"  "<<i<<"            "<<str[i]<<"               "<<price[i]<<"                            "<<quantity[i]<<"                    "<<expiry[i]<<endl;
                    }
                    string customer_name;
                    cout<<"Enter the name of the customer"<<endl;
                    cin>>customer_name;
                    cout<<"How many medicines needed to be purchased"<<endl;
                    cin>>items;
                    for(int i=0;i<items;i++)
                    {
                        cout<<"Enter the ID of the medicine to purchase"<<endl;
                        cin>>j[i];

                        cout<<"Enter Quantity of "<<str[j[i]]<<" want to purchase\n"<<endl;
                        cin>>q[i];
                        quantity[j[i]]=quantity[j[i]]-q[i];
                    }
                    time_t t = time(nullptr);
                    tm* now = localtime(&t);
                    cout<<"*******************************************BILLING**********************************************"<<endl;
                    cout<<"INVOICE : "<<customer_name <<"         DATE : "<< now->tm_mday << '/' << (now->tm_mon + 1) << '/'<< (now->tm_year + 1900) << endl;
                    cout<<"ID NO             NAME                               PRICE/EACH                       QUANTITY                    TOTAL PRICE "<<endl;
                    for(int i=0;i<items;i++)
                    {
                        int total_price=price[j[i]]*q[i];
                        cout<<j[i]<<"           "<<str[j[i]]<<"                                "<<price[j[i]]<<"                                  "<<q[i]<<"                                    "<<total_price<<endl;
                        sum=sum+total_price;
                    }
                    cout<<"\n\n Total                                                          = " <<sum<<endl;
                    float grand=(sum*5)/100+sum;
                    cout<<"GRANDTOTAL AFTER 5% GST                           =     "<<grand<<"Rs"<<endl;
                    fstream f;
                    for(int i=0;i<customer.size();i++)
                    {
                        if(customer_name==customer[i])
                        {
                            f.open(customer_file[i]);
                            if(!f)
                            {
                                cout<<"No such file on name of customer exists"<<endl;
                            }
                            else
                            {
                                for(int i=0;i<items;i++)
                                f<<now->tm_mday << '/' << (now->tm_mon + 1) << '/'<< (now->tm_year + 1900)<<"        "<<str[j[i]]<<"           "<<q[i]<<endl;
                            }
                        }
                    }
                    cout<<"Want to get back to home page then print 'y'"<<endl;
                    char a;
                    cin>>a;
                    if(a=='y')
                    {
                        goto start;
                    }
                }
            }
            else if(choice==3)
            {
                int choice3;
                cout<<"*****************Supplier Info*******************\n\n\n"<<endl;
                cout<<"1.Supplier Info"<<endl;
                cout<<"2.Full record"<<endl;
                cin>>choice3;
                if(choice3==1)
                {
                    cout<<"=========================SUPPLIER INFO==================================\n\n"<<endl;
                    cout<<"1.Add new supply"<<endl;
                    cout<<" ID NO              NAME             PRICE            QUANTITY             EXPIRY "<<endl;
                    for(int i=0;i<str.size();i++)
                    {
                       cout<<"  "<<i<<"            "<<str[i]<<"               "<<price[i]<<"                            "<<quantity[i]<<"                    "<<expiry[i]<<endl;
                    }
                    int x[str.size()];
                    for(int i=0;i<str.size();i++)
                    {
                        cout<<"Enter how much quantity you want to add for "<<str[i]<<" : ";
                        cin>>x[i];
                        quantity[i]=quantity[i]+x[i];
                    }
                    cout<<"*****************BILL TO BE PAID*****************\n\n"<<endl;
                    cout<<"ID NO             NAME                               PRICE/EACH                       QUANTITY                    TOTAL PRICE "<<endl;
                    for(int i=0;i<str.size();i++)
                    {
                        int total_price=real_price[i]*x[i];
                        cout<<i+1<<"           "<<str[i]<<"                                "<<real_price[i]<<"                                  "<<x[i]<<"                                    "<<total_price<<endl;
                        sum1=sum1+total_price;
                    }
                    cout<<"\n\n Total                                                          = " <<sum1<<endl;
                    goto start;
                }
                else if(choice3==2)
                {
                    cout<<"======================PROFIT CHART===========================\n\n\n"<<endl;
                    int sum2=0;
                    for(int i=0;i<items;i++)
                    {
                        int totall=real_price[j[i]]*q[i];
                        sum2=sum2+totall;
                    }
                    cout<<"Profit obtained is : "<<sum-sum2<<" Rs"<<endl;
                    goto start;
                }
            }
            else if(choice==4)
            {
                exit(0);
                cout<<"4"<<endl;
            }
            else
            {
                cout<<"ERROR ....ENTER VALID CHOICE"<<endl;
                goto start;
            }
        }
    return 0;
}
