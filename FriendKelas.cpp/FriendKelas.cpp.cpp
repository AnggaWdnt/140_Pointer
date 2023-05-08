#include <iostream>
#include <string>
using namespace std;

class siswa;

class orang {
private:
	string nama;
public:
	void setNama(string pNama);
	friend class siswa;
};
class siswa {
private:
	int id;
public:
	void seId(int pId);
	void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
	cout << id << endl << a.nama;
}
void orang::setNama(string pNama) {
	nama = pNama;
}
void siswa::seId(int pId) {
	id - pId;
}
int main(){
	orang Joko;
	Joko.setNama("Joko Kumat");
	siswa joko_siswa;
	joko_siswa.seId(1);
	joko_siswa.displayAll(Joko);
	return 0;
}