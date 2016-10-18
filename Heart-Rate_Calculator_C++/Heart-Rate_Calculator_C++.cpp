/*  Author: Abuzar Noorali
Purpsoe/Description: This program recieves an initial name and date of birth of a user, then calculates their age, maximum heart rate and target heart rate and displays this
information back to the user.
*/
#include <iostream>
#include <string>
using namespace std;

class HeartRates
{
private:
	string firstName;			//Hold user's first name
	string lastName;			//Hold user's last name
	int DOB_Month;				//Hold user's Month of Birth
	int DOB_Day;				//Hold user's Day of birth
	int DOB_Year;				//Hold user's Year of birth

public:
	HeartRates(string fname, string lname, int month, int day, int year) : firstName(fname), lastName(lname), DOB_Month(month), DOB_Day(day), DOB_Year(year)
	{//Constructor

		//Constructor assigns variable values based on user inputs.

	}//End constructor


	 //Set & Get functions for arguments

	void setFirstName(string fname)
	{
		firstName = fname;			//Assign firstName variable value based on user input
	}

	string getFirstName()
	{
		return firstName;			//Return firstName variable to main function
	}

	void setLastName(string lname)
	{
		lastName = lname;			//Assign lastName variable value based on user input
	}

	string getLastName()
	{
		return lastName;			//Return lastName variable to main function
	}

	void setDOBMonth(int month)
	{
		DOB_Month = month;			//Assign date of birth month value based on user input
	}

	int getDOBMonth()
	{
		return DOB_Month;			//Return date of birth month to main function
	}

	void setDOBDay(int day)
	{
		DOB_Day = day;				//Assign date of birth day value based on user input
	}

	int getDOBDay()
	{
		return DOB_Day;				//Return date of birth day to main function
	}

	void setDOBYear(int year)
	{
		DOB_Year = year;			//Assign date of birth year value based on user input
	}

	int getDOBYear()
	{
		return DOB_Year;			//Return date of birth year to main function
	}

		//getAge function calculates users age by getting the current date from the user and returing the user's age in years

	int getAge()
	{
		int currentMonth, currentDay, currentYear, age;							//Hold the current month, the current day, current year

		cout << "Please enter the current date in month/day/year format:  \n";	//Get the current date from the user
		cin >> currentMonth >> currentDay >> currentYear;						

		//Calculate and return a person's age in years

		age = (currentYear - DOB_Year);
		return age;
	}


		//Calculate max heart rate using user's age in years

	int getMaximumHeartRate(int a)						
	{
		int maxHeartRate = (220 - a);									//Calculate user's maximum heart rate
		return maxHeartRate;											//Return user's maximum heart rate to main function
	}

		//Calculate target heart rate using user's max heart rate

	double getTargetHeartRate(int mh)
	{
		return (mh * 0.5);												//Calculate and return the user's target heart rate
	}

};																		//End class HeartRates

		//Main function

int main()
{
	string fname, lname;							//Store first name, and last name
	int month, day, year, a, mh;					//Store month, day, year, age, and maximum heart rate

		//Get user's first and last name, and birthday

	cout << "Please enter your First name and Last name: " << endl;
	cin >> fname >> lname;

	cout << "Please enter your birthday in: month/day/year format: \n";
	cin >> month >> day >> year;

		//Create an object of the HeartRates class

	HeartRates HeartRates1(fname, lname, month, day, year);

	//Store user's age in the 'a' variable

	a = HeartRates1.getAge();

	//Display User's name, date of birth, age and max and target heart rates.

	cout << "User's name: " << HeartRates1.getFirstName() << " " << HeartRates1.getLastName() << "\n";
	cout << "User's Date of Birth: " << HeartRates1.getDOBMonth() << "/" << HeartRates1.getDOBDay() << "/" << HeartRates1.getDOBYear() << "\n";
	cout << "User's Age: " << a << "\n";

	//Store user's maximum heart rate in 'mh' variable

	mh = HeartRates1.getMaximumHeartRate(a);
	cout << "User's maximum heart rate: " << HeartRates1.getMaximumHeartRate(a) << "\n";
	cout << "User's target heart rate: " << HeartRates1.getTargetHeartRate(mh) << "\n";
	cout << "\n";


	return 0;

}