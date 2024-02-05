#include<iostream>
#include<iomanip>
#include<string>
#include<windows.h>
#include<time.h>
#include<fstream>


using namespace std;



int main();
void mainmenu(string, string);
int login;
void driverbar();
void logo();
void loadin(double, int, char);                             // These are all Prototypes of Function
void option();
void log();
void ride();
void pack();
void cardr();
void bkdr();
void rkdr();
void decision(double, double, char);




int petrol = 226;
string logw;
string passw, phk;





struct CAR {
	string name;
	string id;
};
struct BIKE {
	string name;
	string id;
};
struct RICKSHAW {
	string name;
	string id;
};





void cardr()
{
	CAR c[10];
	string l[10], l1[10];
	string ran;


	c[0].name = "Mustafa";
	c[0].id = "6578";
	c[1].name = "Ali";
	c[1].id = "5744";
	c[2].name = "Mansour";
	c[2].id = "3853";
	c[3].name = "Ahmad";
	c[3].id = "6590";
	c[4].name = "Musa";
	c[4].id = "0623";
	c[5].name = "Abdul-Rehman";
	c[5].id = "2452";
	c[6].name = "John Wick";
	c[6].id = "1342";
	c[7].name = "Nazeer";
	c[7].id = "6453";
	c[8].name = "Junaid";
	c[8].id = "9653";
	c[9].name = "Akram";
	c[9].id = "1122";

	for (int a = 0; a < 10; a++)
	{
		ofstream file("C://Users/ASUS/Desktop/CP Project/Car Drivers/" + c[a].name + ".txt");
		file << c[a].name << endl << c[a].id << endl;
	}
	for (int y1 = 0; y1 < 10; y1++)
	{
		ifstream read("C://Users/ASUS/Desktop/CP Project/Car Drivers/" + c[y1].name + ".txt");
		getline(read, l[y1]);
		getline(read, l1[y1]);
	}
	int i;
	srand(time(0));
	i = (rand() % 10) + 1;

	cout << "Driver's Name: " << l[i] << "                                                                 Driver's ID: " << l1[i] << endl << endl;




}
void bkdr()
{
	string l[10], l1[10];
	BIKE b[10];
	int i = 0;


	string ran;
	b[0].name = "Massarat";
	b[0].id = "6542";
	b[1].name = "Arsalan";
	b[1].id = "5723";
	b[2].name = "Sher";
	b[2].id = "7344";
	b[3].name = "Ahmed";
	b[3].id = "2723";
	b[4].name = "Mustafa";
	b[4].id = "2511";
	b[5].name = "Abdul-Rehman";
	b[5].id = "8549";
	b[6].name = "John";
	b[6].id = "6324";
	b[7].name = "Kabeer";
	b[7].id = "0987";
	b[8].name = "Junaid";
	b[8].id = "9653";
	b[9].name = "Shabbir";
	b[9].id = "1356";



	srand(time(0));
	i = (rand() % 10) + 1;
	for (int a = 0; a < 10; a++)
	{
		ofstream file("C://Users/ASUS/Desktop/CP Project/Bike Drivers/" + b[a].name + ".txt");
		file << b[a].name << endl << b[a].id << endl;
	}
	for (int y1 = 0; y1 < 10; y1++)
	{
		ifstream read("C://Users/ASUS/Desktop/CP Project/Bike Drivers/" + b[y1].name + ".txt");
		getline(read, l[y1]);
		getline(read, l1[y1]);
	}


	cout << "Driver's Name: " << l[i] << "                                                                Driver's ID: " << l1[i] << endl << endl;

}

