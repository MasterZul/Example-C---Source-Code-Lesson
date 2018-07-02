#include <iostream>
#include <iomanip>
using namespace std;



class RoomDimension {
	private:
		double length;
		double width;
	public:
		RoomDimension (double x, double y) { length = x; width = y; }
		double getArea () { return length * width; }
};



class RoomCarpet{
	private:
		RoomDimension *carp;
		double cost;
	public:
		
		RoomCarpet (RoomDimension *obj, double x) { carp = obj; cost = x;}
		double TotalCost() { return carp->getArea() * cost; }
};




int main()
{
	double L, W, cost;
	
	cout << fixed << showpoint << setprecision(2);
	cout << "Enter Length of Room -> ";
	cin >> L;
	cout << "Enter Width of Room -> ";
	cin >> W;
	cout << "Cost per SquareFeet -> RM ";
	cin >> cost;
	
	RoomDimension *hakimikawaii = new RoomDimension(L, W);
	RoomCarpet carpet(hakimikawaii, cost);
	
	cout << "\nTotal Price of Carpet: RM" << carpet.TotalCost() << endl;
	
	return 0;
}

