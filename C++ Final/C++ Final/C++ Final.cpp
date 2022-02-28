#include <iostream>


#include <iomanip>





void main()


{


	int TestScore[10]; = { 0 };


	int score = 0;


	double average = 0.0;


	int sum = 0;


	int count = 0;


	for (i = 0; i <= 9; i++)


	{


		cout << "Student Score" << endl;


		cin >> TestScore[i]


			sum += TestScore[i];





		if (TestScore[i] < 89


		{


			count = count + 1;


		}


		else count = 0;


	}


	//calculate avg


	average = sum / 10;


	cout << "Average Score" << average << endl;


	cout << "Students scoring less than 89: " << count << endl;


}






