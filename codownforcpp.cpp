//1. Program to Print Hello World. 

#include<iostream>
using namespace std;

int main()
{
    cout<<"Hello World";
    return 0;
}



//2. Program to Add Two Numbers.

#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int num1, num2, result;

    //take user input
    cout << "Enter first Number : ";
    cin >> num1;

    cout << "\nEnter second Number : ";
    cin >> num2;

    //to add two number
    result = num1 + num2;

    //display addition
    cout << "\nAddition is : " << result;

    return 0;
}



//3. Program to Check if the Number is Positive or Negative. 

#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter any non-zero Number:";
    cin >> num;
    if (num > 0)
    {
        cout << "Number is positive";
    }
    else
    {
        cout << "Number is negative";
    }

    return 0;
}



//4. Program to Check whether the number is Even or Odd. 

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter an integer : ";
    cin>>n;
    if(n % 2 == 0)
    {
        cout<<n<<" is even.";
    }
    else
    {
        cout << n << " is odd.";
    }
    return 0;
}



//5. Program to Accept Two Values of a & b and Swap their Values.

#include<iostream>
using namespace std;

int main()
{
int var1, var2, swap;

 cout<<"Enter value for first integer:  ";

 cin>>var1;

 cout<<"Enter value for second integer:  ";

 cin>>var2;

 cout<<"\nValues Before swapping:  \n"<<endl;

 cout<<"First Integer ="<<var1<<endl;

 cout<<"Second Interger ="<<var2<<endl;

              swap=var1;

              var1=var2;

              var2=swap;

 cout<<"\nValues After swapping:  \n"<<endl;

 cout<<"First Integer ="<<var1<<endl;

 cout<<"Second Interger ="<<var2<<endl;

 return 0;

}



//6. Program to Accept value of base & height and Calculate Area of Triangle. 

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float base,height;
    float area;

    cout<<"Enter base of Triangle : ";
    cin>>base;

    cout <<"Enter height of Triangle : ";
    cin>>height;

    area = 0.5 * (base * height);
    cout<<"Area of Triangle :"<<area;
    return 0;
}



//7. Program to Find Simple Interest. 

#include<iostream>
using namespace std;

int main()
{
 float p,r,t,i;

 cout<<"Enter Principle : ";
 cin>>p;
 cout<<"Enter Rate : ";
 cin>>r;
 cout<<"Enter Time(in years) : ";
 cin>>t;

 //formula to calculate intrest
 i=(p*r*t)/100;
 cout<<"Simple interest is : "<<i;

 return 0;
}



//8. Program to Find Compound  Interest.

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 float PA,R,Time,CI;
 cout<<"Enter Principal amount : ";
 cin>>PA;
 cout<<"\n";
 cout<<"enter rate : ";
 cin>>R;
 cout<<"\n";
 cout<<"enter time(in year) : ";
 cin>>Time;

 //formula to calculate compound intrest
 CI=PA*pow((1+R/100),Time) - PA;
 cout<<"Compound Interest is : "<<CI;

    cout<<"\n";
 return 0;
}




//9. Program to Convert Celsius  to Fahrenheit. 

#include<iostream>
using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter the temperature in Celsius : ";
    cin >> celsius;
    fahrenheit = (celsius * 9.0) / 5.0 + 32;
    cout << "The temperature in Celsius    : " << celsius << endl;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}



//10. Program to Convert Centimeter to Meters and Kilometres.

#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    float meter, cmeter, kmeter;

    //user input
    cout << "\nEnter length in centimeters : ";
    cin >> cmeter;


    // Convert centimeter into meter and kilometer

    meter = cmeter / 100.0;
    kmeter = cmeter / 100000.0;

    //display converted values

    cout << "\nLength in Meter : ";
    cout << meter;

    cout << "\nLength in Kilometer : ";
    cout << kmeter;

    cout << endl;

    return 0;
}



//11. Program to Find Area and Parameter of Rectangle.


#include<iostream>

using namespace std;

int main()

{

    int width,height,area,perimeter;

    cout<<"Enter  Width of Rectangle = ";

    cin>>width;

    cout<<"Enter  Height of Rectangle = ";

    cin>>height;

    area=height*width;

    cout<<"Area of Rectangle = "<<area<<endl;

    perimeter=2*(height+width);

    cout<<"Perimeter of rectangle are = "<<perimeter<<endl;

    return 0;

}



//12. Program to Find Radius of Circle using Area. 

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int area;
    cout<<"enter area of circle  : ";
    cin>>area;

    cout<<"\n";

    double radius=sqrt(area/3.14);

    cout<<"Radius of circle is : "<<radius;
}



//13. Program to Find Perfect Square. 

#include <stdio.h>
#include <math.h>
#include<iostream>

using namespace std;

int main()
{
    int num, tempnum;

    cout<<"Enter a number: ";
    cin>>num;

    tempnum = sqrt(num);

    if(tempnum*tempnum==num)
    {
       cout<<"YES,its perfect square of : "<<sqrt(num);
    }

    else
    {
        cout<<"NO,its not perfect square";
    }

    return 0;
}



//14. Program to Find GCD and LCM. 

#include<iostream>

using namespace std;

