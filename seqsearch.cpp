#include <iostream>
using namespace std;

int main() {
int a, b = 1;
int c;

     cout << "Masukan Nilai Array : ";
	 cin >> a;
	 
	int x[a] ;
	
	     for (int d = 1; d <=a; d++){
	     cout << "Masukan Data Ke " << d << " : ";
		 cin >> x[d];
	   }
	   
	 cout << "Nilai Yang Dicari : ";
     cin >> c;

        while (b < a && x[b] != c) 
			b++;

       if (x[b] == c)
            cout << "Nilai Ditemukan Pada Data ke " << b << endl;
				else
			cout << "Nilai Tidak Ditemukan" << endl;
	return 0;			
} 