void rkdr()
{
	RICKSHAW r[10];

	string l[10], l1[10];
	int i = 0;


	r[0].name = "Jameel";
	r[1].name = "Akhtar";
	r[2].name = "Awais";
	r[3].name = "Mian Javad";
	r[4].name = "Baloch";
	r[5].name = "Sabih";
	r[6].name = "Qaiser";
	r[7].name = "Kabeer";
	r[8].name = "Anas";
	r[9].name = "Shykh";

	r[0].id = "4122";
	r[1].id = "1256";
	r[2].id = "6231";
	r[3].id = "7243";
	r[4].id = "3677";
	r[5].id = "7231";
	r[6].id = "6327";
	r[7].id = "2371";
	r[8].id = "6237";
	r[9].id = "2367";

	srand(time(0));
	i = (rand() % 10) + 1;
	for (int a = 0; a < 10; a++)
	{
		ofstream file("C://Users/ASUS/Desktop/CP Project/Rickshaw Drivers/" + r[a].name + ".txt");
		file << r[a].name << endl << r[a].id << endl;
	}
	for (int y1 = 0; y1 < 10; y1++)
	{
		ifstream read("C://Users/ASUS/Desktop/CP Project/Rickshaw Drivers/" + r[y1].name + ".txt");
		getline(read, l[y1]);
		getline(read, l1[y1]);
	}
	cout << "Driver's Name: " << l[i] << "                                                                Driver's ID: " << l1[i] << endl << endl;

}














void mainmenu(string log2, string pass2)
{
	int ch;
	logo();
	cout << setw(65) << setfill(' ') << "Welcome to your Careem Account, " << log2 << endl;
	cout << setw(70) << setfill(' ') << "         Book A Ride (1)             " << endl;
	cout << setw(68) << setfill(' ') << "     Book A Package Delivery (2)     " << endl;
	cout << setw(67) << setfill(' ') << "  Access Your Account Information (3)" << endl;
	cin >> ch;

	if (ch == 1 || ch == 2 || ch == 3)
	{


		if (ch == 1)
		{
			ride();
		}
		else if (ch == 2)
		{
			pack();
		}
		else if (ch == 3)
		{

			char a = 'a';
			do
			{


				cout << setw(59) << setfill(' ') << "Your Username is " << log2 << endl;
				cout << setw(59) << setfill(' ') << "Your Password is " << pass2 << endl;
				cout << setw(59) << setfill(' ') << "Your Phone no. is " << phk << endl;

				cout << "                                                                                    Press E to Return" << endl;
				cin >> a;
				if (a == 'e' || a == 'E')
				{
					mainmenu(log2, pass2);
				}
				else
				{
					cout << "Invalid Input" << endl;
				}
			} while (a != 'e' || a != 'E');
		}
	}
	else
	{

		cout << "Invalid Response!" << endl << endl;
		mainmenu(log2, pass2);
	}

}










void loadin(double km, int tim, char bl)
{
	double peak = 2.2;
	int rcar = 10;
	int rbike = 20;
	int rrck = 40;
	int rate = 0;

	char trav = 'a';
	char opt = 'a';
	string l[10], k[10], o[10], l1[10], k1[10], o1[10];


	cout << "\n";
	cout << "Distance : " << km << "                                                                          Estimated Time: " << tim << endl;
	cout << "                                                 Block : " << bl << endl;

	cout << "                                                     Travel Options                                                            " << endl << endl;
	cout << "Car (c)                                              Bike (b)                                  Rickshaw (r)                " << endl;
	cin >> trav;
	if (trav == 'c' || trav == 'b' || trav == 'r' || trav == 'B' || trav == 'C' || trav == 'R')
	{

		if (trav == 'c' || trav == 'C')
		{
			rate = peak * km * (petrol / rcar);


			cout << "                                             RATE :  Rs. " << rate << endl;

		}
		else if (trav == 'b' || trav == 'B')
		{
			rate = peak * km * (petrol / rbike);


			cout << "                                             RATE :  Rs. " << rate << endl;
		}

		else if (trav == 'r' || trav == 'r')
		{
			rate = peak * km * (petrol / rrck);


			cout << "                                                 RATE :  Rs. " << rate << endl << endl;
		}
	}
	else
	{
		cout << "                                                          Wrong Travel Type" << endl;
		loadin(km, tim, bl);
	}

	cout << "\t\t\t \t\t\tDo You Want to Continue\n\t\t\t\tYes(y)\t\t\t\t\tReturn To Main Menu(n)\n";
	cin >> opt;



	if (opt == 'y' || opt == 'Y' || opt == 'n' || opt == 'N')
	{
		if (opt == 'y' || opt == 'Y')
		{
			cout << "                            \n                                           FINDING YOUR DRIVER....                                                 " << endl;
			driverbar();

			cout << endl << endl;
			cout << "\n\t                                     Driver Found!!!                                                         " << endl;
			if (trav == 'c')
			{
				cardr();
			}
			else if (trav == 'b')
			{
				bkdr();
			}
			else if (trav == 'r')
			{
				rkdr();
			}
		}
		else if (opt == 'n' || opt == 'N')
		{
			mainmenu(logw, passw);
		}
	}
	else
	{
		cout << "Invalid Input" << endl;
		loadin(km, tim, bl);
	}

}
