int main()
{

    //variable declaration
    int num1, num2, gcd = 1;

    //take input from user
    cout << "Enter two numbers : ";
    cin >> num1;
    cin >> num2;

    //logic to calculate gcd and lcm
    for (int i = 1; i < 1000; ++i)
    {
        if ((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
    }

    //print calculated value of gcd and lcm

    cout << "\nGCD of two number is : " << gcd;
    cout << "\nLCM of two number is : " << (num1 * num2) / gcd;
}



//15. Program to Find Square and Cube Root. 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    //variable declaration
    int number;

    //take input for number from user
    cout << "Enter number : ";
    cin >> number;

    //use of sqrt function to find square root
    cout << "square root of " << number << " is " << sqrt(number);

    cout << "\n\n";

    //use of cbrt function to find cube root
    cout << "cube root of " << number << " is " << cbrt(number);

    cout << "\n";

    return 0;
}



//16. Program to Find Volume of Box. 

#include <iostream>

using namespace std;

int main()
{
    double length;
    double width;
    double height;
    double volume;

    cout << "Please Enter a Length for your box: ";
    cin >> length;

    cout << "\nPlease Enter a Width for your box: ";
    cin >> width;

    cout << "\nPlease Enter a Height for your box: ";
    cin >> height;


    volume = length * width * height;
    cout << "\n\nThe Volume of your box is: " << volume << endl;

    return 0;
}



//17. Program to Find the roots of a Quadratic Equation. 

#include <iostream>
#include <cmath>
using namespace std;

int main()
 {
    float a, b, c, x1, x2, determinant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    determinant = b*b - 4*a*c;

    if(a==0)
    {
      cout<<" 'a'can not be zero";
    }
    else
    {
        if (determinant > 0)
         {
            x1 = (-b + sqrt(determinant)) / (2*a);
            x2 = (-b - sqrt(determinant)) / (2*a);
            cout << "Roots are real and different." << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
         }
        else if (determinant == 0)
         {
            cout << "Roots are real and same." << endl;
            x1 = (-b + sqrt(determinant)) / (2*a);
            cout << "x1 = x2 =" << x1 << endl;
         }
        else 
        {
            realPart = -b/(2*a);
            imaginaryPart =sqrt(-determinant)/(2*a);
            cout << "Roots are complex and different."  << endl;
            cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
            cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
    return 0;
    }
}



//18. Program to concat two Strings. 

#include <iostream>
#include <string>

using namespace std;

int main ()
{
   string str1 = "Hellow";
   string str2 = "Friends";
   string str3;
   int  len ;

   // copy str1 into str3
   str3 = str1;
   cout << "str3 : " << str3 << endl;

   // concatenates str1 and str2
   str3 = str1 + str2;
   cout << "str1 + str2 : " << str3 << endl;

   // total lenghth of str3 after concatenation
   len = str3.size();
   cout << "str3.size() :  " << len << endl;

   return 0;
}



//19. Program to Convert String to Char Array. 

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    string tmp = "C Plus Plus";

    cout<<"String : "<<tmp<<endl;

    cout<<"Converting string to char array : ";

    char charArray[1024];
    strncpy(charArray, tmp.c_str(), sizeof(charArray));
    charArray[sizeof(charArray) - 1] = 0;

    for(int i = 0;charArray[i]!=0;i++)
    {
        cout<<endl<<"charArray["<<i<<"] :\t"<<charArray[i];
    }

    return 0;
}



//20. Program to Convert String to Lowercase. 

#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 cout<<"Enter a string : ";
 gets(str);

 for(int i=0;str[i]!='\0';i++)
  str[i] = (str[i]>='A' && str[i]<='Z')?(str[i]+32):str[i];

 cout<<str;

 return 0;
}



//21. Program to Convert String to Uppercase. 

#include<iostream>
#include<stdio.h>

using namespace std;

int main( )
{
 char str[80];
 cout<<"Enter a string : ";
 gets(str);

 for(int i=0;str[i]!='\0';i++)
  str[i] = (str[i]>='a' && str[i]<='z')?(str[i]-32):str[i];

 cout<<str;

 return 0;
}


//22. Program to Accessing two Dimensional array element. 

#include <iostream>

using namespace std;

int main()
{
    // an array with 5 rows and 2 columns.
    int a[5][2] = {{0, 0},
                   {1, 2},
                   {2, 4},
                   {3, 6},
                   {4, 8}};

    // output each array element's value
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "a[" << i << "][" << j << "]: ";
            cout << a[i][j] << endl;
        }
    }
    
    return 0;
}



//23. Program to Swapping Array Element. 

