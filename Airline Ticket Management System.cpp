//
// Created by Lavdrim Mustafi on 27.3.23.
//
//  A Plane Ticket Management System created for the Staff of an Airplane Agency that allows the Staff/User
//  to Book/Register a Flight by entering a Name, Passport Number, Destination, Time and Seat on the plane.
//  It allows them to see a List of all Registered Flights and Passengers, to look at a Chart of all the Seats
//  in the Airplane, to Make Changes to a Passenger's Flight or Information, and to Cancel a Passenger's Flight
//  This C++ Program is well-equipped with a variety of options and choices, designed with a friendly interface,
//  and guides the User to type all the necessary options without making any mistakes.
//  Overall, the "Airline Ticket Management System" provides a simple but effective way for a user to manage a database
//  of Flight Records in C++

#include<iostream>
#include<string>
#include<iomanip>
#include<stdlib.h>

using namespace std;

//This structure has 3 elements and a function that allows the user to pick a Seat in the Airplane
struct Seat{
    char SeatType;
    int row;
    char column;
    //This function Assigns a Seat to a Passenger, based on their SeatType
    void AssignSeat(){
        //Visual Information of the Plane
        cout<<"\n\t\t\t\t\t\t   ╔═════════════════════════════════════════════╗"
            <<"\n\t\t\t\t\t\t   ║   The airplane has 13 rows and 6 columns!   ║"
            <<"\n\t\t\t\t\t\t   ╚═════════════════════════════════════════════╝\n"
            <<"\n\t\t\t\t\t\t   ║ Please choose a Seat Type: "
            <<"\n\t\t\t\t\t\t   ║ 'F' for First Class        "
            <<"\n\t\t\t\t\t\t   ║ 'B' for Business Class     "
            <<"\n\t\t\t\t\t\t   ║ 'E' for Economy Class      "
            <<"\n\n\t\t\t\t\t\t   ║ Type: ";
        cin>>SeatType;
        //makes the character inputted uppercase so that they're easily compared in the future
        SeatType = toupper(SeatType);

        //The loop below makes sure that the User inputs the right characters
        while(SeatType != 'F' && SeatType != 'B' && SeatType != 'E'){
            cout<<"\n\t\t\t\t\t\t   ╔════════════════════════╗"
                <<"\n\t\t\t\t\t\t   ║   Invalid Seat Type!   ║"
                <<"\n\t\t\t\t\t\t   ╚════════════════════════╝\n"
                <<"\n\t\t\t\t\t\t   ║ Please type the appropriate character for the Seat Type! "
                <<"\n\t\t\t\t\t\t   ║ 'F' for First Class"
                <<"\n\t\t\t\t\t\t   ║ 'B' for Business Class"
                <<"\n\t\t\t\t\t\t   ║ 'E' for Economy Class"
                <<"\n\n\t\t\t\t\t\t   ║ Type: ";
            cin>>SeatType;
            SeatType = toupper(SeatType);
        }

        //A switch that allows the User to store the Appropriate Row based on their Ticket/Seat Type
        switch(SeatType){
            case 'F':{
                cout<<"\n\t\t\t\t\t\t   ╔════════════════════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║   First class includes Rows 1-2!   ║"
                    <<"\n\t\t\t\t\t\t   ╚════════════════════════════════════╝\n"
                    <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                    <<"\n\t\t\t\t\t\t   ║ Type: ";
                cin>>row;

                //The loop below makes sure that the User Inputs the right row for their Seat Type
                while(row != 1 && row != 2){
                    cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║  Please choose the appropriate rows for First class!  ║"
                        <<"\n\t\t\t\t\t\t   ║                      (Rows 1-2)                       ║"
                        <<"\n\t\t\t\t\t\t   ╚═══════════════════════════════════════════════════════╝\n"
                        <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                        <<"\n\t\t\t\t\t\t   ║ Type: ";
                    cin>>row;
                }
                break;
            }
            case 'B':{
                cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║   Business class includes Rows 3-5!   ║"
                    <<"\n\t\t\t\t\t\t   ╚═══════════════════════════════════════╝\n"
                    <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                    <<"\n\t\t\t\t\t\t   ║ Type: ";
                cin>>row;

                //The loop below makes sure that the User Inputs the right row for their Seat Type
                while(row != 3 && row != 4 && row != 5){
                    cout<<"\n\t\t\t\t\t\t   ╔══════════════════════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║  Please choose the appropriate rows for Business class!  ║"
                        <<"\n\t\t\t\t\t\t   ║                       (Rows 3-5)                         ║"
                        <<"\n\t\t\t\t\t\t   ╚══════════════════════════════════════════════════════════╝\n"
                        <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                        <<"\n\t\t\t\t\t\t   ║ Type: ";
                    cin>>row;
                }
                break;
            }
            case 'E':{
                cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║   Economy class includes Rows 6-13!   ║"
                    <<"\n\t\t\t\t\t\t   ╚═══════════════════════════════════════╝\n"
                    <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                    <<"\n\t\t\t\t\t\t   ║ Type: ";
                cin>>row;

                //The loop below makes sure that the User Inputs the right row for their Seat Type
                while(row < 6 || row > 13) {
                    cout<<"\n\t\t\t\t\t\t   ╔═════════════════════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║  Please choose the appropriate rows for Economy class!  ║"
                        <<"\n\t\t\t\t\t\t   ║                       (Rows 6-13)                       ║"
                        <<"\n\t\t\t\t\t\t   ╚═════════════════════════════════════════════════════════╝\n"
                        <<"\n\t\t\t\t\t\t   ║ Please choose the row you want to be seated: "
                        <<"\n\t\t\t\t\t\t   ║ Type: ";
                    cin >> row;
                }
                break;
            }
        }
        //Allows the User to input the Column or Seat Character from A to F, like in real Airplanes
        cout<<"\n\t\t\t\t\t\t   ║ Please type the column you want to be seated!"
            <<"\n\t\t\t\t\t\t   ║                    (A - F)"
            <<"\n"
            <<"\n\t\t\t\t\t\t   ║ Type: ";
        cin>>column;
        //Makes the character uppercase because it is crucial in using its values in the matrices of the
        //SeatChart further into the code
        column = toupper(column);

        //Makes sure that the values given from the User are between A - F
        while(static_cast<int>(column) < 65 || static_cast<int>(column) > 70){
            cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                <<"\n\t\t\t\t\t\t   ║    Incorrect Value!   ║"
                <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                <<"\n\n\t\t\t\t\t\t   ║ Columns are between A - F!"
                <<"\n\t\t\t\t\t\t   ║ Type: ";
            cin>>column;
            column = toupper(column);
        }
    }

};
//A Time Structure with elements of the Hour, Minute and Seconds
//with 2 functions that allow the User to read and print Time
struct Time{
    int h;
    int m;
    int s;
    //Function allows user to input a certain Time
    void readtime(){
        cout<<"\n\t\t\t\t\t\t   ║ Hour: "; cin>>h;
        cout<<"\t\t\t\t\t\t   ║ Minutes: "; cin>>m;
        cout<<"\t\t\t\t\t\t   ║ Seconds: "; cin>>s;
        cout<<endl;
    }
    //Function allows User to print the time in a formatted manner
    void printtime(){
        cout<<setw(2)<<setfill('0')<<h<<" : "<<setw(2)<<setfill('0')<<m<<" : "<<setw(2)<<setfill('0')<<s;
    }
};
//A Destination Structure that includes the city where we're flying from, the destination
//the price of the flight, and the Structure Time inside it
struct Destination{
    string fromCity;
    string toCity;
    int price;
    Time T1;
};
//The main Structure is "Passenger". It holds the most important information about a Passenger
// like their First and Last name, Passport Number, and the two other structures Destination and Seat
struct Passenger{
    string firstname;
    string lastname;
    string passport_number;
    Destination D1;
    Seat S1;
};
//Function allows the User to Book/Register a Flight
void Booking(Passenger [], int);

