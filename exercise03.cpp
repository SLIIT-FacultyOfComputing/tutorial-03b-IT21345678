#include <iostream>

using namespace std;

int volume(int height, int width, int length);

struct box{
	
	int length;
	int width;
	int height;

	
};// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
   box box1;
  box box2;// 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int TotalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
   cout << "Enter Box 1 Height : ";
cin >> box1.length;
	
cout << "Enter Box 1 width : ";
cin >> box1.width;

cout << "Enter Box 1 length : ";
cin >> box1.height;

cout << "Enter Box 2 Height : ";
cin >> box2.length;

cout << "Enter Box 2 width : ";
cin >> box2.width;

cout << "Enter Box 2 length : ";
cin >> box2.height;
    
    // 5. Replace the coding below to pass the Box type structure
    	TotalVolume = volume(box1.height,box1.width,box1.length)+volume(box2.height,box2.width,box2.length);
    
    cout << "Volume of Box is " << TotalVolume << endl;
    
    return 0;
}

int volume(int height,int width,int length){
	
	return length*height*width;
	
}
