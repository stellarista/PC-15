#include<iostream>
#include<string>
using namespace std;

//#ifndef GRADEDACTIVITY_H
//#define GRADEDACTIVITY_H

 // GradedActivity class declaration

class GradedActivity
{
	private:

	double score; // To hold the numeric score

	public:
// Default constructor
	GradedActivity()
	{
		 score = 0.0;
	}

// Constructor
	GradedActivity(double s)
	 {
		score = s;
	}

// Mutator function
	void setScore(double s)
	{
		 score = s;
	}

 // Accessor functions
	double getScore() const
	{
		return score;
	}

	char getLetterGrade() const;

};
//#endif

//#include "GradedActivity.h"


char GradedActivity::getLetterGrade() const
{
	char letterGrade; // To hold the letter grade

	if (score > 89)
	letterGrade = 'A';

	else if (score > 79)
	letterGrade = 'B';

	else if (score > 69)
	letterGrade = 'C';

	else if (score > 59)
	letterGrade = 'D';

	else
	letterGrade = 'F';

	return letterGrade;
}

class Essay : public GradedActivity
{
	int grammar;
	int spelling;
	int lenght;
	int content;

	public :

	void setEssay(int g,int sp,int l,int c)
	{
		grammar=g ;
		spelling=sp;
		lenght=l ;
		content=c;
	}

	int getG()
	{
		return grammar;
	}

	int getSp()
	{
		return spelling;
	}

	int getL()
	{
		return lenght;
	}

	int getC()
	{
		return content;
	}
};

int main()
{
	int g,sp,l,c;
	double s;
	Essay test;


	cout<<"Grammar Score(0-30): ";
	cin>>g ;

	while(g>=31 || g<= -1)
	{
		cout<<"Invalid input! Grammar Score(0-30): ";
		cin>>g ;
	}

	cout<<"Spelling Score(0-20): ";
	cin>>sp;

	while(sp>=21 || sp<=-1)
	{
		cout<<"Invalid input! Spelling Score(0-20): ";
		cin>>sp;
	}

	cout<<"Length Score(0-20): ";
	cin>>l;

	while(l>=21 || l<=-1)
	{
		cout<<"Invalid input! Length Score(0-20): ";
		cin>>l;
	}

	cout<<"Content Score(0-30): " ;
	cin >> c;

	while(c>=31 || c<=-1)
	{
		cout<<"Invalid input! Content Score(0-30): ";
		cin >> c;
		cout<<endl;
	}

	test.setEssay(g,sp,l,c);

	s = test.getG()+test.getC()+test.getL()+test.getSp();

	test.setScore(s);

	cout<<endl<<"total score = " << s <<endl<<endl;

	cout << "The grade for that test is " << test.getLetterGrade() << endl;



return 0;
}
