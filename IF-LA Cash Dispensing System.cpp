#include<iostream>
#include<string>
using namespace std;
struct User
{
string name;
int pincode;
string password;
};

User user1 = {"Ifrah Zaidi" , 4534 , "ifrah4534"};
User user2 = {"Wardah Zia" , 4502 , "wardah4502"};
User user3 = {"Laiba Shehryar" , 4523 , "laiba4523"};
User user4 = {"Noor Fatima" , 4531 , "noor4531"};
User user5 = {"Amna Aslam" , 4538 , "amna4538"};
User user6 = {"Anooshay Yousaf" , 4492, "annoshay4492"};
User user7 = {"Meerab Ibrar" , 1212 , "meerab123"};
User user8 = {"Fatima Bibi" , 4500 , "fatima4500"};
User user9 = {"Amina Jameel" , 4501 , "amina4501"};
User user10 = {"Aqsa Ali" , 4504 , "aqsa4504"};
User user11 = {"Areeba Zulfiqar" , 4506 , "areeba4506"};
User user12 = {"Fatima Nazar" , 4513 , "fatima4513"};
User user13 = {"Ayesha Shehzadi" , 4511 , "ayesha4511"};
User user14 = {"Areeba Syed" , 4189 , "areeba4189"};
User user15 = {"Ayesha Shehzadi" , 4511 , "ayesha4511"};
User user16 = {"Mariya Shamshad" , 4525 , "mariya4525"};
User user17 = {"HamnaShaheen" , 4528 , "hamna4528"};
User user18 = {"Wajeeha Syed" , 4537 , "wajiha4537"};
User user19 = {"Neha Naeem" , 4530 , "neha4530"};
User user20 = {"Nayab Akhtar" , 4529 , "nayab4529"};
User user21 = {"Fizza Zaidi" , 1214 , "fizza1214"};
User user22 = {"Jaweria" , 4540 , "jaweria4540"};
User user23 = {"Areesha Khawar" , 4507 , "areesha4507"};
User user24 = {"Iffat e Hafsa" , 4459 , "iffat4459"};
User user25 = {"Hifza Noor" , 4517 , "hifza4517"};
User user26 = {"Kashaf Kiyani" , 4519 , "kashaf4519"};
User user27 = {"Kinza Ahmad" , 4521 , "kinza4521"};
User user28 = {"Laiba Maab" , 4522 , "laiba4522"};
User user29 = {"Maryam Jamil" , 4526 , "maryam4526"};
User user30 = {"Maham Anjum" , 4524 , "maham4524"};

