#include<iostream>
using namespace std;
void printMenu();
float calculateAggregate(float matricMarks,float interMarks,float ecatMarks);
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2);
int main()
{
    printMenu();
    string name,nameStd1,nameStd2;
    float matricMarks,interMarks,ecatMarks,ecatMarksStd1,ecatMarksStd2,aggrigate;
    cout<<"Enter student name: "; 
    cin>>name;
    cout<<"Enter matric marks: ";
    cin>>matricMarks;
    cout<<"Enter inter marks: ";
    cin>>interMarks;
    cout<<"Enter ecat marks: ";
    cin>>ecatMarks;
    aggrigate =calculateAggregate(matricMarks,interMarks,ecatMarks);
    cout<<"Name: "<<name<<endl;
    cout<<"Aggrigate: "<<aggrigate<<endl;
    cout<<"Assigning roll numbers to studends."<<endl;
    cout<<"Enter student1 name: ";
    cin>>nameStd1;
    cout<<"Enter student2 name: ";
    cin>>nameStd2;
    cout<<"Enter student1's ecat marks: ";
    cin>>ecatMarksStd1;
    cout<<"Enter student2's ecat marks: ";
    cin>>ecatMarksStd2;
    compareMarks(nameStd1,ecatMarksStd1,nameStd2,ecatMarksStd2);
}
void printMenu()
{
    cout<<"**********************************************************"<<endl;
    cout<<"********* University Admission Management System *********"<<endl;
    cout<<"**********************************************************"<<endl;
}
float calculateAggregate(float matricMarks,float interMarks,float ecatMarks)
{
    float aggrigate;
    aggrigate=(matricMarks/1100)*30+(interMarks/550)*30+(ecatMarks/400)*40;
    return aggrigate;
}
void compareMarks(string nameStd1,float ecatMarksStd1,string nameStd2,float ecatMarksStd2)
{
    if(ecatMarksStd1>ecatMarksStd2)
    {
      cout<<"Roll number of "<<nameStd1<<" is: 1"<<endl;
      cout<<"Roll number of "<<nameStd2<<" is: 2"<<endl;
    }
    else
    {
       cout<<"Roll number of "<<nameStd2<<" is: 1"<<endl;
       cout<<"Roll number of "<<nameStd1<<" is: 2"<<endl; 
    }
}