#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int arr[100], i, temp, size;

    cout << "enter array size : ";
    cin >> size;

    cout << "enter elements in to array : \n";
    for (i = 0; i < size; ++i)
    {
        cin >> arr[i];
    }

    cout << "\narray before swaping elements : \n";
    for (i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    //element swapping logic
    for (i = 1; i < size; i += 2)
    {
        temp = arr[i];
        arr[i] = arr[i - 1];
        arr[i - 1] = temp;
    }

    cout << "\narray after swapping elements : \n";
    for (i = 0; i < size; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}



//24. Array Initialization. 

int main()
{
    //If the size is omitted, the compiler uses the number of values
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // No intitialization.
    float p1[1000];

    //To initialize an array to all zeros, initialize only the first value.
    // All 1000 values initialized to zero.
    float p2[1000] = {0.0};

    // Initial values of pressure(variable) undefined.
    float pressure[10];

    // Remaining characters zero.
    char greeting[100] = "Hello";

    // Array size is 6 (final zero on strings).
    char goodbye[] = "Adios";

    return 0;
}



//25. Array of Objects. 

#include <iostream>

using namespace std;

class Demo
{
    int x;

public:
    
    void setX(int i)
    {
        x = i;
    }

    int getX()
    {
        return x;
    }
};

int main()
{
    Demo obj[4];
    int i;

    for (i = 0; i < 4; i++)
    {
        obj[i].setX(i);
    }
    
    for (i = 0; i < 4; i++)
    {
        cout << "obj[" << i << "].getX() : " << obj[i].getX() << endl;
    }
    
    return 0;
}



//26. Array Sort.

// for std::swap, use <utility> instead if C++11
#include <algorithm>
#include <iostream>

#define SIZE 10
using namespace std;

int main()
{

    cout << "array values :" << " 132, 520, 210, 510, 140 ,125,52,96,55,85" << "\n";
    //input array values
    int array[SIZE] = {132, 520, 210, 510, 140, 125, 52, 96, 55, 85};

    cout << "sorted values : ";

    // Step through each element of the array
    for (int startIndex = 0; startIndex < SIZE; ++startIndex)
    {
        // smallestIndex is the index of the smallest element we've encountered so far.
        int smallestIndex = startIndex;

        // Look for smallest element remaining in the array (starting at startIndex+1)
        for (int nowIndex = startIndex + 1; nowIndex < SIZE; ++nowIndex)
        {
            // If the current element is smaller than our previously found smallest
            if (array[nowIndex] < array[smallestIndex])
                // This is the new smallest number for this iteration
            {
                smallestIndex = nowIndex;
            }
        }

        // Swap our start element with our smallest element
        swap(array[startIndex], array[smallestIndex]);
    }

    // Now print our sorted array as proof it works
    for (int index = 0; index < SIZE; ++index)
    {
        cout << array[index] << ' ';
    }

    cout << "\n";
    return 0;
}



//27. Program of Array Sum and Average.

#include <iostream>

using namespace std;

int main()
{
    int n, i;
    float sum = 0.0, average;
    cout << "Enter the numbers of data: ";
    cin >> n;
    float num[n];
    for (i = 0; i < n; ++i)
    {
        cout << endl << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    cout << endl << "Sum = " << sum;

    average = sum / n;
    cout << endl << "Average = " << average;

    return 0;
}



//28. Deletion in Array.

#include<iostream>

using namespace std;

int main()
{

    int i, inputarray[10], no, pos;

    cout << "Enter 10 data elements in array: ";
    for (i = 0; i < 10; i++)
    {
        cin >> inputarray[i];
    }
    cout << "\nEnter position of element to delete: ";
    cin >> pos;

    if (pos > 10)
    {
        cout << "\n position value is not in range: ";
    }
    else
    {
        --pos;
        for (i = pos; i <= 9; i++)
        {
            inputarray[i] = inputarray[i + 1];
        }

        cout << "\n\nNew data in array: ";

        for (i = 0; i < 9; i++)
        {
            cout << inputarray[i];
            cout << " ";
        }
    }
    return 0;
}



//29. Program to Display Even numbers in an Array.

#include<iostream>
using namespace std;

 int main()
  {

   int numarr[100],evenarr[100],i,j=0,k=0,num;

   cout<<"Enter Size of Array : ";
   cin>>num;

   cout<<"Enter "<<num<<" Data elements in Array : ";
   for(i=0; i<num;i++)
   {
        cin>>numarr[i];
   }

   for(i=0; i<num;i++)
   {
        if(numarr[i]%2==0)
        {
            evenarr[j]=numarr[i];
            j++;
        }
   }

   cout<<"\nEven Elements : ";

    for(i=0; i<j ;i++)
    {
        cout<<evenarr[i]<<"  ";
    }
  }



//30. Program to Display Lower Triangle of a matrix.

#include<iostream>

using namespace std;

//method declaration
void lower_halfmatrix(int mat[10][10], int row);

//define main method
int main()
{
    //variable declaration
    int mat[10][10], i, j, row, col;

    //enter number of row and column you want
    cout << "Enter how many numbers of row and column you want : ";
    cout << "\n";
    cin >> row;
    cout << "\n";
    cin >> col;
    cout << "\n";
    cout << "enter elements";
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        cout << "\n";
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    lower_halfmatrix(mat, row);

    return 0;
}

//method definition
void lower_halfmatrix(int mat[10][10], int row)
{
    int i, j;
    cout << "\n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}



//31. Program to Display upper half of matrix.

#include<iostream>

using namespace std;

//method declaration
void upper_halfofmatrix(int mat[10][10], int col, int r);

int main()
{
    //variable declaration
    int mat[10][10], row, col, i, j;
    //input for row and column
    cout << "enter how many numbers of row and column you want : ";
    cin >> row >> col;
    //enter element into matrix
    cout << "enter elements: \n";

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> mat[i][j];
        }
    }
    upper_halfofmatrix(mat, col, row);

    return 0;
}

//method definition
void upper_halfofmatrix(int mat[10][10], int col, int row)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i <= j)
                cout << mat[i][j];

            else
                cout << " ";
        }

        cout << "\n";
    }
}



//32. Identity matrix.

#include<iostream>

using namespace std;

int main()
{
    int mat[5][5], order, i, j, flag = 0;

    cout << "Enter size of matrix : ";
    cin >> order;

    cout << "Enter matrix element : \n";
    for (i = 0; i < order; i++)
    {
        cout << "\n";
        for (j = 0; j < order; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < order; i++)
    {
        for (j = 0; j < order; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                if (mat[i][j] != 0)
                {
                    flag = 1;
                    break;
                }
            }
        }
    }

    cout << "The given matrix is ";
    if (flag == 0)
        cout << "an identity matrix.\n";
    else
        cout << "not an identity matrix.\n";

    return 0;
}



//33.Program to find Inverse Matrix using Gauss jordan method.

#include<iostream>

using namespace std;

