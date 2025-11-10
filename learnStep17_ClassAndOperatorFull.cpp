#include<bits/stdc++.h>

using namespace std;

//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
// Box();
// Box(int,int,int);
// Box(Box);


// int getLength(); // Return box's length
// int getBreadth (); // Return box's breadth
// int getHeight ();  //Return box's height
// long long CalculateVolume(); // Return the volume of the box

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

/*
More details about overloading operator:

*/


class Box{
    private:
        int l,b, h;
    public:
        Box() : l{0},b{0}, h{0} {}
        Box(int length, int breadth, int height) : l{length},b{breadth}, h{height} {}
        Box(const Box& B) : l{B.l},b{B.b}, h{B.h} {}
        
        int getLength() const {
            return this->l;
        } 
        int getBreadth() const {
            return this->b;
        }
        int getHeight() const {
            return this->h;
        }
        
        long long CalculateVolume() const {
            return (long long)l * b * h;;
        }
        
        bool operator<(Box& b) const {
            if(this->l < b.l){
                return true;
            }
            else if(this->b < b.b && this->l == b.l ){
                return true;
            }
            else if(this->b == b.b && this->l == b.l && this->h < b.h ){
                return true;
            }
            return false;
        }

};

ostream& operator<<(ostream& out, Box& B){
    out << B.getLength() << " "<< B.getBreadth() << " "<< B.getHeight() << " ";
    return out;
}

void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<"\n";
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<"\n";
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<"\n";
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<"\n";
		}

	}
}

int main()
{
	check2();
}