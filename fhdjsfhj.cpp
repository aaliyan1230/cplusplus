// the class which is being composed should have intialized values in their constructors.

#include<iostream>
using namespace std;
#include<string>

class Engine
{
private:
    string company;
	int capacity;
	
public:
	Engine(string com="", int cc=0){
		company = com;
		capacity = cc;
	}
   
    void showdata()
    {
    	cout << "Engine company: "<<company <<endl;
    	cout << "Engine capcity: "<<capacity <<endl;
    	 
    }
};

class Door{
private:
	string opentype;
	int doornum;
public:
	Door(string open="", int num=0){
		opentype = open;
		doornum = num;
	}
	void showdata(){
		cout<<"Door type: "<<opentype<<endl;
		cout<<"Number of doors : "<<doornum<<endl;
		
	}                                                                                       
};

class Window{
private:
	string glassmaterial;
	string glasstype;
public:
	Window(string glass_mat="", string gtype=""){
		glassmaterial = glass_mat;
		glasstype = gtype;	
	}
	void showdata(){
		cout<<"Glass material: "<<glassmaterial<<endl;
		cout<<"Glass type: "<<glasstype<<endl;
	}	
};

class Car{
	private:
	string compani;
	string model;
	Engine e1;
	Door d1;
	Window w1;
	public:
		Car(string com, string mod, Engine e_1, Door d_1, Window w_1){
			compani = com;
			model = mod;
			e1 = e_1;
			d1 = d_1;
			w1=w_1;
			
		}
		void showdata(){
		cout<<"Car company: "<<compani<<endl;
		cout<<"Car model: "<<model<<endl;
		e1.showdata();
		d1.showdata();
		w1.showdata();
	}
};

int main(void){
	
	Engine e1("Toyota", 1800);
	
	Door d1("Suicide", 4);
	
	Window w1("Laminated", "Anti-Reflective");
	Car c1("toyota","wewe",e1,d1,w1);
	c1.showdata();
}