#include <iostream>
#include "m.h"

#include<valarray>
using namespace std;
class matrix{

};
int main()
{

  //ex.iSidentity int data1 [] = {1,0,0,0,1,0,0,0,1};
 matrix  mat1,mat2,mat3;
  // ex.not symmetric int data1 [] = {0 ,1,-2, -1, 0, 3, 2, -3, 0};
int data1 [] = {1,5,7,2,6,8};

//ex.ISsquare int data1[]={10,20,20,10};
  int data2 [] = {13,233,3,4,5,6,6,};
  int data3 [] = {10,100,10,100,10,100,10,100};

   createMatrix (2,3, data1, mat1);
  createMatrix (2, 3, data2, mat2);
  createMatrix (4, 2, data3, mat3);
 //isIdentity ( mat1);

  cout<<mat1<<endl;
  //cout<<mat2<<endl;
 // cout<<mat3<<endl;
     //operator !=( mat3,  mat3);
     //operator==(mat2,mat1);
    cout<<transpose( mat1);
     //isSquare ( mat1);
//if (isSymetric(mat1))
       // cout << "Yes";
    //else
       // cout << "No";
   // return 0;

    //isSymetric ( mat1);

    /*if (isIdentity(mat2))
        cout << "Yes is Identity";
    else
        cout << "Not is Identity";
    return 0;
*/
//operator !=(  mat1,  mat2);
// The next code will not work until you write the functions


     // cout << (mat1 + mat3) << endl << endl;
     // cout << (mat3 + mat3) << endl << endl;

      //++mat1;
      //cout << mat1 << endl;

      //mat1+= mat3 += mat3;
      //cout << mat1 << endl;
      //cout << mat2 << endl;
     // cout << mat3 << endl;
}
