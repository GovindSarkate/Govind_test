#include<iostream>
using namespace std
class Student{

private:
	int id;
	string name;
	int mark1;
	int marks2;
	int marks3;
	int total;
	int per;

public:Student(){
	id=1001;
	name="govind";
	marks1=10;
	marks2=20;
	marks3=30;
	}

public:Student(int id,string name,int marks1,int marks2,int marks3){
	this->id=id;
	this->name=name;
	this->marks1=marks1;
	this->marks2=marks2;
	this->marks3=marks3;
}
public:void setId(int id){this->id=id;}
public:void setName(int name){this->name=name;}
public:void setMarks1(int marks1){this->marks1=marks1;}
public:void setMarks2(int marks2){this->marks2=marks2;}
public:void setMarks3(int marks3){this->marks3=marks3;}
public:int getId(){return id;}
public:string getName(){return name;}
public:int getMarks1(){return marks1;}
public:int getMarks2(int marks2){return marks2;}
public:int getMarks3(int marks3){return marks3;}

public: void total(){
 total=marks1+marks2+marks3;
cout<<total;
}
public :void percentage(){
double per=total/3.0;
}

}