#include<iostream>
using namespace std;
main()
{
    cout<<"\t\tC A R   P A R K I N G";
    int i;
    int car=0,bike=0,riksha=0;
    while(true)
    {
        cout<<"\nPress 1 to enter car"<<endl;
        cout<<"Press 2 to enter bike"<<endl;
        cout<<"Press 3 to enter riksha"<<endl;
        cout<<"Press 4 to show the record"<<endl;
        cout<<"Press 5 to delete the record"<<endl;
        cout<<"Press 6 to exit"<<endl;
        cin>>i;
       
        if(i==1)
        {
            car++;
            system("CLS");
            cout<<"Car is Added"<<endl;
        }
        else if(i==2)
        {
            bike++;
            system("CLS");
            cout<<"Bike is Added"<<endl;
        }
        else if(i==3)
        {
            riksha++;
            system("CLS");
            cout<<"riksha is Added"<<endl;
        }
        else if(i==4)
        {
            cout<<"Car "<<car<<endl;
            cout<<"Bike "<<bike<<endl;
            cout<<"Riksha "<<riksha<<endl;
        }
        else if(i==5)
        {
            car=0;
            bike=0;
            riksha=0;
            system("CLS");
            cout<<"All record is deleted..!!"<<endl;
        }
        else if(i==6)
        {
            exit(0);
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
}