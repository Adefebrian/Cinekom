#include <iostream>
using namespace std;
//membuat function
void layar();
void input();
void exit();
string check(string x);
// membuat varibel bertipe data int (Integer )
int sisabangku = 84;
int tiket = 0;
//membuat output list tempat duduk yang masih tersedia dan tidak menggunakan array 
string bangku[11][11]{
    {"\b", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J"},
    {"0", "*", "*", "*", "#", "#", "#", "#", "*", "*", "*"},
    {"1", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"2", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"3", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"4", "#", "#", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"5", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"6", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"7", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"8", "*", "*", "*", "*", "*", "*", "*", "*", "*", "*"},
    {"9", "##", "##", "##", "##", "##", "##", "##", "##", "##", "##"},
};
// Memberikan logic pada function layar()
void layar()
{
    cout << "\n\n";
    for (int i = 0; i < 11; i++)
    {
        //jika i sudah masuk ke bilangan 0 / 1 ( dalanm array ) program akan menampilkan " (======================== Layar Disini ========================) "
        if (i == 1)
        {
            cout << endl;
            cout << "\t    (======================== Layar Disini ========================) " << endl;
            cout << endl;
        }
        //jika i sudah masuk ke bilangan 10 / 9 ( dalanm array ) program akan menampilkan " Sweetbox "
        if (i == 10)
        {
            cout << endl;
            cout << "\t\t\t\t\tSweetbox\n";
            cout << endl;
        }
        for (int j = 0; j < 11; j++)
        {
            cout << bangku[i][j] << "\t";
        }
        cout << endl;
    }
}
// Memberikan logic pada function input()
void input()
{
    //membuat variabel bertipe data string 
    string bangku_check = "";
    string temp_bangku = "";
    string kode_film = "";
    string tipe = "";
    string wm = "Wonder Woman 1987";
    string as = "Asih 2";
    string mp = "Mariposa";
    string sl = "Soul";
    string tm = "The New Mutans";
    string ky = "Kimetsu no Yaiba the Movie: Mugen Train";
    string bw = "Black Widow";
    string te = "The Eternals";
    string b = "Biasa";
    string v = "VIP";
    string s = "Sweetbox";
    cout << endl;
    cout << " Pilih tipe bangku : ";
    cin >> tipe;
    //Memberikan logic pada input tipe bangku yaitu jika menginput v maka program akan menampilkan VIP, jika menginput b maka program akan menampilkan Biasa, jika menginput s maka program akan menampilkan SweetBox
    if (tipe == "v" || tipe == "V")
    {
        tipe = v;
    }
    else if (tipe == "b" || tipe == "B")
    {
        tipe = b;
    }
    else if (tipe == "s" || tipe == "S")
    {
        tipe = s;
    }
    else
    {
        tipe = b;
    }
    cout << endl;
    cout << " Masukan Kode Film : ";
    cin >> kode_film;
    //memberikan logic pada input kode film yaitu jika meningput kode film maka program akan menampilkan judul filmnya
    if (kode_film == "wm")
    {
        kode_film = wm;
    }
    else if (kode_film == "as")
    {
        kode_film = as;
    }
    else if (kode_film == "mp")
    {
        kode_film = mp;
    }
    else if (kode_film == "sl")
    {
        kode_film = sl;
    }
    else if (kode_film == "tm")
    {
        kode_film = tm;
    }
    else if (kode_film == "ky")
    {
        kode_film = ky;
    }
    else if (kode_film == "bw")
    {
        kode_film = bw;
    }
    else if (kode_film == "te")
    {
        kode_film = te;
    }
    else
    {
        kode_film = wm;
    }
    cout << endl;
    string tkt_pos[tiket];
    for (int i = 0; i < tiket; i++)
    {
        do
        {
            //membuat form input nomer tempat duduk yang akan dipilih
            cout << "\nMasukan " << (i + 1) << " nomer tempat duduk : ";
            cin >> temp_bangku;
            bangku_check = check(temp_bangku);
            //melakukan pengecekan ketersedian bangku, jika tersedia maka bisa diproses 
            if (bangku_check != "OK")
                cout << endl
                     << bangku_check;

        } while (bangku_check != "OK");
        // pesan
        tkt_pos[i] = temp_bangku;
        sisabangku--;
        //memberikan informasi jika bangku yang dipesan telah diproses dan berhasil dipesan
        bangku[(int)(temp_bangku[1]) - 48 + 1][(int)(toupper(temp_bangku[0])) - 64] = "#";
        cout << "Berhasil";
        cout << endl;
    }
    cout << "\n\n";
    //memberikan informasi pemesanan berupa jumlah tiket dan judul film yang dipesan
    cout << "\n\n Kamu berhasil memesan " << tiket << " tiket film " << kode_film << " di Cinekom.\n"
         << endl;
    cout << endl;
     //memberikan informasi pemesanan berupa tipe bangku yang dipesan
    cout << "Tipe bangku : " << tipe << endl;\
     //memberikan informasi pemesanan berupa Nomer tempat duduk yang dipesan
    cout << "Nomer tempat duduk yang dipesan: ";
    for (size_t i = 0; i < tiket; i++)
    { 
        cout << tkt_pos[i] << "  ";
    }
}

string check(string x)
{
    //Logic untuk memberikan panjang input 2 karakter
    if (x.length() == 2)
    {
        // Logic untuk melakukan pengecekan format yang dimasukan benar atau salah
        int sementara = toupper(x[0]);
        int simpan = x[1];
        if ((sementara >= 65 && sementara <= 90) && (simpan >= 48 && simpan <= 57))
        {
            if (toupper(x[0]) >= 'A' && toupper(x[0]) <= 'J')
            {
                //Logic untuk melakukan pengecekan inputan masih dalam tempat duduk yang tersedia
                if (bangku[(int)(x[1]) - 48 + 1][(int)(toupper(x[0])) - 64] == "*")
                {
                    return "OK";
                }
                else
                {
                    return "Tempat duduk sudah dibooking! silahkan pilih yang lain";
                }
            }
            else
            {
                return "Pastikan memilih tempat duduk dibarisan A sampai J";
            }
        }
        else
        {
            return "Masukan format yang benar";
        }
    }
    else
    {
        return "Kamu harus memasukan 2 karakter, contoh : B2 ";
    }
}
//menambahkan pesan "Terima Kasih" Jika function exit dieksekusi dan menyelesaikan program
void exit()
{
    cout << "\n\n Terima kasih!.";
    cout << endl
         << endl;
    exit(1);
}
