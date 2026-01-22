#include <iostream>
using namespace std;
int main()
{
	int row,coln;
	cout<<"Enter the no. rows and column : ";
	cin>>row>>coln;
	int mat[row][coln],rota[coln][row];
	cout<<"Enter the "<<row*coln<<" Elements of matrix: ";
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			cin>>mat[i][j];
		}
	}
	for(int i=0; i<row; i++) {
		for(int j=0; j<coln; j++) {
			rota[j][row-1-i]=mat[i][j];
		}
	}
	cout<<"The rotated of the matrix is :\n";
	for(int i=0; i<coln; i++) {
		for(int j=0; j<row; j++) {
			cout<<rota[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}