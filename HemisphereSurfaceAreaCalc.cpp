# include <iostream>
# include <cmath>
# include <iomanip>
using namespace std;
int main()
{
	cout << "************";
	cout << "Welcome to The Hemisphere Surface Area / Volume Calculator *************" << endl;
	cout << endl;
	cout << "Enter 1 to Calculate Surface Area of Hemispheres" << endl;
	cout << "Enter 2 to Calculate Volume of Hemispheres" << endl;
	int num, surfnum, diam1, diam2, volumenum, option1;
	double surfacearea, volume;
	cin >> num;
	if (num = 1) {
		cout << "How Many Hemispheres' Surface Areas Would You Like to Calculate? ";
		cin >> surfnum; 
		if (surfnum >= 1) {
			for (int i = 1; i <= surfnum; i++) {
				cout << "Enter the Diameter for Hemisphere " << i << " in meters: ";
				cin >> diam1;
				if (diam1 < 0) {
					cout << "The Diameter Value Must NOT be Negative!";
					cout << "Enter the Diameter for Hemisphere " << i << " in meters: ";
				}
				else;
				surfacearea = 3 * PI * pow((diam1 / 2), 2);
				cout << "The Surface Area of the Hemisphere with Diameter: " << diam1;
				cout << " meters is: " << surfacearea << " meters^2" << endl;
			}
		}
		else {
			cout << "The Number of Hemispheres Must be One or More!" << endl;
			cout << "How Many Hemispheres' Surface Areas Would You Like to Calculate? ";
		}

	}
	else if (num = 2) {
		cout << "How Many Hemispheres' Volumes Would You Like to Calculate? ";
		cin >> volumenum;
		if (volumenum >= 1) {
			for (int j = 1; j <= volumenum j++) {
				cout << "Enter the Diameter for Hemisphere " << j << " in meters: ";
				cin >> diam2;
				if (diam2 < 0) {
					cout << "The Diameter Value Must NOT be Negative!";
					cout << "Enter the Diameter for Hemisphere " << j << " in meters: ";
				}
				else;
				volume = (2.0 / 3.0) * PI * pow((diam2 / 2), 3);
				cout << "The Volume of the Hemisphere with Diameter: " << diam2;
				cout << " meters is: " << volume << " meters^2" << endl;
			}
		}
	}
	else {
			cout << "Enter 1 to Calculate Surface Area of Hemispheres" << endl;
			cout << "Enter 2 to Calculate Volume of Hemispheres" << endl;
	}
	cout << "Would you Like to Run the Hemisphere Surface Area / Volume Calculator again?";
	cout << "Enter Y or y For YES or N or n For NO: ";
	cin >> option1;
	if (option1 = 'Y' || option1 = 'y') {
		cout << "Enter 1 to Calculate  Surface Area of Hemispheres" << endl;
		cout << "Enter 2 to Calculate Volume of Hemispheres" << endl;
	}
	else if (option1 = 'N' || option1 = 'n')
		cout << "Thank You ... Good Bye!";
	else
		cout << "Enter Y or y For YES or N or n For NO:";

	// the following code creates the needed variables and constants 
	// The following code is copied from Blackboard's Lecture 3 Notes
	const double PI = acos(-1.0);
	// end of copied code
	double d1, d2, d3, V1, V2, V3, S1, S2, S3, Vavg, Savg;

	// The following code will obtain the three diameters from the user
	cout << endl;
	cout << "Enter the diameter (in meters) for the first hemisphere: ";
	cin >> d1;

	cout << "Enter the diameter (in meters) for the second hemisphere: ";
	cin >> d2;

	cout << "Enter the diameter (in meters) for the third hemisphere: ";
	cin >> d3;

	cout << endl;

	// The following code calculates the volume for each given diameter 
	V1 = (2.0 / 3.0) * PI * pow((d1 / 2), 3);
	V2 = (2.0 / 3.0) * PI * pow((d2 / 2), 3);
	V3 = (2.0 / 3.0) * PI * pow((d3 / 2), 3);

	// The following code calculates the surface area for each given diameter
	S1 = 3 * PI * pow((d1 / 2), 2);
	S2 = 3 * PI * pow((d2 / 2), 2);
	S3 = 3 * PI * pow((d3 / 2), 2);

	// The following code calculates the average surface area and average volume of the hemispheres using all three diameters 
	Vavg = (V1 + V2 + V3) / 3;
	Savg = (S1 + S2 + S3) / 3;

	// The following code is responsible for outputting the calculations 
	cout << "The Volume of the hemisphere with Diameter: " << fixed << setprecision(3) << d1 << " meters is: " << V1 << " meters^3" << endl;

	cout << "The Surface Area of the hemisphere with Diameter: " << d1 << " meters is: " << S1 << " meters^2" << endl;
	cout << "" << endl;

	cout << "The Volume of the hemisphere with Diameter: " << fixed << setprecision(3) << d2 << " meters is: " << V2 << " meters^3" << endl;

	cout << "The Surface Area of the hemisphere with Diameter: " << d2 << " meters is: " << S2 << " meters^2" << endl;
	cout << endl;

	cout << "The Volume of the hemisphere with Diameter: " << fixed << setprecision(3) << d3 << " meters is: " << V3 << " meters^3" << endl;

	cout << "The Surface Area of the hemisphere with Diameter: " << d3 << " meters is: " << S3 << " meters^2" << endl;
	cout << endl;

	cout << "The Average Volume of the three Hemispheres is: " << Vavg << " meters^3" << endl;
	cout << "The Average Surface Area of the three Hemispheres is: " << Savg << " meters^2" << endl;

	cout << endl;
	cout << "Done ... Good Bye !";

	return 0;
}
