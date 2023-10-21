#include<iostream>
using namespace std
class Student{

private:
	int id;
	string name;
	int mark1;
	int marks2;
	int marks3;

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

}