int main()
{
    int i, j, k, n;
    float a[10][10] = {0}, d;

    cout << "Enter the order of matrix : ";
    cin >> n;
    cout << "Enter the elements : " << endl;
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];

    for (i = 1; i <= n; i++)
        for (j = 1; j <= 2 * n; j++)
            if (j == (i + n))
                a[i][j] = 1;

    for (i = n; i > 1; i--)
    {
        if (a[i - 1][1] < a[i][1])
            for (j = 1; j <= n * 2; j++)
            {
                d = a[i][j];
                a[i][j] = a[i - 1][j];
                a[i - 1][j] = d;
            }
    }
    cout << "Augmented : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n * 2; j++)
            if (j != i)
            {
                d = a[j][i] / a[i][i];
                for (k = 1; k <= n * 2; k++)
                    a[j][k] -= a[i][k] * d;
            }
    }

    for (i = 1; i <= n; i++)
    {
        d = a[i][i];
        for (j = 1; j <= n * 2; j++)
            a[i][j] = a[i][j] / d;
    }


    cout << "Inverse Matrix : " << endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= n * 2; j++)
            cout << a[i][j] << "    ";
        cout << endl;
    }

    return 0;
}



//34. Matrix Addition.

#include<iostream>

using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sum[10][10];

    cout << "Enter the number of rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter the elements of first matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> first[c][d];

    cout << "Enter the elements of second matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> second[c][d];

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sum[c][d] = first[c][d] + second[c][d];

    cout << "Sum of entered matrices:-\n";

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            cout << sum[c][d] << "\t";

        cout << endl;
    }

    return 0;
}



//35. Matrix Multiplication.

#include<iostream>

using namespace std;

int main()
{

    int a[5][5], b[5][5], c[5][5], m, n, p, q, i, j, k;

    cout << "Enter rows and columns of first matrix: ";
    cin >> m >> n;

    cout << "Enter rows and columns of second matrix: ";
    cin >> p >> q;

    if (n == p)
    {
        cout << "\nEnter first matrix:\n";
        for (i = 0; i < m; ++i)
            for (j = 0; j < n; ++j)
                cin >> a[i][j];

        cout << "\nEnter second matrix:\n";
        for (i = 0; i < p; ++i)
            for (j = 0; j < q; ++j)
                cin >> b[i][j];

        cout << "\nThe new matrix is:\n";

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < q; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
                cout << c[i][j] << "\t";
            }
            cout << "\n";
        }
    }
    else
        cout << "\nSorry!!!! Matrix multiplication can't be done";

    return 0;
}



//36. Matrix Subtraction.

#include<iostream>

using namespace std;

int main()
{
    int m, n, c, d, first[10][10], second[10][10], sub[10][10];

    cout << "Enter the number of rows and columns of matrix : ";
    cin >> m >> n;
    cout << "Enter the elements of first matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> first[c][d];

    cout << "Enter the elements of second matrix : \n";

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            cin >> second[c][d];

    for (c = 0; c < m; c++)
        for (d = 0; d < n; d++)
            sub[c][d] = first[c][d] - second[c][d];

    cout << "Subtraction of entered matrices:-\n";

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
            cout << sub[c][d] << "\t";

        cout << endl;
    }

    return 0;
}



//37. Matrix Transpose.

#include <iostream>

using namespace std;

int main()
{
    int a[10][10], trans[10][10], r, c, i, j;
    cout << "Enter rows and columns of matrix: ";
    cin >> r >> c;

    // Storing element of matrix entered by user in array a[][].
    cout << endl << "Enter elements of matrix: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << "\nEnter elements a" << i + 1 << j + 1 << " : ";
            cin >> a[i][j];
        }
    }
    
    // Displaying the matrix a[][]
    cout << endl << "Entered Matrix: " << endl;
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            cout << " " << a[i][j];
            if (j == c - 1)
                cout << endl << endl;
        }
    }
    // Finding transpose of matrix a[][] and storing it in array trans[][].
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            trans[j][i] = a[i][j];
        }
    }
    
    // Displaying the transpose,i.e, Displaying array trans[][].
    cout << endl << "Transpose of Matrix: " << endl;
    for (i = 0; i < c; ++i)
    {
        for (j = 0; j < r; ++j)
        {
            cout << " " << trans[i][j];
            if (j == r - 1)
                cout << endl << endl;
        }
    }
    
    return 0;
}



//38. Merging two Arrays.

#include<iostream>

using namespace std;


int main()
{

    int arr1[100], arr2[100], resultarr[100], n, m, i, j, k, s;

    cout << " Merging Two Arrays";
    cout << "\n\nEnter No. of Elements in First Array : ";
    cin >> n;

    cout << "\nEnter Elements : \n";

    for (i = 1; i <= n; i++)
    {
        cin >> arr1[i];
    }

    cout << "\nEnter No. of Elements in Second Array : ";
    cin >> m;

    cout << "\nEnter Elements in Sorted Order : \n";

    for (i = 1; i <= m; i++)
    {
        cin >> arr2[i];
    }

    i = 1, j = 1;

    for (k = 1; k <= n + m; k++)
    {
        // Compare Elements of Array A and Array B
        if (arr1[i] < arr2[j])
        {
            resultarr[k] = arr1[i];
            i++;

            if (i > n)
            {
                goto b;
            }

        }

        else
        {
            resultarr[k] = arr2[j];
            j++;

            if (j > m)
            {
                goto a;
            }

        }
    }


    a:
    // Copy the Remaining Elements of Array A to C
    for (s = i; s <= n; s++)
    {
        k++;
        resultarr[k] = arr1[s];
    }


    b:
    // Copy the Remaining Elements of Array B to C
    for (s = j; s <= m; s++)
    {
        k++;
        resultarr[k] = arr2[s];
    }

    cout << "\n\nAfter Merging Two Arrays:\n";

    for (k = 1; k <= n + m; k++)
    {
        cout << resultarr[k] << endl;
    }
    return 0;
}



