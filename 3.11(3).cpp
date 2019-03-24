#include<iostream>
#include<string>
#include"*Desktop\3.11(2).h"
class GradeBook
{
public:
	GradeBook(string coursename,string teachername)
	{
		setCourseName(coursename);
		setTeacherName(teachername);
	}
	void setCourseName(string coursename)
	{
		CourseName=coursename;
	}
	string getCourseName()
	{
		return CourseName;
	}
	void setTeacherName(string teachername)
	{
		TeacherName=teachername;
	}
	string getTeacherName()
	{
		return TeacherName;
	}

	void displayMessage()
	{
		cout<<"Welcome to the grade book for \n"<<getCourseName()<<"!"<<endl;
		cout<<"This Course is presented by "<<getTeacherName()<<endl;
	}
private:
	string CourseName;
	string TeacherName;

};
