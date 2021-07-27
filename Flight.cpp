#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

class Flight
{
    private:
        int flight_number=0;
        string source = "";
        string destination = "";
        int available_seats=0;
        string short_and_caps(string name){
            if (name.length()>3)
            {
                name=name.substr(0,3);
            }
            return name;
        }
    public:
        Flight(int flight_no, string from, string to, int seats_remaining){
            flight_number=flight_no;
            source=short_and_caps(from);
            destination=short_and_caps(to);
            available_seats=seats_remaining;
        }
        Flight(int flight_no, int seats_remaining){
            flight_number=flight_no;
            available_seats=seats_remaining;
        }
        Flight(int flight_no){
            flight_number=flight_no;
        }
        //getters
        int get_flight_number(){
            return flight_number;
        }
        string get_source(){
            return source;
        }
        string get_destination(){
            return destination;
        }
        int get_available_seats(){
            return available_seats;
        }
        //setters
        void set_source(string from){
            source=short_and_caps(from);
        }
        void set_destination(string to){
            destination=short_and_caps(to);
        }
        void set_available_seats(int seats){
            available_seats=seats;
        }

        void reserve(int number_of_seats){
            if (available_seats>=number_of_seats)
            {
                available_seats-=number_of_seats;
                cout<<number_of_seats<<" have been reserved\n remaining seats are: "<<available_seats<<endl;

            }  
        }
        void cancel(int number_of_seats){
            available_seats+=number_of_seats;
            cout<<number_of_seats<<" have been cancelled\n remaining seats are: "<<available_seats<<endl;
        }
        void equals(Flight A, Flight B){
            if (A.get_flight_number()==B.get_flight_number())
            {
                cout<<"the two flights are equal"<<endl;
            }
            else{
                cout<<"the two flights are not equal"<<endl;
            }
            
        }

};

int main(){
    Flight flight_A(20, "KHI", "LAH", 350);
    Flight fight_B(42, "MUL", "HYD", 369);
}