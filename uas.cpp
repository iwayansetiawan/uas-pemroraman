#include <iostream>

using namespace std;


class luasBangun{
public:
       float luas;
        virtual void cetakLuas();
        virtual float hitungLuas();
        virtual void set_isi();
};
void luasBangun::cetakLuas(){
       cout<<"Luas  = "<<luas<<endl;
}

class segitiga:public luasBangun{
private:
       float alas;
       float tinggi;
public:
       void segitiga::set_isi(){
              cout<<"Luas Segitiga \n"<<endl;
              cout<<"Alas = ";
              cin>>alas;
              cout<<"Tinggi = ";
              cin>>tinggi;
       }
       float segitiga::hitugLuas(){
              luas=0.5*alas*tinggi;
              return luas;
       }
};
class lingkaran:public luasBangun{
private:
       float pi;
       float r;
public:
       void lingkaran::set_isi(){
              cout<<"Luas Lingkaran \n"<<endl;
              cout<<"Jari-jari : ";
              cin>>r;
       }
       float lingkaran::hitungLuas(){
              pi=3.14;
              luas=pi*r*r;
              return luas;
       }
};
int main(){
       int pil;
       cout<<"---------------------------\n"<<endl;
       cout<<"Masukkan pilihan hitung :\n"<<endl;
       cout<<"1. Segitiga\n"<<endl;
       cout<<"2. Lingkaran\n"<<endl;
       cout<<"==================================\n"<<endl;
       cin>>pil;
       switch (pil){
       case 1:
              {
                     segitiga s;
                     s.set_isi();
                     s.hitungLuas();
                     s.cetakLuas();
                     break;
              }
       case 2:
              {
                     lingkaran l;
                     l.set_isi();
                     l.hitungLuas();
                     l.cetakLuas();
                     break;
              }
       default:
              cout<<"Pilihan Tidak Terdeia.";
              break;
       }
       system("pause");
       return 0;
}
