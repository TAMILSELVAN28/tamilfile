#include <iostream>
#include <conio.h>

using namespace std;

class calculator
{
    private:
        float val;

    public:
        calculator()
        {
		val=0;
		}
        void getdata()
        {           
            cout << "enter number: ";
            cin >> val;
        }

        void showdata()
        {
            cout << val << endl;
        }

        calculator operator + (calculator) const;
        calculator operator - (calculator) const;
        calculator operator * (calculator) const;
        calculator operator / (calculator) const;
        
};

calculator calculator::operator + (calculator arg2) const
{
    calculator temp;
    temp.val = val + arg2.val;
    return temp;
}

calculator calculator::operator - (calculator arg2) const
{
    calculator temp;
    temp.val = val - arg2.val;
    return temp;
}

calculator calculator::operator * (calculator arg2) const
{
    calculator temp;
    temp.val = val * arg2.val;
    return temp;
}

calculator calculator::operator / (calculator arg2) const
{
    calculator temp;
    temp.val = val / arg2.val;
    return temp;
}


int main()
{
    calculator obj1, obj2, obj3;
    int choice;

    obj1.getdata();
    cout << "1st value entered: ";
    obj1.showdata();
    cout << endl;

    obj2.getdata();
    cout << "2nd value entered: ";
    obj2.showdata();
    cout << endl;

    cout << "Input choice as integer: 1: +,   2: -,   3: *,   4:/    ";
    cin >> choice;
    cout << endl;

    switch (choice)
    {
        case 1:
            obj3 = obj1 + obj2;
            break;
        case 2:
            obj3 = obj1 - obj2;
            break;
        case 3:
            obj3 = obj1 * obj2;
            break;
        case 4:
            obj3 = obj1 / obj2;
            break;
        default:
            cout << "Invalid choice! " << endl;
    }

    cout << "Result ";
    obj3.showdata();
    cout << endl;
return 0;
}