void driverbar()  //Function For The Loading Bar
{

	SetConsoleCP(437);
	SetConsoleOutputCP(437);
	int bckbar = 177;
	int bar1 = 219;
	char c = bar1;
	char b = bckbar;
	cout << "   \t\t\t\t";
	for (int a = 1; a <= 35; a++)
	{
		cout << b;
	}
	cout << "\r";
	cout << "   \t\t\t\t";
	cout << " ";
	for (int i = 1; i <= 35; i++)
	{
		cout << c;
		Sleep(150);
	}

}
void ride()
{
	double dest = 0, pickup = 0;
	char block = 'a';
	logo();

	cout << "Enter Your Destination                                                  (in the form of digits, ranging from 1-9): " << endl;
	cout << setw(58) << setfill(' ') << "1. Bahria Town" << endl;
	cout << setw(58) << setfill(' ') << "2. Canal Gardens" << endl;
	cout << setw(58) << setfill(' ') << "3. Wapda Town" << endl;
	cout << setw(58) << setfill(' ') << "4. PIA Society" << endl;
	cout << setw(58) << setfill(' ') << "5. D-H-A" << endl;
	cout << setw(58) << setfill(' ') << "6. Johar Town" << endl;
	cout << setw(58) << setfill(' ') << "7. EME Society" << endl;
	cout << setw(58) << setfill(' ') << "8. Lake City" << endl;
	cout << setw(58) << setfill(' ') << "9. Revenue Society" << endl;
	cout << endl;
	cout << setw(20) << setfill(' ') << "NOTE : LIMITED LOCATIONS AS LESSER AVAILAIBILY OF DRIVERS ACROSS LAHORE!!!" << endl;
	cin >> dest;
	if (dest < 1 || dest>9)
	{
		ride();
	}
	while (pickup < 1 || pickup>9)
	{
		cout << endl << endl;
		cout << "Enter Pick-Up Location                                              (in the form of digits, ranging from 1-9): " << endl;
		cout << setw(58) << setfill(' ') << "1. Bahria Town" << endl;
		cout << setw(58) << setfill(' ') << "2. Canal Gardens" << endl;
		cout << setw(58) << setfill(' ') << "3. Wapda Town" << endl;
		cout << setw(58) << setfill(' ') << "4. PIA Society" << endl;
		cout << setw(58) << setfill(' ') << "5. D-H-A" << endl;
		cout << setw(58) << setfill(' ') << "6. Johar Town" << endl;
		cout << setw(58) << setfill(' ') << "7. EME Society" << endl;
		cout << setw(58) << setfill(' ') << "8. Lake City" << endl;
		cout << setw(58) << setfill(' ') << "9. Revenue Society" << endl;
		cout << endl;
		cout << setw(20) << setfill(' ') << "NOTE : LIMITED LOCATIONS AS LESSER AVAILAIBILY OF DRIVERS ACROSS LAHORE!!!" << endl;
		cin >> pickup;
		cout << setw(58) << setfill(' ') << "Select A Block: " << endl;
		cin >> block;
	}
	decision(dest, pickup, block);













}
void pack()
{
	int dest = 0, pickup = 0;
	char block = 'a';
	logo();

	cout << "Enter Your Destination                                                  (in the form of digits, ranging from 1-9): " << endl;
	cout << setw(58) << setfill(' ') << "1. Bahria Town" << endl;
	cout << setw(58) << setfill(' ') << "2. Canal Gardens" << endl;
	cout << setw(58) << setfill(' ') << "3. Wapda Town" << endl;
	cout << setw(58) << setfill(' ') << "4. PIA Society" << endl;
	cout << setw(58) << setfill(' ') << "5. D-H-A" << endl;
	cout << setw(58) << setfill(' ') << "6. Johar Town" << endl;
	cout << setw(58) << setfill(' ') << "7. EME Society" << endl;
	cout << setw(58) << setfill(' ') << "8. Lake City" << endl;
	cout << setw(58) << setfill(' ') << "9. Revenue Society" << endl;
	cout << endl;
	cout << setw(20) << setfill(' ') << "NOTE : LIMITED LOCATIONS AS LESSER AVAILAIBILY OF DRIVERS ACROSS LAHORE!!!" << endl;
	cin >> dest;
	if (dest < 1 || dest>9)
	{
		ride();
	}
	while (pickup < 1 || pickup>9)
	{
		cout << endl << endl;
		cout << "Enter Pick-Up Location                                              (in the form of digits, ranging from 1-9): " << endl;
		cout << setw(58) << setfill(' ') << "1. Bahria Town" << endl;
		cout << setw(58) << setfill(' ') << "2. Canal Gardens" << endl;
		cout << setw(58) << setfill(' ') << "3. Wapda Town" << endl;
		cout << setw(58) << setfill(' ') << "4. PIA Society" << endl;
		cout << setw(58) << setfill(' ') << "5. D-H-A" << endl;
		cout << setw(58) << setfill(' ') << "6. Johar Town" << endl;
		cout << setw(58) << setfill(' ') << "7. EME Society" << endl;
		cout << setw(58) << setfill(' ') << "8. Lake City" << endl;
		cout << setw(58) << setfill(' ') << "9. Revenue Society" << endl;
		cout << endl;
		cout << setw(20) << setfill(' ') << "NOTE : LIMITED LOCATIONS AS LESSER AVAILAIBILY OF DRIVERS ACROSS LAHORE!!!" << endl;
		cin >> pickup;
	}
	decision(dest, pickup, block);


}















