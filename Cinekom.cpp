#include <iostream>
//ini adalah header penghubung antara Cinekom.cpp dan Logic.cpp > logic cpp dijadikan sebagai file inti untuk logic program ini 
#include "Logic.cpp"

using namespace std;

int main (){
//melakukan pendeklarasian variabel menu bertipe data int ( Integer )
int menu;
cout << " " << endl;
  cout << "|=========================================================================================================================|" << endl;
  cout << " " << endl;
  //Menampilkan home page yang berisi list menu yang terdapat pada program cinekom 
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMMMMMMMMMMWWXd:;dKWMMMMMMMMMMMMMMMMM" << "\t   <========== Cinekom - Cinema Amikom ==========> " << endl;
cout << "MMMMMMMMMMMMMWX0XWMMMMN0xoc,,,;cd0NWMMMMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMN0xc;cOWWKkl;,,,,,,,,,;lxKWMMMMMMMMMMMM" << "\t <================== MENU CINEKOM ==================> " << endl;
cout << "MMMMMMMMWKkl;,:lxxxo:,,,,,,,,;:lol:,:okXWMMMMMMMMM" << endl;
cout << "MMMMMWNOo:,;cdxdl;,,,,,,,,,:ldxkkkxoc;;:dOXWMMMMMM" << endl;
cout << "MMMN0xc;;:oxxo:,',,,,,,;cldOXKOxxdoloooc;;cxNMMMMM" << endl;
cout << "WKkl;,,:dkkkxc,'',,,;:oOXNNWMMWXkc,',;codlcxNMMMMM" << endl;
cout << "Xl,,,,,:xOxxkOOl,,;lkKNWMMMMMMW0c,',,,,,:okXMMMMMM" << endl;
cout << "Nx,,,,,,lkOKNWMXkx0XWWWWWWWMMMW0o:,,,,,,,,;lkXWMMM" << endl;
cout << "MXl,,,,,;oKWMMMMMWWNXK00000KXNWWNKko:,,,,,,,,:dONW" << endl;
cout << "MWO:,,,,,:xXMMMMWNKOkkkxxxxkkOKNWWWN0xl;,,,,,,,,cx" << "\t 1. Pesan Tiket "  << endl;
cout << "MMNx,,,,,,l0NMMWX0kxxxxxxxxxxxk0XWMMWWXOdc;,,,,,,;" << endl;
cout << "KO0Oc,,,,,;dKWMWKOkxxxdddddxxxxOKNMMMMMWKkdl:,,,;x" << "\t 2. List Film yang sedang tayang hari ini  " << endl;
cout << "c;ckd;,,,,,:kNWNKOkxxxdooodxxxxO0NMMMMMNOdkOkc,,lK" << endl;
cout << "d;;okl,',,',c0WWX0kxxxxxxxxxxxkOXWWKO0KOxdxOxc,:OW" << "\t 3. List Harga tiket cinekom " <<  endl;
cout << "Kl,:dx:,,;ldOXWMWX0Okkxxxxxxkk0XNW0l,,;;:cxkl,;xNM" << endl;
cout << "WO:,cxxood0WMMMMMWNXK0OOOOO0KXNWWXd;,,''':xd:,lKMM" << "\t 4. List Jam tayang "<< endl;
cout << "MNx;,lkOkxkXWWWWWWWWNNXXNNNWWMMMNk:,,,,',oxc,:OWMM" << endl;
cout << "MMKl,;lddoodddddddddddod0NWMMMMW0l,,,,,,lko;;dNMMM" << "\t 5. Informasi Cinekom "<< endl;
cout << "MMWOc,,,,,,,,,,,,,,,,,',dXNMMMWKd;,,,,,cO0xldKMMMM" << endl;
cout << "MMMNx;,,,,,,,,,,,,,,,,',lkO0000x:,,,,,:OWMWWWMMMMM" << "\t 6. Keluar "<< endl;
cout << "MMMMXo;;;;;;;;;;;;;;;;;;cddxxkkl,,,,,,dNMMMMMMMMMM" << endl;
cout << "MMMMWNKKKKKKKKKKkdxxdxxxxkkkkko;,,,,,lKMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMNx:::::::::::::;,,,,,:OWMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMM:;;;;;;;;;;;;;,,,,,MMMMMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl; 

  cout << " " << endl;
  cout << "|=========================================================================================================================|" << endl;
  cout << " " << endl;
cout << " Masukan menu yang ingin kamu pilih : ";
//Melakukan penginputan data dan memasukanya ke variabel menu
cin >> menu; 
//Membuat percabangan menggunakan switch case sebagai fitur pemilihan menu
switch(menu)
{
    //Jika case 1 / pilihan 1 dipilih program cinekom akan mengeksekusi menu Pemesanan tiket
    case 1: 
    //membuat variable rep bertipe data char
    char rep;
cout <<endl;
cout << "\t########::'########::'######:::::'###::::'##::: ##::::'########:'####:'##:::'##:'########:'########:" <<endl;
 cout << "\t##.... ##: ##.....::'##... ##:::'## ##::: ###:: ##::::... ##..::. ##:: ##::'##:: ##.....::... ##..::" <<endl;
 cout << "\t##:::: ##: ##::::::: ##:::..:::'##:. ##:: ####: ##::::::: ##::::: ##:: ##:'##::: ##:::::::::: ##::::" <<endl;
 cout << "\t########:: ######:::. ######::'##:::. ##: ## ## ##::::::: ##::::: ##:: #####:::: ######:::::: ##::::" <<endl;
 cout << "\t##.....::: ##...:::::..... ##: #########: ##. ####::::::: ##::::: ##:: ##. ##::: ##...::::::: ##::::" <<endl;
 cout << "\t##:::::::: ##:::::::'##::: ##: ##.... ##: ##:. ###::::::: ##::::: ##:: ##:. ##:: ##:::::::::: ##::::" <<endl;
 cout << "\t##:::::::: ########:. ######:: ##:::: ##: ##::. ##::::::: ##::::'####: ##::. ##: ########:::: ##::::" <<endl;
    cout << "\n\n Tekan Y untuk Lanjutkan atau N untuk kembali = ";
    //Melakukan penginputan data dan memasukanya ke variabel rep
    cin >> rep;
    //Memberikan logic jika pemesan menginput N / n maka program akan memanggil function exit yang artinya program akan selesai
    if (rep == 'N' || rep == 'n')
    {
        exit();
    }
cout << endl;
    //Memberikan logic jika pemesan menginput Y / y maka program akan memberi tahu pemesan sisa tempat duduk yang tersedia dan melakukan penginputan data selanjutnya
    do
    {
        cout << "Total " << sisabangku << " Tempat duduk yang tersisa.\n";
        cout << endl;
        cout << "Berapa tiket yang ingin kamu pesan ? ";
    //Melakukan penginputan data dan memasukanya ke variabel tiket
        cin >> tiket;
    //Memberikan logic jika tiket yang dipesan lebih dari 10 maka program cinekom akan menampilkan pesan "Maximal pembelian 10 Tiket" dan pemesan diminta untuk menginput ulang data yang sesuai 
        if (tiket > 10)
        {
            cout << "Maximal pembelian 10 Tiket\n\n";
        }
    } while (tiket > 10 || tiket > sisabangku);
    cout << "";
    //program memanggil function layar untuk menampilkan data tempat duduk yang tersedia dan sudah terbooking 
    layar();
    //program memanggil function input untuk menampilkan form input data pemesanan tiket yang akan ditampilkan diresult akhir
    input();
    void input();
    //program memanggil function exit untuk memberi tahu program jika pemesan sudah berhasil memesan tiket, program akan otomatis selesai
    void exit();
    cout << endl
         << endl;
    break;

    case 2: 
     //Jika case 2 / pilihan 2 dipilih program cinekom akan mengeksekusi menu List Film yang sedang tayang hari ini
cout << endl;
cout << endl;
cout << "\t  '##:::::::'####::'######::'########:::::'########:'####:'##:::::::'##::::'##:" <<endl;
cout << "\t   ##:::::::. ##::'##... ##:... ##..:::::: ##.....::. ##:: ##::::::: ###::'###:" <<endl;
cout << "\t   ##:::::::: ##:: ##:::..::::: ##:::::::: ##:::::::: ##:: ##::::::: ####'####:" <<endl;
cout << "\t   ##:::::::: ##::. ######::::: ##:::::::: ######:::: ##:: ##::::::: ## ### ##:" <<endl;
cout << "\t   ##:::::::: ##:::..... ##:::: ##:::::::: ##...::::: ##:: ##::::::: ##. #: ##:" <<endl;
cout << "\t   ##:::::::: ##::'##::: ##:::: ##:::::::: ##:::::::: ##:: ##::::::: ##:.:: ##:" <<endl;
cout << "\t   ########:'####:. ######::::: ##:::::::: ##:::::::'####: ########: ##:::: ##:" <<endl;
cout << endl;
cout << endl;
//Menampilkan data film berupa judul film dan kode film dalam bentuk tabel
cout << "\t No \t\tJudul Film  \t\t\t\t\t\t Kode Film " << endl;
cout << endl;
cout << "\t 1 \t\tWonder Woman 1987 \t\t\t\t\t    wm " << endl; 
cout << endl;
cout << "\t 2 \t\tAsih 2 \t\t\t\t\t\t\t    as " << endl ; 
cout << endl;
cout << "\t 3 \t\tMariposa \t\t\t\t\t\t    mp " << endl ; 
cout << endl;
cout << "\t 4 \t\tSoul \t\t\t\t\t\t\t    sl " << endl ; 
cout << endl;
cout << "\t 5 \t\tThe New Mutans \t\t\t\t\t\t    tm " << endl ; 
cout << endl;
cout << "\t 6 \t\tKimetsu no Yaiba the Movie: Mugen Train \t\t    ky " << endl ; 
cout << endl;
cout << "\t 7 \t\tBlack Widow \t\t\t\t\t\t    bw " << endl ; 
cout << endl;
cout << "\t 8 \t\tThe Eternals \t\t\t\t\t\t    te " << endl ; 
cout << endl; 
cout << endl;
    break;

    case 3: 
     //Jika case 3 / pilihan 3 dipilih program cinekom akan mengeksekusi menu List Harga Tiket Cinekom
cout << endl;
cout << endl;
cout << "\t\t'##::::'##::::'###::::'########:::'######::::::'###::::::::'########:'####:'##:::'##:'########:'########:" <<endl;
cout << "\t\t ##:::: ##:::'## ##::: ##.... ##:'##... ##::::'## ##:::::::... ##..::. ##:: ##::'##:: ##.....::... ##..::" <<endl;
cout << "\t\t ##:::: ##::'##:. ##:: ##:::: ##: ##:::..::::'##:. ##::::::::: ##::::: ##:: ##:'##::: ##:::::::::: ##::::" <<endl;
cout << "\t\t #########:'##:::. ##: ########:: ##::'####:'##:::. ##:::::::: ##::::: ##:: #####:::: ######:::::: ##::::" <<endl;
cout << "\t\t ##.... ##: #########: ##.. ##::: ##::: ##:: #########:::::::: ##::::: ##:: ##. ##::: ##...::::::: ##::::" <<endl;
cout << "\t\t ##:::: ##: ##.... ##: ##::. ##:: ##::: ##:: ##.... ##:::::::: ##::::: ##:: ##:. ##:: ##:::::::::: ##::::" <<endl;
cout << "\t\t ##:::: ##: ##:::: ##: ##:::. ##:. ######::: ##:::: ##:::::::: ##::::'####: ##::. ##: ########:::: ##::::" <<endl;
cout << endl;
cout << endl;
//Menampilkan data Harga Tiket berupa Hari, tipe tempat duduk, dan harga dalam bentuk tabel
cout << "\t\t\t Senin \t\t Selasa \t\t Rabu \t\t Kamis \t\t Jumat \t\t Sabtu \t\t Minggu " <<endl;
cout <<endl;
cout << "Biasa (B)  \t\t  35k \t\t  30k \t\t\t  30k \t\t  30k \t\t  40k \t\t  50k \t\t   50k  " <<endl;
cout <<endl;
cout << "VIP (V) \t\t  90k \t\t  80k \t\t\t  80k \t\t  80k \t\t  100k \t\t  120k \t\t   120k  " <<endl;
cout <<endl;
cout << "Sweetbox (S)\t\t  90k \t\t  80k \t\t\t  80k \t\t  80k \t\t  100k \t\t  120k \t\t   120k  " <<endl;
cout << endl;
cout << endl;
    break;
    case 4: 
    //Jika case 4 / pilihan 4 dipilih program cinekom akan mengeksekusi menu List Jam Tayang
    cout << endl;
    cout << endl;
cout << "\t\t\t\t '##:::::::'####::'######::'########:::::::::::'##::::'###::::'##::::'##:" <<endl;
cout << "\t\t\t\t  ##:::::::. ##::'##... ##:... ##..:::::::::::: ##:::'## ##::: ###::'###:" <<endl;
cout << "\t\t\t\t  ##:::::::: ##:: ##:::..::::: ##:::::::::::::: ##::'##:. ##:: ####'####:" <<endl;
cout << "\t\t\t\t  ##:::::::: ##::. ######::::: ##:::::::::::::: ##:'##:::. ##: ## ### ##:" <<endl;
cout << "\t\t\t\t  ##:::::::: ##:::..... ##:::: ##::::::::'##::: ##: #########: ##. #: ##:" <<endl;
cout << "\t\t\t\t  ##:::::::: ##::'##::: ##:::: ##:::::::: ##::: ##: ##.... ##: ##:.:: ##:" <<endl;
cout << "\t\t\t\t  ########:'####:. ######::::: ##::::::::. ######:: ##:::: ##: ##:::: ##:" <<endl;
    cout << endl;
    cout << endl;
    //Menampilkan data List Jam Tayang Film berupa Judul Film dan Jam Tayang Film dalam bentuk tabel
cout << "\t No \t\tJudul Film  \t\t\t\t\t\t    Jam Tayang Film " << endl;
cout << endl;
cout << endl;
cout << "\t 1 \t\tWonder Woman 1987 \t\t\t\t\t    08.00, 09.50, 11.30, 13.50, 15.00, 17.10, 19.00 " << endl; 
cout << endl;
cout << "\t 2 \t\tAsih 2 \t\t\t\t\t\t\t    08.30, 10.00, 11.50, 14.20, 16.20, 17.50, 19.20  " << endl ; 
cout << endl;
cout << "\t 3 \t\tMariposa \t\t\t\t\t\t    08.10, 09.50, 11.40, 14.00, 15.30, 17.40, 19.20  " << endl ; 
cout << endl;
cout << "\t 4 \t\tSoul \t\t\t\t\t\t\t    08.20, 09.50, 11.10, 13.50, 15.20, 17.30, 19.40  " << endl ; 
cout << endl;
cout << "\t 5 \t\tThe New Mutans \t\t\t\t\t\t    08.40, 10.50, 12.30, 14.50, 16.00, 18.10, 20.00  " << endl ; 
cout << endl;
cout << "\t 6 \t\tKimetsu no Yaiba the Movie: Mugen Train \t\t    09.00, 11.10, 13.20, 15.30, 17.50, 19.40, 28.30  " << endl ; 
cout << endl;
cout << "\t 7 \t\tBlack Widow \t\t\t\t\t\t    08.50, 10.30, 12.20, 14.30, 16.20, 18.00, 20.10  " << endl ; 
cout << endl;
cout << "\t 8 \t\tThe Eternals \t\t\t\t\t\t    07.30, 10.00, 12.50, 14.50, 16.50, 18.50, 20.50  " << endl ; 
cout << endl;
cout << endl;
    break;
    case 5:  
    //Jika case 5 / pilihan 5 dipilih program cinekom akan mengeksekusi menu Informasi CInekom
cout << endl;
cout << endl;
cout << "\t\t\t\t\t\t\t ######  #### ##    ## ######## ##    ##  #######  ##     ## " << endl;
cout << "\t\t\t\t\t\t\t##    ##  ##  ###   ## ##       ##   ##  ##     ## ###   ### " << endl;
cout << "\t\t\t\t\t\t\t##        ##  ####  ## ##       ##  ##   ##     ## #### #### " << endl;
cout << "\t\t\t\t\t\t\t##        ##  ## ## ## ######   #####    ##     ## ## ### ## " << endl;
cout << "\t\t\t\t\t\t\t##        ##  ##  #### ##       ##  ##   ##     ## ##     ## " << endl;
cout << "\t\t\t\t\t\t\t##    ##  ##  ##   ### ##       ##   ##  ##     ## ##     ## " << endl;
cout << "\t\t\t\t\t\t\t ######  #### ##    ## ######## ##    ##  #######  ##     ## " << endl;
cout << endl;
cout << endl;
//Menampilkan informasi mengenai program cinekom
cout << "\t\t\t\t\t\t\t      Cinekom adalah program pembelian tiket bioskop " << endl;
cout << endl;
cout << "\t\t\t\t\t Program ini dibuat dengan tujuan sebagai Tugas Akhir Mata Kuliah Algoritma dan Pemograman " <<endl;
cout << endl;
cout << endl;
cout << "\t\t\t\t\t\t\t\t\t     Author : Ade Febrian" << endl;
cout << endl;
cout << endl;
cout << "\t\t##     ## ##    ## #### ##     ## ######## ########   ######  #### ########    ###     ######        ###    ##     ## #### ##    ##  #######  ##     ## " << endl;
cout << "\t\t##     ## ###   ##  ##  ##     ## ##       ##     ## ##    ##  ##     ##      ## ##   ##    ##      ## ##   ###   ###  ##  ##   ##  ##     ## ###   ### " << endl;
cout << "\t\t##     ## ####  ##  ##  ##     ## ##       ##     ## ##        ##     ##     ##   ##  ##           ##   ##  #### ####  ##  ##  ##   ##     ## #### #### " << endl;
cout << "\t\t##     ## ## ## ##  ##  ##     ## ######   ########   ######   ##     ##    ##     ##  ######     ##     ## ## ### ##  ##  #####    ##     ## ## ### ## " << endl;
cout << "\t\t##     ## ##  ####  ##   ##   ##  ##       ##   ##         ##  ##     ##    #########       ##    ######### ##     ##  ##  ##  ##   ##     ## ##     ## " << endl;
cout << "\t\t##     ## ##   ###  ##    ## ##   ##       ##    ##  ##    ##  ##     ##    ##     ## ##    ##    ##     ## ##     ##  ##  ##   ##  ##     ## ##     ## " << endl;
cout << "\t\t #######  ##    ## ####    ###    ######## ##     ##  ######  ####    ##    ##     ##  ######     ##     ## ##     ## #### ##    ##  #######  ##     ## " << endl;
cout << endl;
cout << endl;
    break;
   case 6: 
   //Jika case 5 / pilihan 5 dipilih program cinekom akan memanggil function exit yang artinya program akan keluar / selesai
   exit();
    break;
    //Memberikan logic pada switch jika menu yang dipilih tidak ada maka program akan menampilkan pesan " Menu tidak ditemukan "
    default: cout << "Menu tidak ditemukan";
    break;
}
return 0;
}