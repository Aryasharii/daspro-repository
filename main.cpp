#include <fstream>
#include <iostream>
#include <string>

using namespace std;

string dataName[1000], name, searchList, text, monthLatin;
string dataOutput[6] = {"WiFi\t",   "Listrik", "Gas\t",
                        "Air PDAM", "Galon",   "Kebersihan"};
fstream fileName, fileMonth, fileCash, limit, fileReport;
int dataMonth[1000], dataCash[1000], checkPoint[100], limitSet;
int total, totalInput, totalOutput, option, date, output, month, cash, i, j, k, l;
int bulan[7][12], bulan2;

// nama fungsi
int functionInputUserData(string name, int month, int cash);
int functionOutputUserData(int output, int month, int total);
int findUser(string searchList);
int outputReport(int total);
string translateMonth(int month);

int main() {
  system("pause");
  // Menentukan limit untuk batasan
  i = i;
  limit.open("limit.txt", ios::in);
  limit >> limitSet;
  limit.close();
  i = limitSet;
  // cout << "limitset : " << limitSet << endl;
  // Membaca data fileName
  j = 0;
  fileName.open("fileName.txt", ios::in | ios::app);
  while (!fileName.eof()) {
    getline(fileName, dataName[j], '\n');
    j++;
  }
  fileName.close();
  // Membaca data fileCash
  j = 0;
  fileCash.open("fileCash.txt", ios::in | ios::app);
  while (!fileCash.eof()) {
    fileCash >> dataCash[j];
    j++;
  }
  fileCash.close();
  // Membaca data fileMonth
  j = 0;
  fileMonth.open("fileMonth.txt", ios::in | ios::app);
  while (!fileMonth.eof()) {
    fileMonth >> dataMonth[j];
    j++;
  }
  fileMonth.close();
  // batasnya
  cout << endl;
MENU : {
  cout << "=====================" << endl;
  cout << "        MOMENT       " << endl;
  cout << "=====================" << endl;
  cout << "1. Input pemasukan" << endl;
  cout << "2. Input pengeluaran" << endl;
  cout << "3. Laporan keuangan" << endl;
  cout << "4. Cari data" << endl;
  cout << "0. Exit" << endl;
  cout << "\n Masukan pilihan Anda : ";
  cin >> option;
}

  while (option != 0) {
    switch (option) {
    case 1:
      functionInputUserData(name, month, cash);
      cout << endl;
      for (j = 0; j < i; j++) {
        cout << "Nama user         : " << dataName[j] << endl;
        cout << "Uang yang disetor : " << dataCash[j] << endl;
        cout << "Diinput pada bulan : " << dataMonth[j] << endl;
      }
      break;
    case 2:
      functionOutputUserData(output, month, total);
      break;
    case 3:
      outputReport(total);
      break;
    case 4:
      findUser(searchList);
      break;
    case 0:
      break;
    }
    system("pause");
    system("cls");
      cout << "=====================" << endl;
  cout << "        MOMENT       " << endl;
  cout << "=====================" << endl;
    cout << "1. Input pemasukan" << endl;
    cout << "2. Input pengeluaran" << endl;
    cout << "3. Laporan keuangan" << endl;
    cout << "4. Cari data" << endl;
    cout << "0. Exit" << endl;
    cout << "\n Masukan pilihan Anda : ";
    cin >> option;
  }
  // Ini untuk masukin nama ke datanya
  fileName.open("fileName.txt", ios::out);
  for (j = 0; j < i; j++) {
    fileName << dataName[j] << endl;
  }
  fileName.close();
  // Ini untuk masukin uang ke datanya
  fileCash.open("fileCash.txt", ios::out);
  for (j = 0; j < i; j++) {
    fileCash << dataCash[j] << endl;
  }
  fileCash.close();
  // Ini untuk masukin bulan ke datanya
  fileMonth.open("fileMonth.txt", ios::out);
  for (j = 0; j < i; j++) {
    fileMonth << dataMonth[j] << endl;
  }
  fileMonth.close();

  // Ini untuk membuat nilai batas ke txt
  limitSet = i;
  limit.open("limit.txt", ios::out);
  limit << limitSet;
  fileMonth.close();

  return 0;
}

// fungsi input data pemasukan
int functionInputUserData(string name, int month, int cash) {
  cout << endl;
  cin.ignore();
  cout << "Silahkan ketik nama anda : ";
  getline(cin, name);
  for (j = 0; name[j] != '\0'; j++) // for making string to uppercase
  {
    if (name[j] >= 'a' && name[j] <= 'z') { // checking for lowercase characters
      name[j] = name[j] - 32;               // converting lowercase to uppercase
    }
  }
  cout << "Nama dalam huruf cetak : " << name << endl;
  cout << "Jumlah uang yang disetor : ";
  cin >> cash;
  cout << endl;
  cout << "Data dimasukkan pada" << endl;
  cout << "Bulan   : ";
  cin >> month;
  dataName[i] = name;
  dataCash[i] = cash;
  dataMonth[i] = month;
  i++;
  return i;
}