main()
{
	const string YELLOW_TEXT = "\033[33m";
	const string CYAN_TEXT = "\033[36m";
    const string RESET_TEXT = "\033[0m";
    const string YELLOW = "\033[43m";
    const string GREY = "\033[48;5;236m";
    const string RED = "\033[41m";
    const string RESET = "\033[0m";
    const string PURPLE =  "\033[48;2;128;0;128m";
    const string GREEN = "\033[42m";
    
	int option;
	cout<<endl<<YELLOW<<"\t\t\t\t\t\tW E L C O M E  T O "<<RESET<<endl<<endl;
	
	cout<<YELLOW_TEXT<<"\t\t\t\t   *******   *******         *         *******  "<<RESET_TEXT<<endl;
	cout<<YELLOW_TEXT<<"\t\t\t\t      *      *               *         *     *  "<<RESET_TEXT<<endl;
	cout<<YELLOW_TEXT<<"\t\t\t\t      *      *       *****   *         *     *  "<<RESET_TEXT<<endl;
	cout<<YELLOW_TEXT<<"\t\t\t\t      *      ****            *         *******  "<<RESET_TEXT<<endl;
	cout<<YELLOW_TEXT<<"\t\t\t\t      *      *               *         *     *  "<<RESET_TEXT<<endl;
	cout<<YELLOW_TEXT<<"\t\t\t\t   ********  *               ********  *     *  "<<RESET_TEXT<<endl;
	
	cout<<endl<<YELLOW<<"\t\t\t\t  C A S H - D I S P E N S I N G - S Y S T E M "<<RESET<<endl;;
	cout<<endl;
	
	int i;
	for(i=1;i<=2;i++)
	{
	cout << "\n Enter your PIN code : ";
    int pincode;
    cin >> pincode;
    
    cout << "\n Enter your password : ";
    string password;
    cin >> password;
    
    if (pincode == user1.pincode && password == user1.password)
	{
		
        cout << "\n WELCOME, " << user1.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=50000,amount,c_pin;
		string c_password;
		
	menu:
    cout<<endl<<PURPLE<<"\t\t\t  KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
                cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry;
            }
            break;
                
            case 5:
            again:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again;
            }
            break;
            
            case 6:
                goto end;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit;
	}
	while(option!=6);
	exit:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu;
	else
	end:
        cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;
		
    }
    
     else if (pincode == user2.pincode && password == user2.password)
	{
        cout << "\n Welcome, " << user2.name << "!" << endl;
         cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=1500,amount,c_pin;
		string c_password;
		
	menu2:
    cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds2:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds2;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry2:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt2:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                     cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
                cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt2;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry2;
            }
            break;
                
            case 5:
            again2:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump2:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump2;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again2;
            }
            break;
            
            case 6:
                goto end2;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit2;
	}
	while(option!=6);
	exit2:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu2;
	else
	end2:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out; 
    }
    
     else if (pincode == user3.pincode && password == user3.password)
	{
        cout << "\n Welcome, " << user3.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=50000,amount,c_pin;
		string c_password;
		
	menu3:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds3:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds3;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry3:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt3:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                     cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt3;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry3;
            }
            break;
                
            case 5:
            again3:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump3:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump3;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again3;
            }
            break;
            
            case 6:
                goto end3;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit3;
	}
	while(option!=6);
	exit3:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu3;
	else
	end3:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user4.pincode && password == user4.password)
	{
        cout << "\n Welcome, " << user4.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=2000,amount,c_pin;
		string c_password;
		
	menu4:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds4:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds4;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry4:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt4:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt4;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry4;
            }
            break;
                
            case 5:
            again4:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump4:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
            cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump4;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again4;
            }
            break;
            
            case 6:
                goto end4;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit4;
	}
	while(option!=6);
	exit4:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu4;
	else
	end4:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user5.pincode && password == user5.password)
	{
        cout << "\n Welcome, " << user5.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=6700,amount,c_pin;
		string c_password;
		
	menu5:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds5:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds5;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry5:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt5:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                     cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt5;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry5;
            }
            break;
                
            case 5:
            again5:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump5:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
               cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump5;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again5;
            }
            break;
            
            case 6:
                goto end5;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit5;
	}
	while(option!=6);
	exit5:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu5;
	else
	end5:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user6.pincode && password == user6.password)
	{
        cout << "\n Welcome, " << user6.name << "!" << endl;
         cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=540,amount,c_pin;
		string c_password;
		
	menu6:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds6:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds6;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry6:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt6:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt6;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry6;
            }
            break;
                
            case 5:
            again6:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump6:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump6;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again6;
            }
            break;
            
            case 6:
                goto end6;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit6;
	}
	while(option!=6);
	exit6:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu6;
	else
	end6:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;   
    }
    
     else if (pincode == user7.pincode && password == user7.password)
	{
        cout << "\n Welcome, " << user7.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=7600,amount,c_pin;
		string c_password;
		
	menu7:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds7:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds7;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry7:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt7:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                     cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt7;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry7;
            }
            break;
                
            case 5:
            again7:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump7:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                  cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump7;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again7;
            }
            break;
            
            case 6:
                goto end7;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit7;
	}
	while(option!=6);
	exit7:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu7;
	else
	end7:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user8.pincode && password == user8.password)
	{
        cout << "\n Welcome, " << user8.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=81000,amount,c_pin;
		string c_password;
		
	menu8:
 cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds8:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds8;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry8:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt8:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt8;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry8;
            }
            break;
                
            case 5:
            again8:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump8:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump8;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again8;
            }
            break;
            
            case 6:
                goto end8;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit8;
	}
	while(option!=6);
	exit8:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu8;
	else
	end8:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user9.pincode && password == user9.password)
	{
        cout << "\n Welcome, " << user9.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=45000,amount,c_pin;
		string c_password;
		
	menu9:
    cout<<"\n\t\t   KINDLY CHOOSE AN OPTION "<<endl;
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds9:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds9;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry9:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt9:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt9;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry9;
            }
            break;
                
            case 5:
            again9:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump9:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                 cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump9;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again9;
            }
            break;
            
            case 6:
                goto end9;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit9;
	}
	while(option!=6);
	exit9:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu9;
	else
	end9:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user10.pincode && password == user10.password)
	{
        cout << "\n Welcome, " << user10.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu10:
  cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds10:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds10;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry10:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt10:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt10;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry10;
            }
            break;
                
            case 5:
            again10:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump10:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                 cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump10;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again10;
            }
            break;
            
            case 6:
                goto end10;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit10;
	}
	while(option!=6);
	exit10:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu10;
	else
	end10:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user11.pincode && password == user11.password)
	{
        cout << "\n Welcome, " << user11.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=4500,amount,c_pin;
		string c_password;
		
	menu11:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds11:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds11;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry11:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt11:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt11;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry11;
            }
            break;
                
            case 5:
            again11:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump11:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                 cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump11;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again11;
            }
            break;
            
            case 6:
                goto end11;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit11;
	}
	while(option!=6);
	exit11:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu11;
	else
	end11:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user12.pincode && password == user12.password)
	{
        cout << "\n Welcome, " << user12.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=43900,amount,c_pin;
		string c_password;
		
	menu12:
 cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds12:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds12;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry12:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt12:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt12;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry12;
            }
            break;
                
            case 5:
            again12:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump12:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump12;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again12;
            }
            break;
            
            case 6:
                goto end12;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit12;
	}
	while(option!=6);
	exit12:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu12;
	else
	end12:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user13.pincode && password == user13.password)
	{
        cout << "\n Welcome, " << user13.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=8550,amount,c_pin;
		string c_password;
		
	menu13:
  cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds13:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds13;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry13:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt13:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt13;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry13;
            }
            break;
                
            case 5:
            again13:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump13:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                  cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump13;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again13;
            }
            break;
            
            case 6:
                goto end13;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit13;
	}
	while(option!=6);
	exit13:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu13;
	else
	end13:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user14.pincode && password == user14.password)
	{
        cout << "\n Welcome, " << user14.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=45900,amount,c_pin;
		string c_password;
		
	menu14:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds14:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds14;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry14:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt14:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt14;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry14;
            }
            break;
                
            case 5:
            again14:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump14:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump14;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again14;
            }
            break;
            
            case 6:
                goto end14;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit14;
	}
	while(option!=6);
	exit14:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu14;
	else
	end14:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user15.pincode && password == user15.password)
	{
        cout << "\n Welcome, " << user15.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=7600,amount,c_pin;
		string c_password;
		
	menu15:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds15:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds15;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry15:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt15:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt15;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry15;
            }
            break;
                
            case 5:
            again15:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump15:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump15;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again15;
            }
            break;
            
            case 6:
                goto end15;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit15;
	}
	while(option!=6);
	exit15:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu15;
	else
	end15:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user16.pincode && password == user16.password)
	{
        cout << "\n Welcome, " << user16.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu16:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds16:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds16;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry16:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt16:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
 cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt16;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry16;
            }
            break;
                
            case 5:
            again16:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump16:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                  cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump16;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again16;
            }
            break;
            
            case 6:
                goto end16;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit16;
	}
	while(option!=6);
	exit16:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu16;
	else
	end16:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user17.pincode && password == user17.password)
	{
        cout << "\n Welcome, " << user17.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu17:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds17:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds17;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry17:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt17:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt17;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry17;
            }
            break;
                
            case 5:
            again17:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump17:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump17;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again17;
            }
            break;
            
            case 6:
                goto end17;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit17;
	}
	while(option!=6);
	exit17:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu17;
	else
	end17:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user18.pincode && password == user18.password)
	{
        cout << "\n Welcome, " << user18.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu18:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds18:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds18;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry18:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt18:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt18;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry18;
            }
            break;
                
            case 5:
            again18:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump18:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump18;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again18;
            }
            break;
            
            case 6:
                goto end18;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit18;
	}
	while(option!=6);
	exit18:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu18;
	else
	end18:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user19.pincode && password == user19.password)
	{
        cout << "\n Welcome, " << user19.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu19:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds19:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds19;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry19:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt19:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt19;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry19;
            }
            break;
                
            case 5:
            again19:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump19:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                  cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump19;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again19;
            }
            break;
            
            case 6:
                goto end19;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit19;
	}
	while(option!=6);
	exit19:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu19;
	else
	end19:
cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user20.pincode && password == user20.password)
	{
        cout << "\n Welcome, " << user20.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu20:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds20:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds20;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry20:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt20:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt20;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry20;
            }
            break;
                
            case 5:
            again20:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump20:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                     cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump20;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again20;
            }
            break;
            
            case 6:
                goto end20;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit20;
	}
	while(option!=6);
	exit20:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu20;
	else
	end20:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user21.pincode && password == user21.password)
	{
        cout << "\n Welcome, " << user21.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu21:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds21:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds21;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry21:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt21:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt21;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry21;
            }
            break;
                
            case 5:
            again21:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump21:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump21;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again21;
            }
            break;
            
            case 6:
                goto end21;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit21;
	}
	while(option!=6);
	exit21:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu21;
	else
	end21:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;    
    }
    
     else if (pincode == user22.pincode && password == user22.password)
	{
        cout << "\n Welcome, " << user22.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu22:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds22:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds22;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry22:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt22:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt22;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry22;
            }
            break;
                
            case 5:
            again22:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump22:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                  cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump22;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again22;
            }
            break;
            
            case 6:
                goto end22;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit22;
	}
	while(option!=6);
	exit22:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu22;
	else
	end22:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user23.pincode && password == user23.password)
	{
        cout << "\n Welcome, " << user23.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=5690,amount,c_pin;
		string c_password;
		
	menu23:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds23:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds23;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry23:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt23:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt23;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry23;
            }
            break;
                
            case 5:
            again23:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump23:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump23;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again23;
            }
            break;
            
            case 6:
                goto end23;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit23;
	}
	while(option!=6);
	exit23:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu23;
	else
	end23:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user24.pincode && password == user24.password)
	{
        cout << "\n Welcome, " << user24.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=60000,amount,c_pin;
		string c_password;
		
	menu24:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds24:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds24;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry24:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt24:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
               cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt24;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry24;
            }
            break;
                
            case 5:
            again24:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump24:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump24;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again24;
            }
            break;
            
            case 6:
                goto end24;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit24;
	}
	while(option!=6);
	exit24:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu24;
	else
	end24:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user25.pincode && password == user25.password)
	{
        cout << "\n Welcome, " << user25.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3510,amount,c_pin;
		string c_password;
		
	menu25:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds25:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds25;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry25:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt25:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt25;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry25;
            }
            break;
                
            case 5:
            again25:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump25:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
           cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                   cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump25;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again25;
            }
            break;
            
            case 6:
                goto end25;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit25;
	}
	while(option!=6);
	exit25:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu25;
	else
	end25:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user26.pincode && password == user26.password)
	{
        cout << "\n Welcome, " << user26.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=64000,amount,c_pin;
		string c_password;
		
	menu26:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds26:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds26;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry26:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt26:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt26;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry26;
            }
            break;
                
            case 5:
            again26:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump26:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump26;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again26;
            }
            break;
            
            case 6:
                goto end26;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit26;
	}
	while(option!=6);
	exit26:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu26;
	else
	end26:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user27.pincode && password == user27.password)
	{
        cout << "\n Welcome, " << user27.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=25700,amount,c_pin;
		string c_password;
		
	menu27:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds27:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds27;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry27:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt27:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                      cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt27;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry27;
            }
            break;
                
            case 5:
            again27:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump27:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump27;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again27;
            }
            break;
            
            case 6:
                goto end27;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit27;
	}
	while(option!=6);
	exit27:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu27;
	else
	end27:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user28.pincode && password == user28.password)
	{
        cout << "\n Welcome, " << user28.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=8900,amount,c_pin;
		string c_password;
		
	menu28:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds28:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds28;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry28:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt28:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                   cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt28;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry28;
            }
            break;
                
            case 5:
            again28:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump28:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                 cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump28;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again28;
            }
            break;
            
            case 6:
                goto end28;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit28;
	}
	while(option!=6);
	exit28:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu28;
	else
	end28:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
     else if (pincode == user29.pincode && password == user29.password)
	{
        cout << "\n Welcome, " << user29.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=90000,amount,c_pin;
		string c_password;
		
	menu29:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds29:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds29;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry29:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt29:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt29;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry29;
            }
            break;
                
            case 5:
            again29:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump29:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump29;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again29;
            }
            break;
            
            case 6:
                goto end29;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit29;
	}
	while(option!=6);
	exit29:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu29;
	else
	end29:
	cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
    
    else if (pincode == user30.pincode && password == user30.password)
	{
        cout << "\n Welcome, " << user30.name << "!" << endl;
        cout<<" \n You have been successfully loged in to your account ! "<<endl;
        int balance=3500,amount,c_pin;
		string c_password;
		
	menu30:
cout<<endl<<PURPLE<<"\t\t   KINDLY CHOOSE AN OPTION "<<RESET<<endl;
    cout<<"\t__________________________________________"<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t   1. C H E C K       2. W I T H D R A W  "<<RESET<<endl;
	cout<<PURPLE<<"\t     B A L A N C E        M O N E Y       "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  3. D E P O S I T     4. C H A N G E     "<<RESET<<endl;
	cout<<PURPLE<<"\t      M O N E Y          P A S S W O R D  "<<RESET<<endl;
	cout<<PURPLE<<"\t                                          "<<RESET<<endl;
	cout<<PURPLE<<"\t  5. C H A N G E        6. E X I T        "<<RESET<<endl;
	cout<<PURPLE<<"\t        P I N                             "<<RESET<<endl;
	cout<<PURPLE<<"\t _________________________________________"<<RESET<<endl;
	
	do
	{
	cin>>option;
	switch (option)
		{
            case 1:
                cout << " Your balance is: " << balance << " pkr\n\n";
                break;
                
            case 2:
            	funds30:
                cout << "\n Enter the amount to withdraw : ";
                cin >> amount;
                if (amount > balance) 
				{
                    cout <<"\n Insufficiant funds.Please Try Again! "<<endl;
                    cout<<" \n [YOU CAN ONLY WITHDRAW LESS THAN "<<balance<<" pkr]"<<endl;
                    goto funds30;
                } 
				else
				{
                    balance = balance - amount;
                    cout << " Amount withdrawn: " << amount << " pkr\n";
                    cout << " Remaining balance: " << balance << " pkr\n\n";
                }
                break;
                
            case 3:
                cout << " Enter the amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << " Amount deposited: " << amount << " pkr\n";
                cout << " New balance: " << balance << " pkr\n\n";
                break;
                
            case 4:
            retry30:
            cout << "\nPlease enter your current password : ";
            cin >> c_password;

            if (c_password==password)
			{
				string new_password,confirm_password;
                cout << "\nPlease enter your new password : ";
                cin >> new_password;
                attempt30:
                cout << "\nPlease confirm your new password : ";
                cin >> confirm_password;

                if (new_password == confirm_password) 
				{
                    password = new_password;
                  cout<<"\t_________________"<<endl;
    	            cout<<GREY<<"\t                 "<<RESET<<endl;
	                cout<<GREY<<"\t CONGRATULATIONS "<<RESET<<endl;
    	            cout<<GREY<<"\t_________________"<<RESET<<endl;
					cout<<"\n Your PASSWORD has been successfully updated."<<endl;
                } 
				else 
				{
cout<<"\t\t______________________________________"<<RESET<<endl;
                cout<<RED<<"\t\t                                      "<<RESET<<endl;
	            cout<<RED<<"\t\t THE ENTERED 'PASSWORDS' DO NOT MATCH "<<RESET<<endl;
    	        cout<<RED<<"\t\t______________________________________"<<RESET<<endl;
    	        goto attempt30;
                }
            } 
			else 
			{
                cout << "\n The entered PASSWORD is incorrect.(Try Again)\n";
                goto retry30;
            }
            break;
                
            case 5:
            again30:
            cout << "\n Please enter your current PIN : ";
            cin >> c_pin;
            if (c_pin == pincode)
			{
                int new_pin, confirm_pin;
                cout << "\n Please enter your new PIN : ";
                cin >> new_pin;
                jump30:
                cout << "\n Please confirm your new PIN : ";
                cin >> confirm_pin;
                if (new_pin == confirm_pin) 
				{
                    pincode = new_pin;
                    cout<<"\t ___________________"<<endl;
    	            cout<<"\t |                 |"<<endl;
	                cout<<"\t | CONGRATULATIONS |"<<endl;
    	            cout<<"\t |_________________|"<<endl;
					cout<<"\n Your PIN has been successfully updated."<<endl;
                }
				else
				{
                    cout<<"\t\t_________________________________"<<RESET<<endl;
                	cout<<RED<<"\t\t                                 "<<RESET<<endl;
	                cout<<RED<<"\t\t THE ENTERED 'PINS' DO NOT MATCH "<<RESET<<endl;
    	            cout<<RED<<"\t\t_________________________________"<<RESET<<endl;
                    goto jump30;
                }
            }
			else
			{
                cout << " The entered PIN is incorrect.(Try Again)\n";
                goto again30;
            }
            break;
            
            case 6:
                goto end30;
                break;
            default:
                cout << " Ivalid option.\n\n";
            break;
        }
        goto exit30;
	}
	while(option!=6);
	exit30:
	char choice;
    cout << " Enter 'm' if you want to go back to the main menu." << endl;
    cin >> choice;

    if (choice == 'm')
    goto menu30;
	else
	end30:
		cout<<"\t__________________"<<endl;
    	cout<<GREEN<<"\t                  "<<RESET<<endl;
	    cout<<GREEN<<"\t T H A N K  Y O U "<<RESET<<endl;
    	cout<<GREEN<<"\t__________________"<<RESET<<endl;
    	goto out;  
    }
	
	else
	{
        cout << "\n Invalid credentials." << endl;
    }
}
        cout<<"\t\t___________________________"<<endl;
    	cout<<RED<<"\t\t                           "<<RESET<<endl;
	    cout<<RED<<"\t\t A C C E S S  D E N I E D  "<<RESET<<endl;
    	cout<<RED<<"\t\t___________________________"<<RESET<<endl;
    	out:
    	cout<<endl;
    	
    int rate;
    cout<<endl<<CYAN_TEXT<<" Please take a moment to provide your feedback and rate our system with your experience."<<RESET<<endl;
	cout<<"\t\t\t_____________________________________"<<RESET<<endl;
	cout<<GREY<<"\t\t\t                                     "<<RESET<<endl;
	cout<<GREY<<"\t\t\t     1.    EXCELLENT          :0     "<<RESET<<endl;
	cout<<GREY<<"\t\t\t     2.    GOOD               :)     "<<RESET<<endl;
	cout<<GREY<<"\t\t\t     3.    SATISFACTORY       :|     "<<RESET<<endl;
	cout<<GREY<<"\t\t\t     4.    POOR               :(     "<<RESET<<endl;
	cout<<GREY<<"\t\t\t     5.    NEEDS IMPROVEMENT  :!@#   "<<RESET<<endl;
	cout<<GREY<<"\t\t\t_____________________________________"<<RESET<<endl<<endl<<endl;
	cin>>rate;
	
	cout<<endl<<CYAN_TEXT<<" We value your opinion and will try to improve our services based on your feedback.\n Thank you for taking the time to share your thoughts!"<<RESET<<endl;
	
    
	}	
