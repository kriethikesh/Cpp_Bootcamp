#include <iostream>
using namespace std;
int main()
{
	int row,coln;
	cout<<"Enter the no. rows and column : ";
	cin>>row>>coln;
	int mat[row][coln],inter_coln[row][coln];
	cout<<"Enter the "<<row*coln<<" Elements of matrix: ";
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			cin>>mat[i][j];
		}
	}
	for(int i=0; i<row; i++) {
		inter_coln[i][row-1]=mat[i][0];
		inter_coln[i][0]=mat[i][row-1];
	}
	for(int i=0; i<row; i++) {
		for(int j=1; j<coln-1; j++) {
			inter_coln[i][j]=mat[i][j];
		}
	}
	cout<<"The rotated of the matrix is :\n";
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			cout<<inter_coln[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}