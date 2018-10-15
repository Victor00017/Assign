
#include<iostream>
#include<fstream>
#include<string>
using namespace std;



int main()
{ string Name[5];
  int ID[5];
  int Age[5];
  char Gender[5];
  double Score[5];
  char Grade[5];
  cout<<"Input the students names "<<endl;
for(int i=0;i<=4;i++)
cin>>Name[i];
cout<<"Input the students ID numbers"<<endl;
for(int k=0;k<=4;k++)
cin>>ID[k];
cout<<"Input the ages of the students"<<endl;
for(int l=0;l<=4;l++)
cin>>Age[l];
cout<<"Input gender"<<endl;
for(int m=0;m<=4;m++)
cin>>Gender[m];
cout<<"Input scores"<<endl;
for(int n=0;n<=4;n++)
cin>>Score[n];
cout<<"input their grades"<<endl;
for(int o=0;o<=4;o++)
cin>>Grade[o];
//output into file
ofstream std;
std.open("new.txt");
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tScore"<<"\tGrade"<<endl;
for(int i=0;i<=4;i++)
    std<<ID[i]<<"\t\t"<<Name[i]<<"\t"<<Age[i]<<"\t"<<Gender[i]<<"\t"<<Score[i]<<"\t"<<Grade[i]<<endl;
return 0;

}