//39. Remove Duplicates from Array.

#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int a[20], i, j, k, n;

    //take user input
    cout << "Enter array size : ";
    cin >> n;

    //ask for array elements
    cout << "\nEnter array " << n << " element : \n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    //display array elements
    cout << "\nOriginal array Elements are : ";

    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    //display new array elements and remove duplicate numbers from array
    cout << "\nNew array Element are  : ";

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n;)
        {
            if (a[j] == a[i])
            {
                for (k = j; k < n; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }


    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;

}



//40. Search Array.

#include <iostream>

using namespace std;


int main()
{
    int size;
    cout << "Enter How Many Elements You Want To Insert in Array : ";
    cin >> size;
    int arr[size];
    int c, searchelement;
    int flag = 0;

    cout << "\nEnter array element : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the number to search : ";
    cin >> searchelement;

    for (c = 0; c < size; c++)
    {
        if (arr[c] == searchelement)
        {
            cout << "Element is present at location  : " << c + 1;
            flag = 1;
            break;
        }
    }
    if (!flag)
        cout << "Element is not present in array.\n";

    return 0;
}



//41. Simple Array.

#include<iostream>

using namespace std;

int main()
{
    //variable declaration
    int size;

    //take user input for array size
    cout << "Enter how many elements you want to insert in array : ";
    cin >> size;

    int num[size];

    //take user input for array elements
    cout << "\nEnter Array elements : \n";

    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "\nElements in array : \n";

    //loop to display array items
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << "\n";
    }

    return 0;
}



//42. Skew Symmetric Matrix.

#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int arr[10][10], i, j, size;

    cout << "Enter order of square matrix : ";
    cin >> size;

    cout << "\nEnter matrix values : \n";
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {

            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (arr[i][j] != -arr[j][i])
            {
                cout << "\nMatrix is not skew matrix ";
                exit(0);
            }
        }
    }
    cout << "\nMatrix is skew matrix";

    return 0;
}



//43. Smallest and Largest Number in an Array.

#include<iostream>

using namespace std;

int main()
{

    int size;
    cout << "enter size of array : ";
    cin >> size;

    int arra[size];

    int smallelement, largestelement;

    cout << "\nenter array elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arra[i];
    }
    largestelement = smallelement = arra[0];
    for (int i = 0; i < size; i++)
    {
        if (arra[i] > largestelement)
        {
            largestelement = arra[i];
        }
        if (arra[i] < smallelement)
        {
            smallelement = arra[i];
        }
    }
    cout << "The biggest number is " << largestelement << endl;
    cout << "The smallest number is " << smallelement << endl;

    return 0;
}



//44. Spiral Matrix.

#include <vector>
// for auto_ptr
#include <memory>
// for the ceil and log10 and floor functions
#include <cmath>
#include <iostream>
// for the setw function
#include <iomanip> 

using namespace std;

typedef vector<int> IntRow;
typedef vector<IntRow> IntTable;

auto_ptr<IntTable> getSpiralArray(int dimension)
{
    auto_ptr<IntTable> spiralArrayPtr(new IntTable(
            dimension, IntRow(dimension)));

    int numConcentricSquares = static_cast< int >( ceil(
            static_cast< double >( dimension ) / 2.0));

    int j;
    int sideLen = dimension;
    int currNum = 0;

    for (int i = 0; i < numConcentricSquares; i++)
    {
        // do top side
        for (j = 0; j < sideLen; j++)
            (*spiralArrayPtr)[i][i + j] = currNum++;

        // do right side
        for (j = 1; j < sideLen; j++)
            (*spiralArrayPtr)[i + j][dimension - 1 - i] = currNum++;

        // do bottom side
        for (j = sideLen - 2; j > -1; j--)
            (*spiralArrayPtr)[dimension - 1 - i][i + j] = currNum++;

        // do left side
        for (j = sideLen - 2; j > 0; j--)
            (*spiralArrayPtr)[i + j][i] = currNum++;

        sideLen -= 2;
    }

    return spiralArrayPtr;
}

void printSpiralArray(const auto_ptr<IntTable> &spiralArrayPtr)
{
    size_t dimension = spiralArrayPtr->size();

    int fieldWidth = static_cast< int >( floor(log10(
            static_cast< double >( dimension * dimension - 1 )))) + 2;

    size_t col;
    for (size_t row = 0; row < dimension; row++)
    {
        for (col = 0; col < dimension; col++)
            cout << setw(fieldWidth) << (*spiralArrayPtr)[row][col];
        cout << endl;
    }
}

int main()
{
    printSpiralArray(getSpiralArray(5));

    return 0;
}



//45. Stack using Array.

#include <stdio.h>
#include<iostream>

using namespace std;

//declaration of constant value
#define MAX 5
int top, state;

// for deletion of element from stack-POP FUNCTION

int pop(int stack[])
{
    int value;
    if (top == -1)
    {
        value = 0;
        state = 0;
    }
    else
    {
        state = 1;
        value = stack[top];
        --top;
    }
    return value;
}


// for insertion of element into stack -PUSH FUNCTION

void push(int stack[], int item)
{
    if (top == (MAX - 1))
    {
        state = 0;
    }
    else
    {
        state = 1;
        ++top;
        stack[top] = item;
    }
}

