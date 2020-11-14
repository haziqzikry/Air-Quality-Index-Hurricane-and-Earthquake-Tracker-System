#include<stdio.h>
#include<stdlib.h>
/* Mohamad Haziq Zikry Bin Mohammad Razak; E07; 2019223486 */

// 		Function Prototype		 //
int ch, x ; //declaring
float ML ; //declaring
int ch3, ch4 ; //declaring
int AirQualityIndex(int ch2);
int Hurricane(int ch3);
float Earthquake(float ML);

int main()
{
do {
	main :
	system("cls");    /* ************Main menu ***********************  */
    printf("\n\t **** Welcome to Cosmic Newspaper Company ****");
    printf("\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Air Quality Index\n\t\t[2] Hurricane\n\t\t[3] Earthquake\n\t\t[4] Exit\n\t\t=====================\n\t\t");
    printf("Enter the choice: ");
    scanf("%d",&ch);
    printf("\n");
    x=0 ;
		if(ch == 1)
			x = AirQualityIndex(0);	 // Calling function AirQualityIndex();
		else if (ch == 2)
			x = Hurricane(0); //Calling function Hurricane();
		else if (ch == 3)
			x = Earthquake(0); //Calling function Earthquake();
		else if (ch == 4)
		{
			printf("Exitting... ");
			exit(0);
		}
		else
		{
			printf("\nPlease re-enter your input...");
			goto main ;
		}
	} while(x == 2);

		printf("\n Incorrect input! ");

		return 0;

}

int AirQualityIndex (int ch2) // function definition for Air Quality Index
{
	int AQI ; 	//declaring AQI
	do{
	printf ("Enter Air Quality Index (AQI) reading:  ")	;
	scanf ("%d" , &AQI); //ask the user to enter Air Quality Index Value
	if (AQI >= 0 && AQI <= 50) //if the value entered is in the range it will display the information
	{
		printf ("Air Quality: Good \n") ;
				printf ("Colour: Green \n") ;
	}
	else if (AQI >= 51 && AQI <= 100) //if the value entered is in the range it will display the information
	{
			printf ("Air Quality: Moderate \n") ;
				printf ("Colour: Yellow \n") ;
	}
	else if (AQI >= 101 && AQI <= 150) //if the value entered is in the range it will display the information
	{
			printf ("Air Quality: Unhealthy for Sensitive Groups \n") ;
				printf ("Colour: Orange \n") ;
	}
	else if (AQI >= 151 && AQI <= 200) //if the value entered is in the range it will display the information
	{
			printf ("Air Quality: Unhealthy \n") ;
				printf ("Colour: Red \n") ;
	}
	else if (AQI >= 201 && AQI <= 300) //if the value entered is in the range it will display the information
	{
			printf ("Air Quality: Very Unhealthy \n") ;
				printf ("Colour: Purple \n") ;
	}
	else if (AQI >= 301 && AQI <= 500) //if the value entered is in the range it will display the information
	{
			printf ("Air Quality: Hazardous \n") ;
				printf ("Colour: Maroon \n") ;
	}
	else
		printf(" Invalid input ");

		printf("\n Do you want to enter another input ? (1) Yes (2) Back \n --> "); //ask the user if they want to repeat the test
		scanf("%d",&ch2);

		}
		while(ch2 == 1);

		return ch2;
}

int Hurricane(int ch3) // Hurricane Function
{
int reading ; //declaring
float SW ; //declaring
	printf ("Reading in mph(1) or km/h? (2) : \n") ;
	scanf("%d", &reading) ;

	if (reading ==2)
	{
	float a ;
	printf ("reading in km/h :"); // Reads reading in  km/h
	scanf ("%f", &a) ;
	SW = a* 1.6 ; // converts reading from km/h to mph

	printf ("Reading in mph is %.2f \n" ,SW ) ;// displays reading in mph
	}
	else
	{
	printf ("Enter Sustained Winds reading:  ")	;
	scanf ("%f" ,&SW);
}
	if (SW >= 74 && SW <= 95) //if the value entered is in the range it will display the information
	{
		printf ("Category of Sustained Winds: 1 \n") ;
				printf ("Very dangerous winds will produce some damage. \n") ;
	}
	else if (SW >= 96 && SW <= 110) //if the value entered is in the range it will display the information
	{
			printf ("Category of Sustained Winds: 2 \n") ;
				printf ("Extremely dangerous winds will cause extensive damage. \n") ;
	}
		else if (SW >= 111 && SW <= 129) //if the value entered is in the range it will display the information
	{
			printf ("Category of Sustained Winds: 3(major) \n") ;
				printf ("Devastating damage will occur. \n") ;
	}
	else if (SW >= 130 && SW <= 156) //if the value entered is in the range it will display the information
	{
			printf ("Category of Sustained Winds: 4(major) \n") ;
				printf ("Catastrophic damage will occur. \n") ;
	}
		else if (SW >= 157) //if the value entered is in the range it will display the information
	{
			printf ("Category of Sustained Winds: 5(major) \n") ;
				printf ("Catastrophic damage will occur. \n") ;
	}

	printf("\n\n\nEnter the Choice:\n\n[1] Another Reading\t[0] Main Menu\n");  //ask the user if they want to repeat the test
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
       x=Hurricane(0) ;
    case 0:
      main ();
    default:
        printf("Invalid choice");
        break;
    }
	return ;
}


float Earthquake (float ML)// function definition for Earthquake
{

do{
	printf ("Enter Magnitude Level reading:  ")	;
	scanf ("%f" ,&ML);
	if (ML >= 0.0 && ML <= 2.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: micro \n") ;
		printf ("Generally not felt by people,though recorded on local instruments. \n");
		printf ("Earthquakes per year: more than 100,000. \n") ;

	}
	else if (ML >= 3.0 && ML <= 3.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: minor \n") ;
		printf ("Felt by many people, no damage. \n");
		printf ("Earthquakes per year: 12,000-100,000. \n") ;

	}
	else if (ML >= 4.0 && ML <= 4.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: light \n") ;
		printf ("Felt by all; minor breakage of objects. \n");
		printf ("Earthquakes per year: 2,000-12,000. \n") ;

	}
	else if (ML >= 5.0 && ML <= 5.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: moderate \n") ;
		printf ("Some damage to weak structures. \n");
		printf ("Earthquakes per year: 200-2,000. \n") ;

	}
	else if (ML >= 6.0 && ML <= 6.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: strong \n") ;
		printf ("Moderate damage in populated areas. \n");
		printf ("Earthquakes per year: 20-200. \n") ;
	}
	else if (ML >= 7.0 && ML <= 7.9) //if the value entered is in the range it will display the information
	{
		printf ("Category: major \n") ;
		printf ("Serious damage in populated areas; loss of life. \n");
		printf ("Earthquakes per year: 3-20. \n") ;
	}
	else if (ML >= 8.0) //if the value entered is in the range it will display the information
	{
		printf ("Category: great \n") ;
		printf ("Severe destruction and loss of life over large areas. \n");
		printf ("Earthquakes per year: fewer than 3. \n") ;
	}
	else
		printf("\n Invalid Input! ");

		printf("\n\n Do you want to input another reading? \n(1)Yes \n(2)Back \n--> "); //ask the user if they want to repeat the test
		scanf("%d",&ch4);

	} while (ch4 == 1);

	return ch4;
}