//Function prints out the list of all registered passengers
void PassengerList(Passenger [], int);

//Function prints out a Seating Chart of the Airplane
void SeatingChart(Passenger [], int);

//Function allows the User to Cancel any Registered Flights
void CancelFlight(Passenger [], int, int);

int main(){
    //Declaration of variables/arrays
    Destination D1;
    Passenger P[50];

    //represents the number of Initialized Passengers
    int index = 7;
    //Initialized Passenegers
    P[0] = {"Lavdrim", "Mustafi", "K102030", { "Skopje", "Frankfurt", 200, {8, 30, 0}}, 'F', 1, 'A'};
    P[1] = {"Lavdrim", "Mustafi", "K102030", {"Frankfurt", "Chicago", 600, {14, 0, 0}}, 'E', 10, 'B'};
    P[2] = {"Alban", "Zulfija", "K102233", { "Skopje", "Madrid", 350, {10, 30, 0}}, 'B', 3, 'F'};
    P[3] = {"Betim", " Idrizi", "K152535", {"Skopje", "Basel", 150, {19, 30, 0}}, 'F', 2, 'D'};
    P[4] = {"Hani", "Rushidi", "K122232", {"Skopje", "Vienna", 79, {17, 30, 0}}, 'F', 2, 'A'};
    P[5] = {"Hamza", " Ferati", "K101022", {"Skopje", "Cairo", 300, {5, 30, 0}}, 'B', 5, 'F'};
    P[6] = {"Halim", "  Alimi", "K172737", {"Skopje", "Istanbul", 69, {11, 30, 0}}, 'E', 8, 'C'};

    //Variable allows us to pick an Option from the Menu
    int option;
    //Allows us to Access the Menu everytime a function is finished
    menu:
    cout<< "\n\t\t\t\t\t\t╔═════════════════════════════════════════════════════════════════════════╗"
        << "\n\t\t\t\t\t\t║                  WELCOME to Lufthansa Airline TICKET                    ║"
        << "\n\t\t\t\t\t\t║                          MANAGEMENT SYSTEM                              ║"
        << "\n\t\t\t\t\t\t║                                                                         ║"
        << "\n\t\t\t\t\t\t║                                 MENU!                                   ║"
        << "\n\t\t\t\t\t\t║                                                                         ║"
        << "\n\t\t\t\t\t\t║           1. Register a Flight                                          ║"
        << "\n\t\t\t\t\t\t║           2. List of Reservations                                       ║"
        << "\n\t\t\t\t\t\t║           3. Seating Chart                                              ║"
        << "\n\t\t\t\t\t\t║           4. Make Changes                                               ║"
        << "\n\t\t\t\t\t\t║           5. Cancel Flight                                              ║"
        << "\n\t\t\t\t\t\t║           6. Exit                                                       ║"
        << "\n\t\t\t\t\t\t║                                                                         ║"
        << "\n\t\t\t\t\t\t║           Please choose one of the options above!                       ║"
        << "\n\t\t\t\t\t\t╚═════════════════════════════════════════════════════════════════════════╝"
        << "\n\t\t\t\t\t\t   ║ Type: ";
    cin>>option;

    switch (option) {
        case 1:{
            //Function of Booking/Registering a Passenger is called
            Booking(P, index);
            index++; //increase the number/index of Registered Passengers

            cout<<"\n\t\t\t\t\t\t   ║ Type Enter Twice to return to the Menu!";
            //Allows user to Access the menu after function is finished
            cin.get();cin.get();cin.get();
            system("CLS");
            break;
        }
        case 2:{
            //Function prints a list of Registered Passengers
            PassengerList(P, index);

            cout<<"\n\t"
                <<"\n\t\t\t\t\t\t   ║ Type Enter Twice to return to the Menu!"
                <<"\n\t ";

            cin.get();cin.get();cin.get();
            system("CLS");
            break;
        }
        case 3:{
            //Function prints a Chart of the Airplane Seats
            SeatingChart(P, index);

            cout<<"\n\n\t\t\t\t\t\t   ║ Type Enter Twice to return to the Menu!";

            cin.get();cin.get();cin.get();
            break;
        }
        case 4:{
            //Shows the User the list of Registered Passengers and prompts him to pick one
            //whose information can be changed
            PassengerList(P, index);
            int PassengerIndex; //This is needed to store the position of the Passenger who we want to modify
            char sub_option; //This is needed for the YES or NO question in the Sub-Menu
            int num; //This is needed for the Sub-Menu below

            //Allows us to come back to the Sub-Menu
            submenu:
            cout<<"\n\n\t\t\t\t\t\t   ║ Which passenger's information would you like to change?"
                <<"\n\t\t\t\t\t\t   ║ Enter passenger number: ";
            cin>>PassengerIndex;

            //Makes sure the User inputs the right Passenger Number
            while(PassengerIndex < 1 || PassengerIndex > index){
                cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║    Invalid number!    ║"
                    <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                    <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                    <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                cin>>PassengerIndex;
            }
            //SUB MENU
            cout<<"\n\t\t\t\t\t\t   ╔══════════════════════════════════════════════════════╗"
                <<"\n\t\t\t\t\t\t   ║   What would you like to change about their Info?    ║"
                <<"\n\t\t\t\t\t\t   ║   (Enter a number)                                   ║"
                <<"\n\t\t\t\t\t\t   ║   1. Full Name                                       ║"
                <<"\n\t\t\t\t\t\t   ║   2. Destination                                     ║"
                <<"\n\t\t\t\t\t\t   ║   3. Departure Time                                  ║"
                <<"\n\t\t\t\t\t\t   ║   4. Seat                                            ║"
                <<"\n\t\t\t\t\t\t   ╚══════════════════════════════════════════════════════╝";
            cout<<"\n\n\t\t\t\t\t\t   ║ Type: ";
            cin>>num;
            //Makes Sure the User inputs the right Option
            while(num < 1 || num > 4){
                cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║    Invalid number!    ║"
                    <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                    <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                    <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                cin>>num;
            }
            //All the Sub-Menu Options
            switch (num) {
                case 1:{
                    //Changes Passenger's Name
                    cout<<"\n\t\t\t\t\t\t   ║ Enter a new First Name: ";
                    cin>>P[PassengerIndex-1].firstname;
                    cout<<"\n\t\t\t\t\t\t   ║ Enter a new Last Name: ";
                    cin>>P[PassengerIndex-1].lastname;
                    //Let's us know that the change was successful and prompts the User if they want
                    //to continue making changes
                    cout<<"\n\t\t\t\t\t\t   ╔══════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║   Your Name was changed successfully!    ║"
                        <<"\n\t\t\t\t\t\t   ╚══════════════════════════════════════════╝\n"
                        <<"\n\n\t\t\t\t\t\t   ║ Would you like to continue making changes?"
                        <<"\n\t\t\t\t\t\t   ║ Type 'Y' for YES or 'N' for NO!";
                    cin>>sub_option;
                    sub_option = toupper(sub_option);

                    //Makes sure the User inputs the right Value/Character
                    while(sub_option != 'Y' && sub_option != 'N'){
                        cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                            <<"\n\t\t\t\t\t\t   ║    Invalid Option!    ║"
                            <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                            <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                            <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                        cin>>sub_option;
                        sub_option = toupper(sub_option);
                    }
                    switch (sub_option) {
                        case 'Y':{
                            //If YES, you continue to make changes from the Sub-Menu
                            goto submenu;
                        }
                        case 'N':{
                            //If NO, you go to the Main Menu
                            goto menu;
                        }
                    }
                    cin.get();cin.get();cin.get();
                    system("CLS"); //Clears the console
                    break;
                }
                case 2:{
                    //Allows the User to change a Passenger's Destination
                    cout<<"\n\t\t\t\t\t\t   ║ Enter a new Destination:"
                        <<"\n\t\t\t\t\t\t   ║ From: ";
                    cin>>P[PassengerIndex-1].D1.fromCity;
                    cout<<"\n\t\t\t\t\t\t   ║ To:";
                    cin>>P[PassengerIndex-1].D1.toCity;
                    //Let's us know that the change was successful and prompts the User if they want
                    //to continue making changes
                    cout<<"\n\t\t\t\t\t\t   ╔════════════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║   Your Destination was changed successfully!   ║"
                        <<"\n\t\t\t\t\t\t   ╚════════════════════════════════════════════════╝\n"
                        <<"\n\n\t\t\t\t\t\t   ║ Would you like to continue making changes?"
                        <<"\n\t\t\t\t\t\t   ║ Type 'Y' for YES or 'N' for NO!";
                    cin>>sub_option;
                    sub_option = toupper(sub_option);

                    //Makes sure the User inputs the right Value/Character
                    while(sub_option != 'Y' && sub_option != 'N'){
                        cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                            <<"\n\t\t\t\t\t\t   ║    Invalid Option!    ║"
                            <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                            <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                            <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                        cin>>sub_option;
                        sub_option = toupper(sub_option);
                    }
                    switch (sub_option) {
                        case 'Y':{
                            //If YES, you continue to make changes from the Sub-Menu
                            goto submenu;
                        }
                        case 'N':{
                            //If NO, you go to the Main Menu
                            goto menu;
                        }
                    }
                    cin.get();cin.get();cin.get();
                    system("CLS");
                    break;
                }
                case 3:{
                    //Allows Changes to the Departure Time and does all the other stuff similar to the cases above
                    cout<<"\n\t\t\t\t\t\t   ║ Enter a new Departure Time: ";
                    P[PassengerIndex-1].D1.T1.readtime();
                    cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║   Your Departure Time was changed successfully!   ║"
                        <<"\n\t\t\t\t\t\t   ╚═══════════════════════════════════════════════════╝\n"
                        <<"\n\n\t\t\t\t\t\t   ║ Would you like to continue making changes?"
                        <<"\n\t\t\t\t\t\t   ║ Type 'Y' for YES or 'N' for NO!";
                    cin>>sub_option;
                    sub_option = toupper(sub_option);
                    while(sub_option != 'Y' && sub_option != 'N'){
                        cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                            <<"\n\t\t\t\t\t\t   ║    Invalid Option!    ║"
                            <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                            <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                            <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                        cin>>sub_option;
                        sub_option = toupper(sub_option);
                    }
                    switch (sub_option) {
                        case 'Y':{
                            goto submenu;
                        }
                        case 'N':{
                            goto menu;
                        }
                    }
                    cin.get();cin.get();cin.get();
                    system("CLS");
                    break;
                }
                case 4:{
                    //Allows Changes to the Seat and does all the other stuff similar to the cases above
                    P[PassengerIndex-1].S1.AssignSeat();
                    cout<<"\n\t\t\t\t\t\t   ╔═════════════════════════════════════════╗"
                        <<"\n\t\t\t\t\t\t   ║   Your Seat was changed successfully!   ║"
                        <<"\n\t\t\t\t\t\t   ╚═════════════════════════════════════════╝\n"
                        <<"\n\n\t\t\t\t\t\t   ║ Would you like to continue making changes?"
                        <<"\n\t\t\t\t\t\t   ║ Type 'Y' for YES or 'N' for NO!";
                    cin>>sub_option;
                    sub_option = toupper(sub_option);
                    while(sub_option != 'Y' && sub_option != 'N'){
                        cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                            <<"\n\t\t\t\t\t\t   ║    Invalid Option!    ║"
                            <<"\n\t\t\t\t\t\t   ║   Please Try Again!   ║"
                            <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                            <<"\n\n\t\t\t\t\t\t   ║ Type: ";
                        cin>>sub_option;
                        sub_option = toupper(sub_option);
                    }
                    switch (sub_option) {
                        case 'Y':{
                            goto submenu;
                        }
                        case 'N':{
                            goto menu;
                        }
                    }
                    cin.get();cin.get();cin.get();
                    system("CLS");
                    break;
                }
            }
            cin.get();cin.get();cin.get();
            system("CLS");
            break;
        }
        case 5:{
            //Allows the user to Cancel a Passenger's Flight, therefore deleting them from the list
            int position; //This is needed to store the position/index of the Passenger who flight we want to Cancel
            PassengerList(P, index);
            cout<<"\n\t\t\t\t\t\t   ║ Which Passenger's Flight would you like to Cancel?"
                <<"\n\t\t\t\t\t\t   ║ Enter a Number: ";
            cin>>position;

            //Makes sure the Number entered is appropriate to the amount of Passengers Registered
            while(position < 1 || position > index){
                cout<<"\n\t\t\t\t\t\t   ╔═══════════════════════╗"
                    <<"\n\t\t\t\t\t\t   ║    Invalid Input!     ║"
                    <<"\n\t\t\t\t\t\t   ╚═══════════════════════╝"
                    <<"\n\n\t\t\t\t\t\t   ║ Please Enter an Existent Passenger's Number: ";
            }
            //Function removes a Passenger from the list
            CancelFlight(P, index, position);
            index--; //decrease the index by 1 to indicate that a Passenger has been deleted

            cin.get();cin.get();cin.get();
            system("CLS");
            break;
        }
        case 6:{
            //Serves as a "Thank You" page for when the User wants to Exit the Program
            system("CLS");
            cout<<"\n\t\t\t\t\t\t╔═════════════════════════════════════════════════════════════════════════╗"
                <<"\n\t\t\t\t\t\t║                               THANK YOU                                 ║"
                <<"\n\t\t\t\t\t\t║                         FOR CHOOSING LUFTHANSA                          ║"
                <<"\n\t\t\t\t\t\t║                                                                         ║"
                <<"\n\t\t\t\t\t\t║                 We look forward to seeing you On Board!                 ║"
                <<"\n\t\t\t\t\t\t╚═════════════════════════════════════════════════════════════════════════╝";
            return 0;
        }
        default:{
            //Indicates that the User has inputted an Invalid Option
            cout<<"\n\t\t\t\t\t\t   ╔════════════════════════════════════════╗"
                <<"\n\t\t\t\t\t\t   ║             Invalid Option!            ║"
                <<"\n\t\t\t\t\t\t   ║   Please Input an Appropriate Option!  ║"
                <<"\n\t\t\t\t\t\t   ╚════════════════════════════════════════╝"
                <<"\n\t                                           "
                <<"\n\t\t\t\t\t\t   ║ Type Enter Twice to return to the Menu!  ";

            cin.get();cin.get();cin.get();
            system("CLS");
            break;
        }
    }
    //Function takes us back to the Main Menu
    goto menu;

    cin.get();cin.get();
    return 0;
}
//Function allows the User to Book/Register a Flight
void Booking(Passenger x[], int index){
    Passenger new_passenger;

    cout<<"\n\t\t\t\t\t\t ╔═══════════════════════════════════════════════════════╗"
        <<"\n\t\t\t\t\t\t ║  Thank you for choosing to book your flight with us!  ║"
        <<"\n\t\t\t\t\t\t ╚═══════════════════════════════════════════════════════╝"
        <<"\n\t                                                                    "
        <<"\n\t\t\t\t\t\t   ║ To get started, please type out your                 "
        <<"\n\t\t\t\t\t\t   ║ First Name: ";
    cin>>new_passenger.firstname;

    cout<<"\t\t\t\t\t\t   ║ Last Name: ";
    cin>>new_passenger.lastname;

    cout<<"\n\t\t\t\t\t\t   ║ Next, please type out your Passport Number: ";
    cin>>new_passenger.passport_number;

    cout<<"\n\t\t\t\t\t\t   ║ Next, please enter your Destination: ";
    cout<<"\n\t\t\t\t\t\t   ║ from: "; cin>>new_passenger.D1.fromCity;
    cout<<"\t\t\t\t\t\t   ║ to: ";  cin>>new_passenger.D1.toCity;
    cout<<"\n\t\t\t\t\t\t   ║ For the next step, please type the Departure Time for this flight: ";
    new_passenger.D1.T1.readtime();
    cout<<"\n\t\t\t\t\t\t   ║ Next, input the price for this flight: "; cin>>new_passenger.D1.price;
    cout<<"\n\t\t\t\t\t\t   ║ For the next step, let's look at the seats!\n";

    new_passenger.S1.AssignSeat();
    SeatingChart(x, index);

    //Stores the new Info into a new space in the Passenger Array
    x[index] = new_passenger;
    cout << "\n\n\t\t\t\t\t\t   ║ Reservation successful!\n";
}