void log()
{

	char ch2;
	string lo, pass, lo1, pass1;
	string p2;
	logo();
	cout << "Enter Your Name: " << endl;
	cin >> lo;
	cout << "Enter Your Password: " << endl;
	cin >> pass;
	ifstream read("C://Users/ASUS/Desktop/CP Project/Logins/" + lo + ".txt");
	getline(read, lo1);
	getline(read, pass1);
	getline(read, p2);
	logw = lo1;
	passw = pass;
	phk = p2;
	if (lo1 == lo && pass == pass1)
	{
		cout << setw(59) << setfill(' ') << "Successfully Logged In!" << endl;
		mainmenu(lo1, pass);
	}
	else
	{
		cout << setw(59) << setfill(' ') << "Incorrect Username Or Password!" << endl;
		cout << setw(72) << setfill(' ') << "Press A to try again or Press B to return to the Main Menu" << endl;
		cin >> ch2;
		if (ch2 == 'a' || ch2 == 'A')
		{
			log();
		}
		else if (ch2 == 'b' || ch2 == 'B')
		{
			main();
		}

	}

}












void reg()
{

	logo();
	string lo, pass, phone1;
	cout << setw(59) << setfill(' ') << "Welcome To Careem!" << endl;
	cout << setw(59) << setfill(' ') << "Create A username: " << endl;
	cin >> lo;
	cout << setw(59) << setfill(' ') << "Create A Password: " << endl;
	cin >> pass;
	cout << setw(56) << setfill(' ') << "Enter Your Phone Number: " << endl;
	cin >> phone1;

	ofstream file;
	file.open("C://Users/ASUS/Desktop/CP Project/Logins/" + lo + ".txt");//C://Users/ASUS/Desktop/CP Project/Logins
	file << lo << endl << pass << endl << phone1;
	file.close();

	cout << setw(89) << setfill(' ') << "Congratulations, You've Successfully Created Your Careem Account!" << endl;
	option();


}








void ex()
{
	exit;
}









void option()
{
	cout << endl;
	cout << setw(64) << setfill(' ') << "Press 1 for Login" << endl;
	cout << setw(65) << setfill(' ') << "Press 2 to Register" << endl;
	cout << setw(62) << setfill(' ') << " Press 3 to exit" << endl;
	cin >> login;
	if (login == 1 || login == 2 || login == 3)

	{
		if (login == 1)
		{
			log();
		}
		if (login == 2)
		{
			reg();
		}
		if (login == 3)
		{
			ex();
		}
	}
	else
	{
		cout << "Invalid Input" << endl;
		option();
	}
}