void showstack(int stack[])
{
    int i;

    cout << "\n Stack contain: ";

    if (top == -1)
    {
        cout << "empty";
    }

    else
    {
        for (i = top; i >= 0; --i)
            cout << stack[i] << "\t";
    }
    cout << "\n";
}

// main method
int main()
{
    int stack[MAX], item;
    int ch;
    top = -1;

    cout << "\nSelect one choice from following Menu : ";
    cout << "\n\n1.push item in stack";
    cout << "\n2.pop item from stack";
    cout << "\n3.Exit ";

    do
    {
        do
        {
            cout << "\n\nEnter your choice : ";
            cin >> ch;

            if (ch < 1 || ch > 3)
            {
                cout << "invalid choice";
            }
        }

        while (ch < 1 || ch > 3);

        switch (ch)
        {
            case 1:
                cout << "enter element you want to push :";
                cin >> item;
                cout << item;
                push(stack, item);

                if (state)
                {
                    cout << "\n after push operation";
                    showstack(stack);

                    if (top == (MAX - 1))
                    {
                        cout << "\n stack is full";
                    }
                }

                else
                    cout << "stack overflow";
                break;
            case 2:
                item = pop(stack);
                if (state)
                {
                    cout << "poped item is :" << item << "\n after pop operation";
                    showstack(stack);
                }

                else
                    cout << "stack underflow";
                break;

            default:
                cout << "Exit... ";

        }//close switch case
    }//close do

    while (ch != 3);

    return 0;
}



//46. Sum of the array elements. 

#include<iostream>

using namespace std;

int main()
{
    int i, Num_arr[50], sum, num;

    cout << "Enter size of array : ";
    cin >> num;

    //Reading values into Array
    cout << "\nEnter array elements : ";
    for (i = 0; i < num; i++)
    {
        cin >> Num_arr[i];
    }

    //Computation of total
    sum = 0;
    for (i = 0; i < num; i++)
    {
        sum = sum + Num_arr[i];
    }

    //Printing of total
    cout << "\nSum of array element is : " << sum;

    return 0;
}



//47. Symmetric Matrix.

#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
    int arr[10][10], i, j, size;

    cout << "Enter size of matrix : ";
    cin >> size;


    cout << "Enter values in matrix : \n";
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= size; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                cout << "\n\nMatrix is not symmetric";

                exit(0);
            }
        }
    }
    cout << "\n\nMatrix is symmetric";

    return 0;
}



//48. Constructor & Destructor Demo.

#include<iostream>
using namespace std;

//class creation
class CubeDemo
{
    //member variable and member function declaration
    public:
        int side;

        //constructor declaration
        CubeDemo()
         {
          side=8;
         }
        //destructor declaration
        ~CubeDemo()
         {
          cout<<"\nDestructor called...";
         }

};

//declaration of main method

int main()
{
    //object creation
    CubeDemo cdemoobj;
    cout<<"";
    cout << cdemoobj.side;

}



//49. Constructor overloading.

#include <iostream>
using namespace std;
class Area
{
    private:
       int length;
       int breadth;

    public:
        // Constructor without argument
       Area(): length(5), breadth(2)
       {
       }
       // Constructor with two argument
       Area(int l, int b): length(l), breadth(b)
       { }
       void GetLength()
       {
           cout<<"Enter length and breadth : ";
           cin>>length>>breadth;
       }
       int AreaCalculation()
        {
           return (length*breadth);
        }
       void DisplayArea(int temp)
       {
           cout<<"Area is : "<<temp<<endl;
       }
};
int main()
{
    Area objarea1,objarea2(24,2);
    int temp;
    objarea1.GetLength();
    cout<<"Area when default constructor is called."<<endl;
    temp=objarea1.AreaCalculation();
    objarea1.DisplayArea(temp);
    cout<<"Area when (parameterized constructor is called."<<endl;
    temp=objarea2.AreaCalculation();
    objarea2.DisplayArea(temp);
    return 0;
}



//50. Copy Constructor.

#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) 
    { 
        x = x1; y = y1; 
    }

    // Copy constructor
    Point(const Point &p2)
    {
        x = p2.x;
        y = p2.y;
    }

    int getX()
    {
         return x;
    }
    int getY()
    {
        return y;
    }
};

int main()
{
    // simple constructor is called
    Point objpoint1(53, 13);
    // Copy constructor is called
    Point objpoint2 = objpoint1;
    cout << "objpoint1.x : " << objpoint1.getX() << ", objpoint1.y : " << objpoint1.getY();
    cout << "\nobjpoint2.x : " << objpoint2.getX() << ", objpoint2.y : " << objpoint2.getY();

    return 0;
}



//51. Example of Friend Function. 

/* C++ program to demonstrate the working of friend function.*/
#include <iostream>

using namespace std;

class Distance
{
    private:
        int meter;
    public:
        Distance(): meter(0){ }
        //friend function
        friend int func(Distance);

};

//function definition
int func(Distance d)
{
    //accessing private data from non-member function
    d.meter = 10;
    return d.meter;

}

int main()
{

    Distance D;
    //using friend function
    cout<<"Distace: "<<func(D)<<"\n";
    return 0;

}



//52. Function Overloading(Polymorphism).

#include<iostream>

using namespace std;

class Add
{
    public:
    void add(int a,int b)
    {
        int c;
        c=(a+b);
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }

    void add(float a,float b)
    {
        float c;
        c=(a+b);
        cout<<a<<" + "<<b<<" = "<<c<<endl;
    }