// fungsi input data pengeluaran
int functionOutputUserData(int output, int month, int total) {
  cout << "Pengeluaran Setiap Bulan " << endl;
  cout << "[1] WiFi       = Rp 500.000" << endl;
  cout << "[2] Listrik    = Rp 200.000" << endl;
  cout << "[3] Gas        = Rp 20.000" << endl;
  cout << "[4] Air PDAM   = Rp 250.000 " << endl;
  cout << "[5] Galon      = Rp 900.000" << endl;
  cout << "[6] Kebersihan = Rp 50.000" << endl;
  cout << "Masukkan bulan pengeluaran [1-12] : ";
  cin >> bulan2;
  switch (bulan2) {
  case 1:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][0];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][0];
      totalOutput += bulan[j][0];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 2:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][1];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][1];
      totalOutput += bulan[j][1];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 3:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][2];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][2];
      // cin >> output;
      totalOutput += bulan[j][2];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 4:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][3];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][3];
      totalOutput += bulan[j][3];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 5:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][4];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][4];
      totalOutput += bulan[j][4];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 6:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][5];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][5];
      totalOutput += bulan[j][5];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 7:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][6];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][6];
      totalOutput += bulan[j][6];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 8:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][7];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][7];
      totalOutput += bulan[j][7];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 9:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][8];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][8];
      totalOutput += bulan[j][8];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 10:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][9];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][9];
      // cin >> output;
      totalOutput += bulan[j][9];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 11:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][10];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][10];
      // cin >> output;
      totalOutput += bulan[j][10];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  case 12:
      totalOutput=0;
    for (j = 1; j <= 6; j++) {
      bulan[j][11];
      cout << dataOutput[j - 1] << " : ";
      cin >> bulan[j][11];
      // cin >> output;
      totalOutput += bulan[j][11];
    }
    cout << "Total pengeluaran : " << totalOutput << endl;
    break;
  }
  return 0;
}
// fungsi menampilkan laporan
int outputReport(int total) {
  cout << "Masukkan bulan laporan [1-12] : ";
  cin >> month;
  for (j = 0; j < i; j++) {
    if (dataMonth[j] == month) {
      totalInput += dataCash[j];
    }
  }

  fileReport.open("fileReport.txt", ios::out);
  fileReport << "========LAPORAN BULAN " << month << "========" << endl;
  fileReport << "===============================" << endl;
  fileReport << "NAMA\t"
             << "|"
             << "\tUANG" << endl;
  fileReport << "-------------------------------" << endl;
  for (j = 0; j < i; j++) {
    if (dataMonth[j] == month) {
      fileReport << dataName[j] << "\t"
                 << "|"
                 << "\t" << dataCash[j] << endl;
    }
  }
  fileReport << "===============================" << endl;
  fileReport << "TOTAL PEMASUKAN   : Rp. " << totalInput << endl;
  fileReport << "===============================" << endl;
  fileReport << endl;
  fileReport << "PENGELUARAN" << endl;
  fileReport << "-------------------------------" << endl;
  for (int k = 1; k <= 6; k++) {
    fileReport << "[" << k << "]" << dataOutput[k - 1]
               << "\t : " << bulan[k][month-1] << endl;
  }
  fileReport << "===============================" << endl;
  fileReport << "TOTAL PENGELUARAN : Rp. " << totalOutput << endl;
  fileReport << "===============================" << endl;
  fileReport << endl;
  total = totalInput - totalOutput;
  fileReport << "===============================" << endl;
  fileReport << "TOTAL UANG SISA   : Rp. " << total << endl;
  fileReport << "===============================" << endl;
  fileReport.close();
  return 0;
}

// fungsi pencarian
int findUser(string searchList) {
  cin.ignore();
  cout << "Silahkan ketik nama yang dicari : ";
  getline(cin, searchList);
  for (j =0;searchList[j]!='\0';j++)
  {
      if (searchList[j]>='a' && searchList[j] <= 'z')
      {
          searchList[j]=searchList[j]-32;
      }
  }
  k = 0;
  for (j = 0; j <= i; j++) {
    if (dataName[j] == searchList) {
      checkPoint[k] = j;
      cout << searchList << " ada pada index ke - " << j << endl;
      cout << "Dengan data berikut" << endl;
      cout << "Nama  : " << dataName[j] << endl;
      cout << "Uang  : " << dataCash[j] << endl;
      cout << "Bulan : " << dataMonth[j] << endl;
      k++;

    } else {
    }
  }
  cout << endl;
  return 0;
}
