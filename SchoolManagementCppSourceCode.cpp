
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//SCHOOL MANAGEMENT PROGRAM

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Headers inclusion

#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;

//Structure defining

//For students
struct student
{
	string fname;//for student first name
	string lname;//for student last name
	string Registration;//for Registration No number
	string classes;//for class info
}   studentData;//Variable of student type

struct course
{
	string title;//for course title
	string ccode;//for course code
	string lecname;//for lecturer name
}   courseData;//Variable of course type

//For teacher
struct teacher
{
	string fst_name;//first name of teacher
	string lst_name;//last name of teacher
	string qualification;//Qualification of teacher
	string exp;//Experiance of the person
	string pay;//Pay of the teacher
	string subj;//subject whos he/she teach
	string lec;//Lecture per Week
	string addrs;//Adders of teacher home
	string cel_no;//Phone number 
	string blod_grp;//Bool Group 
	string serves;//Number of serves in School

}   teacher[50];//Variable of teacher type

///////////////////////////////////////////////////
//Main function

int main()
{
	
	int i=0,j;//for processing usage 
	char choice;//for getting choice
	string find;//for sorting
	string srch;
	
	while(1)//outer loop
	{	
			system("cls");//Clear screen
		
		//Level 1-Display process 
			cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
			cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
			cout<<"\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\";
			cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
			cout<<"Enter your choice: "<<endl;
			cout<<"1.Student "<<endl;
			cout<<"2.teacher "<<endl;
			cout<<"3.Courses "<<endl;
			cout<<"4.Exit program"<<endl;
			cin>>choice;
		
		system("cls");//Clear screen
		
		
		switch(choice)//First switch
		{
			
		case '1': //Student
			{	
		while(1)//inner loop-1
		{	
		system("cls");//Clear screen
		//Level-2 display
		cout<<"\t\t\tSTUDENTS INFORMATION AND BIO DATA SECTION\n\n\n";
		cout<<"Enter your choice: "<<endl;
		cout<<"1.Add New Student\n";
		cout<<"2.Search and Display Student Data\n";
		cout<<"3.Add Academic Record\n";
		cout<<"4.Back to home\n";
		cin>>choice;
		
		switch (choice)//Second switch
		
		{
		case '1'://Insert data
		{		ofstream f1("student.txt",ios::app);
			
			for( i=0;choice!='n';i++)
			{
			
				if((choice=='y')||(choice=='Y')||(choice=='1'))
				{
					cout<<"Enter First name: ";
					cin>>studentData.fname;
					cout<<"Enter Last name: ";
					cin>>studentData.lname;
					cout<<"Enter Registration number: ";
					cin>>studentData.Registration;
					cout<<"Enter class: ";
					cin>>studentData.classes;
					
					f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
					cout<<"Do you want to enter data: ";
					cout<<"Press Y for Continue and N to Finish:  ";
					cin>>choice;
				}
			} 
			
			f1.close();
		
		}
		continue;//control back to inner loop -1
		
		case '2'://Display data
		{		ifstream f2("student.txt");	
			
			cout<<"Enter First name to be displayed: ";
			cin>>find;
			cout<<endl;
			int notFound = 0;
			for( j=0;(j<i)||(!f2.eof());j++)
			{	
			
			getline(f2,studentData.fname);
			
			if(studentData.fname==find)
			{
				notFound = 1;
				cout<<"First Name: "<<studentData.fname<<endl;
				cout<<"Last Name: "<<studentData.lname<<endl;
			
				getline(f2,studentData.Registration);
				cout<<"Id Number: "<<studentData.Registration<<endl;
				getline(f2,studentData.classes);
				cout<<"Level: "<<studentData.classes<<endl<<endl;
			}
			
			}
			
			if(notFound == 0){
			
			cout<<"No Record Found"<<endl;
			}
			f2.close();
			cout<<"Press any key two times to proceed";
			getch();//To hold data on screen
			getch();//To hold data on screen
		
		}
		continue;//control back to inner loop -1
		
		case '3'://Insert data
		{		ofstream f3("records.txt",ios::app);
			
			for( i=0;choice!='n';i++)
			{
			
				if((choice=='y')||(choice=='Y')||(choice=='1'))
				{
					cout<<"Enter Student Id: ";
					cin>>studentData.fname;
					cout<<"Enter Course code: ";
					cin>>studentData.lname;
					cout<<"Enter Registration number: ";
					cin>>studentData.Registration;
					cout<<"Enter class: ";
					cin>>studentData.classes;
					
					//f1<<studentData.fname<<endl<<studentData.lname<<endl<<studentData.Registration<<endl<<studentData.classes<<endl;
					cout<<"Do you want to enter data: ";
					cout<<"Press Y for Continue and N to Finish:  ";
					cin>>choice;
				}
			} 
			
			f3.close();
		
		}
		continue;//control back to inner loop -1
		
		case '4'://Jump to main
			{
			  break;//inner switch breaking
			}
		}
		
		break;//inner loop-1 breaking
		}
		continue;//Control pass to 1st loop				
		}
		
		case '2'://teacher biodata
		{	
		while(1)//inner loop-2
		{	
		system("cls");//Clear screen
		//Level-2 Display process
		cout<<"\t\t\tTEACHER INFORMATION AND BIODATA \n\n\n";
		cout<<"Enter your choice: "<<endl;
		cout<<"1.Add New teacher\n";
		cout<<"2.Search and display teacher data\n";
		cout<<"3.Back to main\n";
		cin>>choice;
		
		switch (choice)//Third switch
		{
		case '1'://Insert data
		{	
		ofstream t1("teacher.txt",ios::app);
		
		for(i=0;choice!='n'&& choice!='N';i++)
		{
			
			if((choice=='y')||(choice=='Y')||(choice=='1'))
			{
				cout<<"Enter First name: ";
				cin>>teacher[i].fst_name;
				cout<<"Enter Last name: ";
				cin>>teacher[i].lst_name;
				cout<<"Enter qualification: ";
				cin>>teacher[i].qualification;
				
				
			    cout<<"Enter pay: ";
				cin>>teacher[i].pay;
				cout<<"Enter Phone Number: ";
				cin>>teacher[i].cel_no;
				
				
				
				t1<<teacher[i].fst_name<<endl<<teacher[i].lst_name<<endl	
					<<teacher[i].qualification<<endl<<teacher[i].pay<<endl<<teacher[i].cel_no<<endl;
				cout<<"Do you want to enter data: ";
				cin>>choice;
			}//if
		}//for loop
		//for finding through name 
		system("cls");
		
		
		
		t1.close();
		}//case 1
		
		continue;//Control pass to inner loop-2
		
		case '2'://Display data
		{	
		ifstream t2("teacher.txt");	
		
		cout<<"Enter name to be displayed: ";
		cin>>find;
		
		cout<<endl;
		int notFound = 0;
		for( j=0;((j<i)||(!t2.eof()));j++)
		{	
			
			getline(t2,teacher[j].fst_name);
			
			if(teacher[j].fst_name==find)
			{
				notFound = 1;
				cout<<"First name: "<<teacher[j].fst_name<<endl;
				getline(t2,teacher[j].lst_name);
				cout<<"Last name: "<<teacher[j].lst_name<<endl;
				getline(t2,teacher[j].qualification);
				cout<<"Qualification: "<<teacher[j].qualification<<endl;
				
		
				
		
				
		
				
				getline(t2,teacher[j].pay);
				cout<<"pay: "<<teacher[j].pay<<endl;
		
				
		
				getline(t2,teacher[j].cel_no);
				cout<<"Phone Number: "<<teacher[j].cel_no<<endl;
		
				
			}//if
			
		}//for loop
		t2.close();
		if(notFound == 0){
		
			cout<<"No Record Found"<<endl;
		}
		cout<<"Press any key two times to proceed";
		getch();//To hold data on screen
		getch();//To hold data on screen
		}//case 2
		
		continue;//Control pass to inner loop-2
		
		case '3'://Jump to main 
		{
		break;//inner switch
		}//case 3
		
		}//inner switch
		
		break;//inner while
		}//inner loop
		
		continue;//control pass to 1st loop
		}//outer case 2
		
		case '3':// Course Data
		{	
		while(1)//inner loop-1
		{	
		system("cls");//Clear screen
		//Level-2 display
		cout<<"\t\t\tCourse INFORMATION SECTION\n\n\n";
		cout<<"Enter your choice: "<<endl;
		cout<<"1.Add New Course\n";
		cout<<"2.Search and Display Course Data\n";
		cout<<"3.Back to home\n";
		cin>>choice;
		
		switch (choice)//Second switch
		
		{
		case '1'://Insert data
		{		ofstream f1("course.txt",ios::app);
		
		for( i=0;choice!='n';i++)
		{
		
		if((choice=='y')||(choice=='Y')||(choice=='1'))
		{
			cout<<"Enter Course Title: ";
			cin>>courseData.title;
			
			cout<<"Enter Course Code: ";
			cin>>courseData.ccode;
			
			cout<<"Enter Lecturer Name: ";
			cin>>courseData.lecname;
			
			
			f1<<courseData.title<<endl<<courseData.ccode<<endl<<courseData.lecname<<endl;
			cout<<"Do you want to enter data: ";
			cout<<"Press Y for Continue and N to Finish:  ";
			cin>>choice;
		}
		} 
		f1.close();
		}
		continue;//control back to inner loop -1
		
		case '2'://Display data
		{		ifstream f2("course.txt");	
		
		cout<<"Enter Course code to search: ";
		cin>>find;
		cout<<endl;
		int notFound = 0;
		for( j=0;(j<i)||(!f2.eof());j++)
		{	
		
		getline(f2,courseData.ccode);
		
		if(courseData.ccode==find)
		{
			notFound = 1;
			cout<<"Course Title: "<<courseData.title<<endl;
			cout<<"Course Code: "<<courseData.ccode<<endl;
		
			
		}
		
		}
		
		if(notFound == 0){
		
		cout<<"No Record Found"<<endl;
		}
		f2.close();
		cout<<"Press any key two times to proceed";
		getch();//To hold data on screen
		getch();//To hold data on screen
		
		}
		continue;//control back to inner loop -1
		
		case '3'://Jump to main
		{
		break;//inner switch breaking
		}
		}
		
		break;//inner loop-1 breaking
		}
		continue;//Control pass to 1st loop				
		}
		
		case '4':
		{
		break;//outer case 3
		}//outer case 3
		}			
		break;//outer loop
}


}



