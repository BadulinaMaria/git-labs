#include <iostream>
using namespace std;
int main()
{
	/*int x,y;
	cout << "Enter x,y " << endl;
	cin >> x >> y;
		if (y>-x+3)
		{
			cout << "beach ";
		}
		else if (y< -x + 3)
		{
			cout << "ocean ";
		}
		else {
			cout << "field ";
		}*/
    cout << "Map:" << endl;
    for (int i = 1; i <= 3 ; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i > -j + 4) {
                cout << "b ";
            }
            else if (i < -j + 4) {
                cout << "o ";
            }
            else {
                cout << "f ";
            }
        }
        cout << endl;
    }
	int x, y;
	enum location { beach, ocean, field };
	location loc;
	cout << "Enter x,y " << endl;
	cin >> x >> y;
	   if (y > -x + 3)
	   {
		loc = beach;
	   }
	   else if (y < -x + 3)
	   {
		loc = ocean;
	   }
	   else {
		loc = field;
	   }
	switch (loc) {
	   case ocean:
		     cout << "You are in the ocean";
		     break;
	   case beach:
		     cout << "You are in the beach";
		     break;
	   default:
		cout << "You are in the field";
	}
    string dir;
    cout << " Enter direction (north/south/east/west): ";
    cin >> dir;

  
    cout << "Looking " << dir << ": ";

    if (dir == "north") {
        if (y + 1 > -(x)+3) {
            cout << "beach";
        }
        else if (y + 1 < -(x)+3) {
            cout << "ocean";
        }
        else {
            cout << "field";
        }
    }
    else if (dir == "south") {
        if (y - 1 > -(x)+3) {
            cout << "beach";
        }
        else if (y - 1 < -(x)+3) {
            cout << "ocean";
        }
        else {
            cout << "field";
        }
    }
    else if (dir == "east") {
        if (y > -(x + 1) + 3) {
            cout << "beach";
        }
        else if (y < -(x + 1) + 3) {
            cout << "ocean";
        }
        else {
            cout << "field";
        }
    }
    else if (dir == "west") {
        if (y > -(x - 1) + 3) {
            cout << "beach";
        }
        else if (y < -(x - 1) + 3) {
            cout << "ocean";
        }
        else {
            cout << "field";
        }
    }
    else {
        cout << "unknown direction!" << endl;
    }
  

    return 0;
}

