#include <iostream>
#include<valarray>


using namespace std;
class  matrix
{
protected:

valarray<int> data ;       //valarray that will simulate matrix
  int row, col;
  public:

  void createMatrix (int row, int col, int num[], matrix& mat) {
  mat.row = row;
  mat.col = col;
  mat.data.resize (row * col);
  for (int i = 0; i < row * col; i++)
    mat.data [i] = num [i];
}//The program takes matrix and checks if it is a square matrix
//A square matrix is one which has equal number of row and columns.
 bool isSquare (matrix mat){
     if (mat.row==mat.col){
        cout<<" True is a square matrix "<<endl;}
        else{
            cout<<" False is not a square matrix "<<endl;
        }

 }
 //The program takes matrix and checks if it is a square matrix
//A square matrix is one which has equal number of row and columns.
 bool isSymetric (matrix& mat){

     if(mat.row==mat.col){
     for(int i=0;i<mat.row;i++){
     for(int j=0;j<mat.col;j++)
        {
            if ((mat.data[i,j]) != (mat.data[j,i]))
                  return true;
            else if ((mat.data[i,j]) == -(mat.data[j,i]))
                    return false;

                }}}
                else
                    return false;
                }


//An identity matrix is a square matrix with main diagonal elements as 1 and rest 0
bool isIdentity (matrix mat){
   if (mat.row != mat.col)
    {
        cout << "Matrix is not a square matrix!";
        exit(0);
    }

for (int i = 0; i < mat.row; i++)
        for ( int j = 0; j < mat.col; j++)
        {
            if ((mat.data[mat.row,mat.col] != 1) && (mat.data[mat.col,mat.row] != 0))
            {
                return false ;

            }
        }}
        //compare between 2 matrix is equal or not
bool operator ==( matrix mat1, matrix mat2)

    {
        if(mat1.data[mat1.col]==mat2.data[mat2.col]&&(mat1.data[mat1.row]==mat2.data[mat2.row])){
                ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<mat2;
            cout <<" True is equal " <<endl;
          }
        else
            {  ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<mat2;
                cout <<" False not equal "<<endl ;}
    }
    //check between 2 matrix =!
    bool operator !=( matrix mat1, matrix mat2)

    {
        if(mat1.data[mat1.col]!=mat2.data[mat2.col]&&(mat1.data[mat1.row]!=mat2.data[mat2.row])){
              ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<endl<<mat2;
            cout <<"True there's not same" << endl ;
            //return true;
        }else
            {  ostream& operator<< (ostream& out, matrix mat1);
                ostream& operator<< (ostream& out, matrix mat2);
                cout<<mat1<<endl<<mat2;
                cout <<" false  there's same "<<endl ;
               //return false;
                }
    }
    //Rows and columns are interchanged, rows of original matrix
    //becomes column in transpose and columns of original matrix becomes rows in transpose
    matrix transpose(matrix mat){
        matrix newdata;
        newdata.col=mat.row;
        newdata.row=mat.col;
        newdata.data.resize(mat.col*mat.row);
        for (int i = 0; i < newdata.row; i++){
        for (int j = 0; j < newdata.col; j++){
         newdata.data[i*newdata.col + j]= mat.data[j *mat.col + i ] ;
        }}
        return newdata;
        }




//show the operator "like cout or print"
friend ostream& operator<< (ostream& out, matrix mat){
    for (int i = 0; i < mat.row; i++){
        for (int j = 0; j < mat.col; j++){
            out << mat.data[i*mat.col + j] << " ";
        }
        out << std::endl;
    }
   // out << std::endl;
    return out;
}

};

