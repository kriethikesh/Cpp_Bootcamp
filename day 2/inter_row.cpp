#include <iostream>
using namespace std;
int main()
{
	int row,coln;
	cout<<"Enter the no. rows and column : ";
	cin>>row>>coln;
	int mat[row][coln],inter_row[row][coln];
	cout<<"Enter the "<<row*coln<<" Elements of matrix: ";
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			cin>>mat[i][j];
		}
	}
	for(int i=0; i<coln; i++) {
		inter_row[row-1][i]=mat[0][i];
		inter_row[0][i]=mat[row-1][i];
	}
	for(int i=1; i<row-1; i++) {
		for(int j=0; j<coln; j++) {
			inter_row[i][j]=mat[i][j];
		}
	}
	cout<<"The rotated of the matrix is :\n";
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			cout<<inter_row[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}