void logo()
{


	cout << setw(19) << " ";
	cout << setw(69) << setfill('*') << "" << endl;
	cout << "                   *          ****      *     ***     *****  *****     *     *         *                         " << endl;
	cout << "                   *         *         * *    *  *    *      *        * *   * *        *                         " << endl;
	cout << "                   *        *          * *    *   *   *      *        * *   * *        *                         " << endl;
	cout << "                   *        *         *****   *****   *****  *****   *   * *   *       *                         " << endl;
	cout << "                   *        *         *   *   *   *   *      *       *   * *   *       *                         " << endl;
	cout << "                   *         *       *     *  *    *  *      *      *     *     *      *                         " << endl;
	cout << "                   *          ****   *     *  *    *  *****  *****  *     *     *      *                           " << endl;
	cout << "                   ";
	cout << setw(69) << setfill('*') << "" << endl;
	int a = 0;
	for (a = 1; a <= 7; a++)
	{
		cout << endl;
	}
}










int main()
{

	system("color 2f");
	logo();
	option();


	return 0;
}









void decision(double dest, double pu, char blo)// a = Destinaton and b = Pickup
{

	logo();
	dest;
	pu;
	blo;

	double kms = 0;
	int timme = 0;
	if (dest == 1 && pu == 2)
	{
		kms = 3.8;
		timme = 9;
	}

	else if (dest == 1 && pu == 3)
	{
		kms = 16;
		timme = 26;
	}
	else if (dest == 1 && pu == 4)
	{
		kms = 17;
		timme = 30;
	}
	else if (dest == 1 && pu == 5)
	{
		kms = 35;
		timme = 42;
	}
	else if (dest == 1 && pu == 6)
	{
		kms = 19;
		timme = 29;
	}
	else if (dest == 1 && pu == 7)
	{
		kms = 12;
		timme = 23;
	}
	else if (dest == 1 && pu == 8)
	{
		kms = 12;
		timme = 22;
	}
	else if (dest == 1 && pu == 9)
	{
		kms = 19;
		timme = 32;
	}






	else if (dest == 2 && pu == 1)
	{
		kms = 3.8;
		timme = 9;
	}

	else if (dest == 2 && pu == 3)
	{
		kms = 13;
		timme = 20;
	}
	else if (dest == 2 && pu == 4)
	{
		kms = 14;
		timme = 25;
	}
	else if (dest == 2 && pu == 5)
	{
		kms = 36;
		timme = 43;
	}
	else if (dest == 2 && pu == 6)
	{
		kms = 18;
		timme = 25;
	}
	else if (dest == 2 && pu == 7)
	{
		kms = 11;
		timme = 20;
	}
	else if (dest == 2 && pu == 8)
	{
		kms = 11;
		timme = 20;
	}
	else if (dest == 2 && pu == 9)
	{
		kms = 18;
		timme = 30;
	}







	else if (dest == 3 && pu == 1)
	{
		kms = 17.6;
		timme = 28;
	}

	else if (dest == 3 && pu == 2)
	{
		kms = 15;
		timme = 24;
	}
	else if (dest == 3 && pu == 4)
	{
		kms = 3.2;
		timme = 7;
	}
	else if (dest == 3 && pu == 5)
	{
		kms = 32;
		timme = 34;
	}
	else if (dest == 3 && pu == 6)
	{
		kms = 6.4;
		timme = 11;
	}
	else if (dest == 3 && pu == 7)
	{
		kms = 8.5;
		timme = 15;
	}
	else if (dest == 3 && pu == 8)
	{
		kms = 12;
		timme = 16;
	}
	else if (dest == 3 && pu == 9)
	{
		kms = 3.9;
		timme = 9;
	}






	else if (dest == 4 && pu == 1)
	{
		kms = 17.6;
		timme = 31;
	}

	else if (dest == 4 && pu == 2)
	{
		kms = 15;
		timme = 24;
	}
	else if (dest == 4 && pu == 3)
	{
		kms = 2.7;
		timme = 7;
	}
	else if (dest == 4 && pu == 5)
	{
		kms = 19;
		timme = 33;
	}
	else if (dest == 4 && pu == 6)
	{
		kms = 4.1;
		timme = 10;
	}
	else if (dest == 4 && pu == 7)
	{
		kms = 10;
		timme = 19;
	}
	else if (dest == 4 && pu == 8)
	{
		kms = 13;
		timme = 20;
	}
	else if (dest == 4 && pu == 9)
	{
		kms = 1.8;
		timme = 5;
	}






	else if (dest == 5 && pu == 1)/////////////////////5555555555555555
	{
		kms = 35;
		timme = 43;
	}

	else if (dest == 5 && pu == 2)
	{
		kms = 38;
		timme = 45;
	}
	else if (dest == 5 && pu == 3)
	{
		kms = 33;
		timme = 37;
	}
	else if (dest == 5 && pu == 4)
	{
		kms = 20;
		timme = 34;
	}
	else if (dest == 5 && pu == 6)
	{
		kms = 19;
		timme = 29;
	}
	else if (dest == 5 && pu == 7)
	{
		kms = 27;
		timme = 40;
	}
	else if (dest == 5 && pu == 8)
	{
		kms = 26;
		timme = 29;
	}
	else if (dest == 5 && pu == 9)
	{
		kms = 18;
		timme = 30;
	}










	else if (dest == 6 && pu == 1)
	{
		kms = 19;
		timme = 29;
	}

	else if (dest == 6 && pu == 2)
	{
		kms = 17;
		timme = 23;
	}
	else if (dest == 6 && pu == 3)
	{
		kms = 6.5;
		timme = 12;
	}
	else if (dest == 6 && pu == 4)
	{
		kms = 5.3;
		timme = 10;
	}
	else if (dest == 6 && pu == 5)
	{
		kms = 20;
		timme = 33;
	}
	else if (dest == 6 && pu == 7)
	{
		kms = 9.4;
		timme = 15;
	}
	else if (dest == 6 && pu == 8)
	{
		kms = 16;
		timme = 23;
	}
	else if (dest == 6 && pu == 9)
	{
		kms = 4.4;
		timme = 10;
	}






	else if (dest == 7 && pu == 1)
	{
		kms = 12;
		timme = 22;
	}

	else if (dest == 7 && pu == 2)
	{
		kms = 10;
		timme = 16;
	}
	else if (dest == 7 && pu == 3)
	{
		kms = 9.3;
		timme = 16;
	}
	else if (dest == 7 && pu == 4)
	{
		kms = 11;
		timme = 19;
	}
	else if (dest == 7 && pu == 5)
	{
		kms = 35;
		timme = 40;
	}
	else if (dest == 7 && pu == 6)
	{
		kms = 12;
		timme = 20;
	}
	else if (dest == 7 && pu == 8)
	{
		kms = 15;
		timme = 22;
	}
	else if (dest == 7 && pu == 9)
	{
		kms = 12;
		timme = 23;
	}






	else if (dest == 8 && pu == 1)
	{
		kms = 12;
		timme = 22;
	}

	else if (dest == 8 && pu == 2)
	{
		kms = 16;
		timme = 26;
	}
	else if (dest == 8 && pu == 3)
	{
		kms = 13;
		timme = 19;
	}
	else if (dest == 8 && pu == 4)
	{
		kms = 14;
		timme = 22;
	}
	else if (dest == 8 && pu == 5)
	{
		kms = 26;
		timme = 28;
	}
	else if (dest == 8 && pu == 6)
	{
		kms = 16;
		timme = 23;
	}
	else if (dest == 8 && pu == 7)
	{
		kms = 15;
		timme = 24;
	}

	else if (dest == 8 && pu == 9)
	{
		kms = 16;
		timme = 25;
	}











	else if (dest == 9 && pu == 1)
	{
		kms = 19;
		timme = 34;
	}

	else if (dest == 9 && pu == 2)
	{
		kms = 17;
		timme = 28;
	}
	else if (dest == 9 && pu == 3)
	{
		kms = 3.6;
		timme = 10;
	}
	else if (dest == 9 && pu == 4)
	{
		kms = 1.8;
		timme = 5;
	}
	else if (dest == 9 && pu == 5)
	{
		kms = 17;
		timme = 32;
	}
	else if (dest == 9 && pu == 6)
	{
		kms = 4.4;
		timme = 11;
	}
	else if (dest == 9 && pu == 7)
	{
		kms = 12;
		timme = 23;
	}
	else if (dest == 9 && pu == 8)
	{
		kms = 15;
		timme = 24;
	}

	loadin(kms, timme, blo);




	//cout << setw(62) << setfill(' ') << "  " << endl;

}
