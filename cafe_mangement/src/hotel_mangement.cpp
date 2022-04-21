// #include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{   int quant,choice;
    int ncoefee=0,ntea=0,nsandwich=0,nburger=0,nshake=0,npatties=0,nhotdog=0;
    //Sold
    int Scoefee=0,Stea=0,Ssandwich=0,Sburger=0,Sshake=0,Spatties=0,Shotdog=0;
    //prize
    int pcoefee=10,ptea=15,psandwich=20,pburger=50,pshake=20,ppatties=20,photdog=30;
    //total
    int Tcoefee=0,Ttea=0,Tsandwich=0,Tburger=0,Tshake=0,Tpatties=0,Thotdog=0;
    cout<<"\n"<<endl;
    // cout<"\t";
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"1.coeffee"<<endl;
    cin>>ncoefee;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"2.tea"<<endl;
    cin>>ntea;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"3.sandwhich"<<endl;
    cin>>nsandwich;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"4.burger"<<endl;
    cin>>nburger;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"shake"<<endl;
    cin>>nshake;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"6.patties"<<endl;
    cin>>npatties;
    cout<<"Enter the Total number of Quantity available for :"<<endl;
    cout<<"7.hotdog"<<endl;
    cin>>nhotdog;
    m:
    cout<<"\n\t this is the prize menu and enter your choice with the Given Number :"<<endl;
    cout<<"sr.no      |"<<endl;
    cout<<"1.coeffee  |"<<pcoefee<<endl;
    cout<<"2.tea      |"<<ptea<<endl;
    cout<<"3.sandwich |"<<psandwich<<endl;
    cout<<"4.burger   |"<<pburger<<endl;
    cout<<"5.shake    |"<<pshake<<endl;
    cout<<"6.patties  |"<<ppatties<<endl;
    cout<<"7.hotdog   |"<<photdog<<endl;
    cout<<"\t please enter the 8)to know your total bill "<<endl;
    cout<<"\t 9 to exit from the program::::: "<<endl;
    cout<<"enter your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1: 
        cout<<"enter the number of cups of coeffee you require"<<endl;
        cin>>quant;
        if(ncoefee-Scoefee>=quant)
        {
            Scoefee+=quant;
            Tcoefee = pcoefee*quant;
            cout<<quant<<"cups of coefee served to you "<<endl;
        }
        else{
            cout<<"we have only "<<ncoefee-Scoefee<<"number of cups of coefee"<<endl;
        }
        break;
        case 2: 
        cout<<"enter the number of cups of tea you require"<<endl;
        cin>>quant;
        if(ntea-Stea>=quant)
        {
            Stea+=quant;
            Ttea = ptea*quant;
            cout<<quant<<"cups of tea served to you "<<endl;
        }
        else{
            cout<<"we have only "<<ntea-Stea<<"number of cups of tea"<<endl;
        }
        break;
        case 3: 
        cout<<"enter the number of sandwiches you require"<<endl;
        cin>>quant;
        if(nsandwich-Ssandwich>=quant)
        {
            Ssandwich+=quant;
            Tsandwich = psandwich*quant;
            cout<<quant<<"number of sandwiches served to you "<<endl;
        }
        else{
            cout<<"we have only "<<nsandwich-Ssandwich<<"number of sandwiches"<<endl;
        }
        break;
        case 4: 
        cout<<"enter the number of burgers you require"<<endl;
        cin>>quant;
        if(nburger-Sburger>=quant)
        {
            Sburger+=quant;
            Tburger=pburger*quant;
            cout<<quant<<"burgers served to you "<<endl;
        }
        else{
            cout<<"we have only "<<nburger-Sburger<<"number of burgers we have "<<endl;
        }
        break;
        case 5: 
        cout<<"enter the number of shakes  you require"<<endl;
        cin>>quant;
        if(nshake-Sshake>=quant)
        {
            Sshake+=quant;
            Tshake = pshake*quant;
            cout<<quant<<"cups of copy served to you "<<endl;
        }
        else{
            cout<<"we have only "<<nshake-Sshake<<"number shakes "<<endl;
        }
        break;
        case 6: 
        cout<<"enter the number of patties  you require"<<endl;
        cin>>quant;
        if(npatties-Spatties>=quant)
        {
            Spatties+=quant;
            Tpatties = ppatties*quant;
            cout<<quant<<"number of patties  served to you "<<endl;
        }
        else{
            cout<<"we have only "<<npatties-Spatties<<"number of cups of coefee"<<endl;
        }
        break;
        case 7: 
        cout<<"enter the number of patties  you require"<<endl;
        cin>>quant;
        if(nhotdog-Shotdog>=quant)
        {
            Shotdog+=quant;
            Thotdog = photdog*quant;
            cout<<quant<<"number of patties  served to you "<<endl;
        }
        else{
            cout<<"we have only "<<nhotdog-Shotdog<<"number of cups of coefee"<<endl;
        }
        break;
        case 8:
            cout<<"\n \t displaying the total bill of the customer "<<endl;
            cout<<Tburger+Tcoefee+Thotdog+Tpatties+Tsandwich+Ttea+Tshake<<endl;
        break;
        case 9:
              exit(0);
        default: 
            //    goto m;
            cout<<"enter the among the choices only please "<<endl;


    }
    goto m;

    return 0;
}