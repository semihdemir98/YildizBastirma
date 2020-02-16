/* Semih Demir
 * 18120205005
 * 16.02.2020
 * hw01.cpp
 */

#include <iostream>
using namespace std;

/*Bu programdaki void duzUcgen(int deger) fonksiyonu ekrana yıldızlardan 
oluşan bir üçgen yazar. Fonksiyonsadece [3, 15] aralığındaki
tek sayılarda çalışır. Kullanıcı geçerli bir değer girmezse 3 kez geçerli değer
istenilmelidir. 3 İstek sonunda yine geçerli değer girilmezse 
programdan çıkılmalıdır. Bu fonksiyonda sadece
for döngüsü kullanabilirsiniz.*/
void duzUcgen(int deger)
{

    deger = deger / 2 + 1;
    int bosluk = 0;
    int yildiz = 0;

    for (int i = 1; i <= deger; ++i)
    {

        for (bosluk = 0; bosluk <= deger - i; ++bosluk)
        {
            cout << "  ";
        }

        for (yildiz = 0; yildiz != 2 * i - 1; ++yildiz)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

/*Bu programdaki void tersUcgen(int deger) fonksiyonu ekrana 
yıldızlardan oluşan ters bir üçgen yazar.Fonksiyon sadece [3, 15] 
aralığındaki tek sayılarda çalışır. 
Kullanıcı geçerli bir değer girmezse 3 kez geçerli değer
istenilmelidir. 3 İstek sonunda yine geçerli değer girilmezse 
programdan çıkılmalıdır. Bu fonksiyonda sadece
while döngüsü kullanabilirsiniz.*/
void tersUcgen(int deger)
{

    deger = deger / 2 + 1;
    int bosluk = -1;
    int i = deger;
    int j = 0;

    while (i >= 1)
    {

        while (bosluk < deger - i)
        {
            cout << "  ";
            bosluk++;
        }
        j = i;
        while (j <= 2 * i - 1)
        {
            cout << "* ";
            ++j;
        }
        j = 0;
        while (j < i - 1)
        {
            cout << "* ";
            ++j;
        }
        cout << endl;
        --i;
        bosluk = -1;
    }
}

/*Bu programdaki void elmas(int deger) fonksiyonu ekrana yıldızlardan 
oluşan bir elmas şekli yazar. Fonksiyon
sadece [5, 15] aralığındaki tek sayılarda çalışır. Uygun parametre 
gönderilmezse ekrana hiçbir şey yazdırmadan
çıkar. Kullanıcı geçerli bir değer girmezse 3 kez geçerli 
değer istenilmelidir. 3 İstek sonunda yine geçerli değer
girilmezse programdan çıkılmalıdır. Bu fonksiyonda döngü kullanamazsınız.*/
void elmas(int deger)
{
    duzUcgen(deger);
    tersUcgen(deger);
}

int main()
{
    int secim = 0; // Kullanicinin sectigi sekil
    int tek_sayi = 0; // Secilen sekilin boyutu
    int ana_sayac = 0; // Hata Kontrol Degiskeni

    cout << "Sekil Seciniz -> "
         << "[1: Duz Ucgen, 2: Ters Ucgen, 3: Elmas, 0: Cikis]" << endl;

    while (ana_sayac != 3)
    {
        cin >> secim;
        switch (secim)
        {
            case 1:
            {
                int sayac = 0; // Hata Kontrol Degiskeni 2
                cout << "Duz Ucgeni Sectiniz. "
                    << "[3, 15] arasinda tek sayi giriniz !" << endl;
                while (sayac != 3)
                {
                    cin >> tek_sayi;
                    if ((tek_sayi >= 3 && tek_sayi <= 15) && tek_sayi % 2 == 1)
                    {
                        cout << endl;
                        duzUcgen(tek_sayi);
                        exit(EXIT_SUCCESS);
                    }
                    else
                        sayac++;
                    cout << "Hatali deger girdiniz. Tekrar Deneyiniz !"
                        << " Kalan Hakkiniz : " << 3 - sayac << endl;
                }
                break;
            }
            case 2:
            {
                int sayac = 0;
                cout << "Ters Ucgeni Sectiniz. "
                    << "[3, 15] arasinda tek sayi giriniz !" << endl;
                while (sayac != 3)
                {
                    cin >> tek_sayi;
                    if ((tek_sayi >= 3 && tek_sayi <= 15) && tek_sayi % 2 == 1)
                    {
                        cout << endl;
                        tersUcgen(tek_sayi);
                        exit(EXIT_SUCCESS);
                    }
                    else
                        sayac++;
                    cout << "Hatali deger girdiniz. Tekrar Deneyiniz !"
                        << " Kalan Hakkiniz : " << 3 - sayac << endl;
                }
                break;
            }
            case 3:
            {
                int sayac = 0;
                cout << "Elmas Ucgeni Sectiniz. "
                    << "[3, 15] arasinda tek sayi giriniz !" << endl;
                while (sayac != 3)
                {
                    cin >> tek_sayi;
                    if ((tek_sayi >= 3 && tek_sayi <= 15) && tek_sayi % 2 == 1)
                    {
                        cout << endl;
                        elmas(tek_sayi);
                        exit(EXIT_SUCCESS);
                    }
                    else
                        sayac++;
                    cout << "Hatali deger girdiniz. Tekrar Deneyiniz !"
                        << " Kalan Hakkiniz : " << 3 - sayac << endl;
                }
                break;
            }
            case 0:
            {
                cout << "Cikis Basarili" << endl;
                exit(EXIT_SUCCESS);
            }
            default:
            {
                ana_sayac++;
                cout << "Hatali deger girdiniz. Tekrar Deneyiniz !"
                    << " Kalan Hakkiniz : " << 3 - ana_sayac << endl;
                break;
            }
        }
    }
}
