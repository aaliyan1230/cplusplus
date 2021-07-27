#include<iostream>

using namespace std;

    
int main() {
    cout<<int('a')<<endl;
    int bagnum, small, med;
    double lbbag = 5.5;
    double largecost = 1.8;
    double medcost = 1.0;
    double smallcost = 0.6;
    int largebox = 20, medbox = 10, smallbox = 5;
    cout << "Number of bags ordered: ";
    cin >> bagnum;
    double largetotal, medtotal, smalltotal, totalamount;
    totalamount = bagnum * lbbag;
    cout << "no of bags ordered " << bagnum << " -$" << totalamount << endl;
    cout << "bags used: " << endl;
    int large = bagnum / largebox;
    largetotal = large * largecost;
    cout << large << " large -$ " << largetotal << endl;
    int temp = bagnum % largebox;
    if (temp > medbox) {
         med = temp / medbox;
    }
    medtotal = (med * medcost);
    cout << med << " medium -$ " << medtotal << endl;
    int temp1 = temp % medbox;
    if (temp1 <= smallbox) {
        small = 1;
    }
    smalltotal = small * smallcost;
    cout << small << " small -$ " << smalltotal << endl;
    cout << "total " << totalamount + largetotal + medtotal + smalltotal;
    
    return 0; 
}