    void add(int a,int b,int c)
    {
        int d;
        d=(a+b+c);
        cout<<a<<" + "<<b<<" + "<<c<<" = "<<d<<endl;
    }
};

int main()
{
    Add a;
    a.add(5,6);
    a.add(7,8,9);
    a.add(8.0f,9.0f);

    return 0;
}



//53. Function Overloading Example. 

# include<iostream>

using namespace std;

int area(int side)
{
 return side*side;
}

int area(int l , int b)
{
 return l*b;
}

int main()
{

        int (*p1)(int);
        int (*p2)(int,int);

        p1=area;
        p2=area;

        cout<<"Address of area(int)="<<p1<<endl;
        cout<<"Address of area(int,int)="<<p2<<endl;

        cout<<"\n";

        cout<<"Invoking area(int) via p1 "<<p1(20)<<endl;
        cout<<"Invoking area(int,int) via p2 "<<p2(10,20);

        return 0;
}



//54. Hierarchical Inheritance Example.

#include<iostream>

using namespace std;

class Shape
{
protected:
 float width, height;

public:
 void set_data (float a, float b)
 {
  width = a;
  height = b;
 }
};

//inheriting Shape class
class Rectangle: public Shape
{
public:
 float area ()
 {
  return (width * height);
 }
};

//inheriting Shape class
class Triangle: public Shape
{
    public:
        float area ()
        {
            return (width * height / 2);
        }
};

int main ()
{
 Rectangle rect;
 Triangle tri;

 rect.set_data (5,3);
 tri.set_data (2,5);

 cout <<"Area of Rectangle : " <<rect.area() << endl;
 cout <<"Area of Triangle : "<< tri.area() << endl;

 return 0;
}



//55. Hybrid Inheritance Example. 

#include<iostream>

using namespace std;

class A
{
    public:
        int l;
        void len()
        {
           cout<<"Lenght : ";
           cin>>l;
        }
};

class B : public A
{
    public:
        int b,c;
       void l_into_b()
       {
           len();
           cout<<"Breadth : ";
           cin>>b;
           c=b*l;
       }
};

class C
{
    public:
        int h;
        void height()
        {
           cout<<"Height : ";
           cin>>h;
        }
};

//Hybrid Inheritance Level
class D : public B , public C
{
    public:
        int res;
        void result()
        {
           l_into_b();
           height();
           res=h*c;

           cout<<"\n";
           cout<<endl<<"Result (l*b*h) : "<<res;
        }
};

int main()
{
    D dObj;
    dObj.result();

    return 0;
}



//56. Merge singly linked list.

#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct linked_list
{
    int data;
    struct linked_list *next;
}
Linked_list;

//for adding node
int add_node(Linked_list **head, int d)
{
    Linked_list *l = new Linked_list;
    if(l == NULL) return 0;

    Linked_list *t = *head;
    l->data = d;
    l->next = NULL;

    if(*head == NULL)
    {
        *head = l;
        return 1;
    }

    while(t->next != NULL)
    {
        t = t->next;
    }

    t->next = l;

    return 1;
}

//print the value which are there in linked list
void print_list(Linked_list *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void del_list(Linked_list *head)
{
    while(head != NULL)
    {
        Linked_list *t = head ->next;
        delete head;
        head = t;
    }
}

Linked_list * merge_list(Linked_list *l1, Linked_list *l2)
{
    Linked_list *h = l1, *r = l1, t;

    if(l1 == NULL)
    {
        return l2;
    }

    if(l2 == NULL)
    {
        return l1;
    }

    if(l1->data < l2->data)
    {
        h = r = l1;
        l1 = l1->next;
    }
    else
    {
        h = r = l2;
        l2 = l2->next;
    }

    while(l1->next != NULL && l2->next != NULL)
    {
        if(l1->data < l2->data)
        {
            r->next = l1;
            l1 = l1->next;
            r = r->next;
        }
        else
        {
            r->next = l2;
            l2 = l2->next;
            r = r->next;
        }
    }

    if(l1->next != NULL)
    {
        r->next = l1;
    }

    if(l2->next != NULL)
    {
        r->next = l2;
    }

    return h;
}

//declaration of main method
int main(int argc, char* argv[])
{
    Linked_list *l1 = NULL;
    Linked_list *l2 = NULL;

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l1, i * 3);
    }

    print_list(l1);//it will print first linked list

    for(int i = 0; i < 10; i ++)
    {
        add_node(&l2, i * 7);
    }

    print_list(l2); //it will print 2nd linked list

    Linked_list *h = merge_list(l1, l2);

    print_list(h);

    del_list(h);

 return 0;
}



//57. Method Overloading Example.

//program to show how method overloading works

# include<iostream>

using namespace std;

//area method with one parameter
int area(int side)
{
 return side*side;
}

//area method with two parameter
int area(int l , int b)
{
 return l*b;
}

int main()
{

 int (*para1)(int);
 int (*para2)(int,int);

 para1=area;
 para2=area;

 cout<<"Address of area(int) : "<<(unsigned int)para1<<endl;
 cout<<"Address of area(int,int) : "<<(unsigned int)para2<<endl;

 cout<<"Invoking area(int) via para1 : "<<para1(20)<<endl;
 cout<<"Invoking area(int,int) via para2 : "<<para2(10,20);
}



//58. Minus Operator overloading. 

#include<iostream>

using namespace std;

class MinusOperatorOverloading
{
    int x,y,z;

    public:
    void get_data(int a,int b,int c)
    {
        x = a;
        y = b;
        z = c;
    }

    void operator -()
    {
        x = x - 10;
        y = y - 10;
        z = z - 10;
    }