//Function prints out the list of all registered passengers
void PassengerList(Passenger x[], int index){
    cout << "\n\t\t\t\t╔═════════════════════════════════════════════════════════════════════════╗"
         << "\n\t\t\t\t║                           LIST OF RESERVATIONS                          ║"
         << "\n\t\t\t\t╚═════════════════════════════════════════════════════════════════════════╝"
         << "\n                                                                           "
         << "\n\t╔══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╗"
         << "\n\t║    ║ Full Name              ║ Passport Number ║ Destination              ║ Departure Time   ║ Price     ║ Seat   ║"
         << "\n\t╠════╬════════════════════════╬═════════════════╬══════════════════════════╬══════════════════╬═══════════╬════════╣"<<endl;

    //For Loop prints out the info of every Registered Passenger into a Designed Table
    for(int i = 0; i <= index - 1; i++){
        cout << "\t║ " << setw(3) <<setfill(' ')<<left<<i+1
             << "║ " <<setw(15) <<left<< x[i].firstname<<x[i].lastname<<" "
             << "║ " << setw(16) <<setfill(' ')<<left << x[i].passport_number
             << "║ " << setw(25) << left << x[i].D1.fromCity + " --> " + x[i].D1.toCity
             << "║ " << setw(25) <<setfill(' ')<< left; x[i].D1.T1.printtime();

        cout << "     ║ " << setw(10) <<setfill(' ')<< left << x[i].D1.price
             << "║ " << setw(5) <<setfill(' ') << left << x[i].S1.row<<x[i].S1.column << " ║"<<endl;
    }
    cout << "\t╚══════════════════════════════════════════════════════════════════════════════════════════════════════════════════╝";

}
//Function prints out a Seating Chart of the Airplane
void SeatingChart(Passenger P[], int index){
    int i, j;
    //Prints out the Labels of the Airplane Columns, from A to F.
    cout << "\t\t\t\t\t\t\t\t\t\t     " << setw(12) << "A" << setw(4) << "B" << setw(4) << "C"
         << setw(6) << "D" << setw(4) << "E" << setw(4) << "F" << endl;
    cout << "\t\t\t\t\t\t\t\t  +" << setw(57) << setfill('-') << "+" << endl;
    cout << setfill(' ');

    //Prints out the Seating Chart using this Matrices. Checks every element/seat if it's taken, for every registered Passenger
    //Outputs an X if Seat is Taken, and a ⎵ - SpaceBar Symbol if it's Available
    for (i = 0; i < 13; i++){
        cout <<"   "<< setw(2) << "\t\t\t\t\t\t\t\t\t\t\tRow " << setw(3) << i+1 << " |";
        for(j = 0; j < 6; j++){
            bool seat_taken = false;
            for(int n = 0; n < index; n++){
                if((i == P[n].S1.row - 1) && (j == static_cast<int>(P[n].S1.column) - 65)){
                    cout << setw(4) <<"X";
                    seat_taken = true;
                    break;
                }
            }
            if(!seat_taken)
                cout << setw(6) <<"⎵";

        }
        cout << " |" << endl;
    }
    //Shows the user the meaning of the symbols displayed above
    cout << "\t\t\t\t\t\t\t\t  +" << setw(57) << setfill('-') << "+" << endl;
    cout<<"\n\t\t\t\t\t\t\t\t\t\t   ╔══════════════════════════════════════╗"
        <<"\n\t\t\t\t\t\t\t\t\t\t   ║          X - Seat is Taken!          ║"
        <<"\n\t\t\t\t\t\t\t\t\t\t   ║        ⎵ - Seat is Available!        ║"
        <<"\n\t\t\t\t\t\t\t\t\t\t   ╚══════════════════════════════════════╝";
}
//Function allows the User to Cancel any Registered Flights
void CancelFlight(Passenger P[], int index, int position){
    for(int i = position-1; i < index - 1; i++){
        P[i] = P[i+1];
    }

    //Let's the User know that the Cancellation was successful
    cout<<"\n\t\t\t\t\t\t   ╔══════════════════════════════════════╗"
        <<"\n\t\t\t\t\t\t   ║       Cancellation Successful!       ║"
        <<"\n\t\t\t\t\t\t   ╚══════════════════════════════════════╝\n"
        <<"\n\t\t\t\t\t\t   ║ Type Enter Twice to return to the Menu!  ";
}