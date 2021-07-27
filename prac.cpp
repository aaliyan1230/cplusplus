#include<iostream>
#include<conio.h>
using namespace std;

class Chair
{

};
class Table
{

};
class Room
{ protected:

	Chair *chairs[30];
    Table *table[6];
	float height;
	float width;
public:
	Room(float h,float w)
	{
		for (int i = 0; i <= 30; i++)
		{
			chairs[i] = NULL;
		}
		height = h;
		width = w;
	}

	void Addchair(Chair* chair1, int chairno)
	{
		if (chairno >= 0 && chairno < 30)
		{
			chairs[chairno] = chair1;
		}
	}
	Chair* getchair(int chairno)
	{
		if (chairno >= 0 && chairno < 30)
		{
			return chairs[chairno];
		}
		else
		{
			return NULL;
		}
			
	}
    void Addtable(Table *tb1, int table_no){
        if(table_no>=0 && table_no<6)
        {table[table_no]=tb1;}

    }
    Table* get_table(int table_no){
        if(table_no>=0 && table_no<6){
        return table[table_no];
        }
    }
	float area()
	{
		return height*width;
	}
};

int main()
{
	Chair ch[30];
	Room r1(14.5, 12.7);
	cout << "Room Details are" << endl;
	for (int i = 0; i < 30; i++)
	{
		r1.Addchair(&ch[i], i);
		cout << "chair no" << i << "\tplaced at \t" << r1.getchair(i) << endl;

	}
	cout << " and area of a room  is " << r1.area()<<endl;
    Table tb;
    r1.Addtable(&tb,0);
    cout<<"the table in the room is "<<r1.get_table(0)<<endl;
	_getch();
	return 0;
}