    void display()
    {
        cout<<"\nx: "<<x;
        cout<<"\ny: "<<y;
        cout<<"\nz: "<<z;
    }
};

int main()
{
    MinusOperatorOverloading oo;
    oo.get_data(53,73,93);
    cout<<"Before overloading:";
    oo.display();

    -oo;

    cout<<"\n\n";
    cout<<"After overloading:";

    oo.display();

    return 0;
}



//59. Multilevel Inheritance Example. 

#include<iostream>
#include<string.h>

using namespace std;

class student
{
    private:
      int rl;
      char nm[20];

    public:
       void read();
       void display();
};

class marks : public student
{
    protected:
      int s1;
      int s2;
      int s3;

    public:
       void getmarks();
       void putmarks();
};

class result : public marks
{
    private:
      int t;
      float p;
      char div[10];

    public:
       void process();
       void printresult();
};

void student::read()
{
    cout<<"Enter Roll no. : ";
    cin>>rl;

    cout<<"Enter Name : ";
    cin>>nm;
}

void student:: display()
{
    cout <<"\nRoll no. : "<<rl<<endl;
    cout<<"Name : "<<nm<<endl;

    cout<<"\n";
}

void marks ::getmarks()
{
    cout<<"Enter marks for 3  subjects : "<<endl;
    cin>>s1>>s2>>s3;
}

void marks ::putmarks()
{
    cout<<"Subject 1 :"<<s1<<endl;
    cout<<"Subject 2 : "<<s2<<endl;
    cout<<"Subject 3 : "<<s3<<endl;
}

void result::process()
{
    t= s1+s2+s3;
    p = t/3.0;
    p>=60?strcpy(div,"First"):p>=50?strcpy(div, "Second"): strcpy(div,"Third");
}

void result::printresult()
{
    cout<<"Total = "<<t<<endl;

    cout<<"\n";

    cout<<"Percentage  = "<<p<<endl;
    cout<<"Division = "<<div<<endl;
}

int main()
{
    result x;

    x.read();
    x.getmarks();
    x.process();
    x.display();
    x.putmarks();
    x.printresult();

    return 0;
}



//60. Multiple Inheritance Example. 

#include <iostream>

using namespace std;

class Area
{
    public:
    float area_calc(float l,float b)
    {
        return l*b;
    }
};

class Perimeter
{
    public:
    float peri_calc(float l,float b)
    {
        return 2*(l+b);
    }
};

//Rectangle class is derived from classes Area and Perimeter.
class Rectangle : private Area, private Perimeter
{
    private:
    float length, breadth;

    public:
    Rectangle() : length(0.0), breadth(0.0) { }

    void get_data( )
    {
        cout<<"Enter length: ";
        cin>>length;

        cout<<"Enter breadth: ";
        cin>>breadth;
    }

    float area_calc()
    {
        //Calls area_calc() of class Area and returns it.
        return Area::area_calc(length,breadth);
    }

    float peri_calc()
    {
        //Calls peri_calc() function of class Perimeter and returns it.
        return Perimeter::peri_calc(length,breadth);
    }
};

int main()
{
    Rectangle r;
    r.get_data();

    cout<<"\n\n";

    cout<<"Area = "<<r.area_calc();
    cout<<"\nPerimeter = "<<r.peri_calc();

    return 0;
}



//61. Operations using Class.

#include <iostream>
using namespace std;

//define class
class operations
{
    //member variables
    public:
        int num1,num2;

    //member function or methods
    public:
       void add()
       {
           cout<<"enter two number for addition : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1+num2;
           cout<<"\n";
       }

        void sub()
       {
           cout<<"enter two number for subtraction : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1-num2;
           cout<<"\n";
       }

        void mul()
       {
           cout<<"enter two number for multiplication : ";
           cin>>num1>>num2;
           cout<<"addition = "<<num1*num2;
           cout<<"\n";
       }

        void div()
       {
           cout<<"enter two number for division : ";
           cin>>num1>>num2;
           cout<<"addition = "<<(float)num1/num2;
           cout<<"\n";
       }
};
 int main()
 {
     //creation of object
      operations op1;
      op1.add();
      op1.sub();
      op1.mul();
      op1.div();
      return 0;
 }



//62. Operator Overloading Example.

#include <iostream>
using namespace std;

class Box
{
   public:

      double getVolume(void)
      {
         return length * breadth * height;
      }
      void setLength( double len )
      {
          length = len;
      }

      void setBreadth( double bre )
      {
          breadth = bre;
      }

      void setHeight( double hei )
      {
          height = hei;
      }
      // Overload + operator to add two Box objects.
      Box operator+(const Box& b)
      {
         Box box;
         box.length = this->length + b.length;
         box.breadth = this->breadth + b.breadth;
         box.height = this->height + b.height;
         return box;
      }
   private:
      double length;      // Length of a box
      double breadth;     // Breadth of a box
      double height;      // Height of a box
};
// Main function for the program
int main( )
{
   Box Box1;                // Declare Box1 of type Box
   Box Box2;                // Declare Box2 of type Box
   Box Box3;                // Declare Box3 of type Box
   double volume = 0.0;     // Store the volume of a box here

   // box 1 specification
   Box1.setLength(6.0);
   Box1.setBreadth(7.0);
   Box1.setHeight(5.0);

   // box 2 specification
   Box2.setLength(12.0);
   Box2.setBreadth(13.0);
   Box2.setHeight(10.0);

   // volume of box 1
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;

   // volume of box 2
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;

   // Add two object as follows:
   Box3 = Box1 + Box2;

   // volume of box 3
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;

   return 0;
}
