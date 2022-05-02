#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//made by mohammed ehab 
/*my github : https://github.com/ME2Ehab */


int main(){
    //defining global variables
string shape;
string requirement;
const float pi = 3.14;
//inputting
cout << "what shape do you want? ";
cin >> shape;
cout << endl << "what do you want to find in the shape? ";
cin >> requirement;
cout << endl << endl;




// the algorithm to choose the shape.
//first shape.
if (shape == "square" || shape == "Square" || shape == "s" || shape == "S"){
    //variables
 int square_area, square_perimiter, square_side;
 //first if they want to find the area
 if (requirement == "Square-area" || requirement == "square area" || requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A" || requirement == "square-area"){
 // the input of side
 cout <<endl << "so wanna find about the area, alright follow this --> " << endl;
 cout << "enter the length of the side of the square(in CMs): ";
 cin >> square_side;
 //the formula
 square_area = square_side * square_side;
 // the output
 cout << endl << endl << "---------------output------------------------------------------>"<< endl;
 cout <<endl <<  "the square area is " << square_area << " CM^2";
 }
 //second case to find the perimiter
  else if (requirement == "Square-perimiter" || requirement == "square perimiter" || requirement == "perimiter" || requirement == "Perimiter" || requirement == "p" || requirement == "P" || requirement == "square-perimiter"){
 //the input of side
 cout << "gotta check you perimiter, huh?! yeah I know bad joke, anyway follow this -->" << endl;
 cout << "enter the length of the side of the square(in CMs): ";
 cin >> square_side;
 // the formula
 square_perimiter = 4 * square_side;
 //the output
     cout << endl << endl << "---------------output------------------------------------------>"<< endl;
     cout << endl << "the square perimiter is:  " << square_perimiter << " CM";
  }
  else {cout << endl << "nice joke, NOW GET BACK TO WORK!! FH";} 
  }


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
// second shape
else if (shape == "circle" || shape == "c" || shape == "C" || shape == "Circle") {
    //variables
float r, a, p;
cout << "I know someone who knows someone who knows someone who loves circles" << endl << endl;
cout << " enter the raduis of the circle: ";
cin >> r;
//first case
if (requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){
    a = pi * r * r;
    cout << "the area of the circle is : " << a;
}
//second case
else if (requirement == "preimiter" || requirement == "p" || requirement == "P" || requirement == "Preimiter") {
p = 2 * pi * r; 
cout << " the perimiter of the circle is :" << p;
}
  }


//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//third shape
else if (shape == "rectangle" || shape == "r" || shape == "R" || shape == "Rectangle"){
    //code goes here.
    int length, width , area, preimiter;
    cout << "please enter the length : "; cin >> length;
    cout <<endl << "please enter the width : "; cin >> width;
    //the algorithm for choosing between A or P
    //first case
    if (requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){
        // formula
area = length * width;
// the output
cout << endl << endl << "---------------output------------------------------------------>"<< endl;
cout << endl << "the area of the rectangle is : " << area;
    }
    //the second case
    else if (requirement == "preimiter" || requirement == "p" || requirement == "P" || requirement == "Preimiter") {
        // the formula
preimiter = 2 * (length + width);
//the output 
cout << endl << endl << "---------------output------------------------------------------>"<< endl;
cout << endl << "the perimiter of the rectangle is : " << preimiter;
    
    }
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//fourth shape
else if (shape == "Dleta" || shape == "delta" || shape == "triangle" || shape == "Triangle"){
    //scoped Vars
    float length, width , height, area , perimiter;
    //the algorithm
    cout << "enter the length ";cin >> length;
    cout <<"\n enter the heigth";cin>> height;
    cout << "\n enter the width";cin >> width;
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){cout << "no formula made yet" ;}
    else if(requirement == "preimiter" || requirement == "p" || requirement == "P" || requirement == "Preimiter"){cout << "no formula made for that, yet" ;}
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//a CONE.   
else if (shape == "cone" || shape == "Cone" || shape == "CONE"){
    //scoped Vars (self explained);
    int radius, height,side;
    float area_surface, area_total, volume;
    //input
    cout << "enter the raduis : ";cin >> radius;cout << "\nenter the height : ";cin >> height;cout << "\nenter the S";cin >> side;cout << endl;
//conditionals
    if(requirement == "area surface" || requirement == "Area" || requirement == "a" || requirement == "A"){area_surface = pi * radius * side;
    cout << "the result is : " << area_surface << "."<< endl; }
    //2nd
    else if(requirement == "t" || requirement == "T" || requirement == "total" || requirement == "area total"){area_total = pi * radius * side + pi * radius * radius;
        cout << "the result is : "<< area_total << "."<< endl;}
        //3rd
    else if(requirement == "V" || requirement == "v" || requirement == "Volume" || requirement == "Volume"){volume = 1/3 * pi * (radius^2) * height;
        cout << "the result is : " << volume << "."<< endl ;}    
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//sphere
else if (shape == "Sphere" || shape == "sphere"){
    //vars (self explained)
    int radius;
    float area, volume;
    //input
cout <<" enter the radius : ";cin >> radius;cout << endl;
//conditionals
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){area = 4 * pi * (radius^2);
    cout << "the result is : " << area << "." << endl;}
    //2nd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = 4/3 * pi * (radius^3);
    cout << "the volume is "<< volume << "."<< endl;}
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//pyramid
else if (shape == "Pyramid" || shape == "pyramid" || shape == "4Delta" || shape == "4delta"){
    //vars
    int height, side, base;
    float area_total, volume;
    //input
    cout << "\nenter the height ";cin>> height;cout <<"\nenter the side length ";cin >> side;cout << "\nenter the base... ";cin >> base;
    //conditionals
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A" || requirement == "t"|| requirement == "T")
    {area_total = 2 * base * side + (base^2); cout << "the total area is "<< area_total << "."<< endl;}
    //2nd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = 0.333333333 * (base^2)*height;
    cout << "the volume is "<< volume << "."<< endl;}
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//cylinder
else if (shape == "Cylinder" || shape == "cylinder" || shape == "cily" || shape == "Cily"){
    //scoped VARs
    int radius, height;
    float volume , area, surface, base;
//input
    cout << "\nplease give us the height of the cylinder ";cin >> height;

    cout << "\ngive the radius : ";cin >> radius;
//conditionals
    if(requirement == "total area" || requirement == "total Area" || requirement == "area" || requirement == "Area"){area =2 * pi * (radius^2) + 2 * pi * radius * height;
    cout << "the area of the cylinder is " << area << "."<< endl;}
//2nd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = pi * (radius^2) * height;cout << "the volume is "
    << volume << "." << endl; }
//3rd
    else if(requirement == "Base" || requirement == "Base area" || requirement == "base area" || requirement == "Base"){base = pi * (radius^2);
    cout << "the area of the base is "<< base << "."<< endl; }
//4th
    else if(requirement == "surface" || requirement == "Surface" || requirement == "surface area" || requirement == "Surface area"){surface = 2 * pi * radius * height; 
    cout <<"the surface area of the cylinder is "<< surface << "." << endl; }
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//rectangular prism
else if (shape == "rectangular prism" || shape == "Rectangular prism" || shape == "rec prism" || shape == "Rec prism"){
    //vars
    float area, volume;
    int length, width , height;
    //input
    cout << "\nenter the length ";cin >> length;cout << "\nenter the height ";cin >> height;cout <<"\nenter the width ";cin >> width;cout << endl;
    //conditionals 
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){area = 2(length * width + length * height + height * width);
    cout << "the area of this shape is "<< area << "." << endl}
    //2nd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = length * width *height;
    cout << "the volume is "<< volume << ".\n";}
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//triangular prism
else if (shape == "triangular prism" || shape == "Triangular prism" || shape == "delta prism" || shape == "Delta prism"){
    //vars 
    float area, volume, base, rectangles;
    int a, b, c, height, length;
    //input
    cout << "enter point a ";cin >> a;cout << "enter point b ";cin >> b;cout <<"\n enter point c ";cin >> c;
    cout << "\nenter the length ";cin >> length;cout << "\nenter the height ";cin >> height;
    //the conditionals
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){area =a*height + b*height + c*height + b*length;
    cout << "the total area is "<< area << ". \n";}
    //2nd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = 0.5 * (b * length* height);}
    //3rd
    else if(requirement == "Base" || requirement == "Base area" || requirement == "base area" || requirement == "Base"){base = 0.5 * b * length;
    cout << "the area of the base is "<< base << "."<< endl; }
    //4th
    else if(requirement == "rec" || requirement == "Rec" || requirement == "rectangles" || requirement == "Rectangles"){rectangles = a* height + b * height+ c*height;
cout << "the rectangles in the prism are "<< rectangles << "." << endl;
    }
    //end
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------//
//this is used as a place holder block of code    
else if (shape == "shape" || shape == "Shape" || shape == "shapey" || shape == "shape"){
    int area, perimiter, volume;
    if(requirement == "area" || requirement == "Area" || requirement == "a" || requirement == "A"){area = 0;
        cout << "no formula made yet" ;}
    //2nd
    else if(requirement == "preimiter" || requirement == "p" || requirement == "P" || requirement == "Preimiter"){perimiter = 0;
        cout << "no formula made for that, yet" ;}
    //3rd
    else if(requirement == "volume" || requirement == "V" || requirement == "v" || requirement == "Volume"){volume = 0;
        cout << "no formula made for that, yet" ;}
    //end
}
//last thing in the output if there is nothing that worked.
 else {string answer; cout << "is it a shape? (yes or no)"; cin >> answer;
 //the algorithm of falure
 //acceptance
    if (answer == "yes" || answer == "yup" || answer == "y" || answer == "Y" || answer == "Yup" || answer == "Yes" || answer == "YES" || answer == "YUP"){ 
     cout << "We don't have that in the dataBase!, go search the fourth dimension, you may find it there."; }
     //refusal
     else if (answer == "no" || answer == "nope" || answer == "n" || answer == "N" || answer == "Nope" || answer == "NOPE" || answer == "NO" || answer == "No"){
         cout << "then what are you doing here, go do something else, don't bother me and no lolygaging; understood!";
     }
     //WTF with the user (Joking, god dammit {can't take a joke can ya?!})
     else {cout <<"Still, No clear answer -IdIoT-. SMH";}
     }
}