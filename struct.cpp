#include <iostream>
using namespace std;

	//Deklarasi
	struct Mahasiswa{
		int student_id;
		float midterm_score; 
		float finalexam_score;	
		float totalquiz_score;
		float totaltask_score;
	};
	
	//Inisialisasi 
	Mahasiswa seluruhnya[50];
	
	
int main (){
	int n;
	//Proses
	cout<<"Masukkan jumlah mahasiswa: ";
	cin>>n;
	cout<<endl;
	
	cout<<"===DATA MAHASISWA==="<<endl;
	for(int i=0; i<n; i++){
		cout<<"Masukkan Data Mahasiswa "<<i+1<<endl;
		cout<<"Masukkan ID Mahasiswa: ";
		cin>>seluruhnya[i].student_id;
		cout<<"Masukkan Nilai Ujian Tengah Semester: ";
		cin>>seluruhnya[i].midterm_score;
		cout<<"Masukkan Nilai Ujian Akhir: ";
		cin>>seluruhnya[i].finalexam_score;
		cout<<"Masukkan Total Nilai Kuis: ";
		cin>>seluruhnya[i].totalquiz_score;
		cout<<"Masukkan Total Nilai Tugas: ";
		cin<<seluruhnya[i].totaltask_score;
		
		cout<<endl;
	}
	cout<<endl;
	getchar ();

//Finalisasi

float rerata=0; 
float hasil;
int idnum;
cout<<"===HASIL==="<<endl;
for (int i=0; i<n; i++){	
cout<<"ID Mahasiswa: "<<seluruhnya[i].student_id;
cout<<endl;
cout<<"Rata-Rata Nilai: "<<(seluruhnya[i].midterm_score+seluruhnya[i].finalexam_score +seluruhnya[i].totalquiz_score+seluruhnya[i].totaltask_score)/4;
cout<<endl<<endl;}

cout<<endl;
return 0;
		
}
