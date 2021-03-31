# include <iostream.h>
# include <conio.h>
# include <fstream.h>
void bill(int n);
void personaldetails();


void main()
{
clrscr();
int b;
char ch;
cout<<"\t\t            *************************"<<endl;
cout<<"\t\t            *      DAAWAT-E-HUB     * \t\t\n";
cout<<"\t\t            *************************"<<endl;
cout<<"\t\t              ONLINE ORDER SERVICE"<<endl;
cout<<endl;
personaldetails();
clrscr();
again:
clrscr();
self:
cout<<"The following combos are available:"<<endl;
cout<<"1.CHINESE\n2.ITALIAN\n3.PUNJABI\n4.TANDOORI\n5.SOUTH INDIAN\n\n";
cout<<"\nEnter your choice:";
cin>>b;
clrscr();

switch(b)
{
case 1:cout<<"\n\nThe entered combo contains the following dishes:"<<endl;
fstream chi;
chi.open("CHINESE.TXT",ios::in|ios::out);
while(chi)
{
chi.get(ch);
cout<<ch;
}
chi.close();
break;
case 2:
cout<<"\n\nThe entered combo contains the following dishes:"<<endl;
fstream ita;
ita.open("ITALIAN.TXT",ios::in|ios::out);
while(ita)
{
ita.get(ch);
cout<<ch;
}
ita.close();
break;
case 3:cout<<"\n\nThe entered combo contains the following dishes:"<<endl;
fstream pun;
pun.open("PUNJABI.TXT",ios::in|ios::out);
while(pun)
{
pun.get(ch);
cout<<ch;
}
pun.close();
break;
case 4:cout<<"\n\nThe entered combo contains the following dishes:"<<endl;
fstream tan;
tan.open("TANDOORI.TXT",ios::in|ios::out);
while(tan)
{
tan.get(ch);
cout<<ch;
}
tan.close();
break;
case 5:cout<<"\n\nThe entered combo contains the following dishes:"<<endl;
fstream sou;
sou.open("SOUTH INDIAN.TXT",ios::in|ios::out);
while(sou)
{
sou.get(ch);
cout<<ch;
}
sou.close();
break;
default:cout<<"\n\nMake correct choice.";
cout<<"\n\n Please make correct choice."<<endl<<endl;
goto self;

}
char a;
cout<<"\n\n Are you sure you want to continue (Y/N) : ";
cin>>a;
if((a=='y')||(a=='Y'))
{
clrscr();
bill(b);
cout<<"\n___________________________________________________________________________";
cout<<"\n\n\t\tTHANKS FOR ORDERING.HAVE A NICE DAY";
}
else if((a=='n')||(a=='N'))
{
goto again;
}
getch();
}
void personaldetails()
{
char name[30],add[50],email[30];
long int mobile;
cout<<"Enter your name: "<<endl;
cin.getline(name,30);
cout<<"Enter your email id: "<<endl;
cin.getline(email,30);
cout<<"Enter your address: "<<endl;
cin.getline(add,50);
cout<<"Enter a mobile no.: "<<endl;
cin>>mobile;
cout<<"\nHi "<<name<<", what would you like to order?:"<<endl;
}


void bill(int n)
{
cout<<"\n 		       	     -------Bill-------"<<endl;
cout<<"                             ******************"<<endl;
cout<<"                             *  DAAWAT-E-HUB  *"<<endl;
cout<<"                             ******************";
cout<<"\n___________________________CUSTOMER'S NO.:AI46583_________________________"<<endl;
cout<<"    Date:12/01/2017                                       Time:8:30 p.m.";
cout<<"\n\n___________ORDER____________________________________________AMOUNT_________";

if(n==1)
{
cout<<"\n\n\nYou have selected Chinese combo:                            Rs.400/-";
cout<<"\nVAT:                                                        Rs.40/-";
cout<<"\nDelivery Charges:                                           Rs.100/-";
cout<<"\n                                                         ____________";
cout<<"\nGRAND TOTAL:                                                Rs.540/-";
}

else if(n==2)

{
cout<<"\n\nYou have selected Italian combo:                              Rs.500/-";
cout<<"\nVAT:                                                          Rs.50/-";
cout<<"\nDelivery Charges:                                             Rs.100/-";
cout<<"\n                                                           ______________";
cout<<"\nGRAND TOTAL:                                                  Rs.650/-";
}

else if(n==3)

{
cout<<"\n\nYou have selected Punjabi combo:                           Rs.460/-";
cout<<"\nVAT:                                                       Rs.46/-";
cout<<"\nDelivery Charges:                                          Rs.100/-";
cout<<"\n                                                       ___________________";
cout<<"\nGRAND TOTAL:                                               Rs.606/-";
}

else if(n==4)

{
cout<<"\nYou have selected Tandoori comb:                           Rs.430/-";
cout<<"\nVAT:                                                       Rs.43/-";
cout<<"\nDelivery Charges:                                          Rs.100/-";
cout<<"\n                                                        _____________";
cout<<"\nGRAND TOTAL:                                               Rs.573/-";
}

else if(n==5)

{
cout<<"\nYou have selected South Indian combo:                      Rs.380/-";
cout<<"\nVAT:                                                       Rs.38/-";
cout<<"\nDelivery Charges:                                          Rs.100/-";
cout<<"\n                                                         _______________";
cout<<"\nGRAND TOTAL:                                               Rs.518/-";
}

else

{
cout<<"\nINVALID SELECTION";
}


}



