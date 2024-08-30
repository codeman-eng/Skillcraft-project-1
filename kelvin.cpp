#include <iostream>
using namespace std;

class ferhite {
private:
  double fer;

public:
  void getdata1() {
    cout << "Enter the temperature in ferhite: " << endl;
    cin >> fer;
    cout<< ""<<endl;
  }
  void cal1(double n) {
    double a = (n - 32) * 5 / 9;
    cout << "Temperature in celcius: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void cal2(double n) {
    double a = (n - 32) * 5 / 9 + 273.15;
    cout << "Temperature in kelvin: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void match1() {
    cout << "Enter 1 if you want to convert temperature in celcius" << endl;
    cout << "Enter 2 if you want to convert temperature in kelvin" << endl;
    int tem1;
    cin >> tem1;
    cout<< ""<<endl;
    switch (tem1) {
    case 1:
      getdata1();
      cal1(fer);
      break;
    case 2:
      getdata1();
      cal2(fer);
      break;
    default:
      cout << "Invalid input" << endl;
    }
  }
};

class celsius {
private:
  double cel;

public:
  void getdata2() {
    cout << "Enter the temperature in celsius: " << endl;
    cin >> cel;
    cout<< ""<<endl;
  }
  void cal3(double n) {
    double a = (n * 9 / 5) + 32;
    cout << "Temperature in ferhite: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void cal4(double n) {
    double a = n + 273.15;
    cout << "Temperature in kelvin: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void match2() {
    cout << "Enter 3 if you want to convert temperature in ferhite" << endl;
    cout << "Enter 4 if you want to convert temperature in kelvin" << endl;
    int tem2;
    cin >> tem2;
    cout<< ""<<endl;
    switch (tem2) {
    case 3:
      getdata2();
      cal3(cel);
      break;
    case 4:
      getdata2();
      cal4(cel);
      break;
    default:
      cout << "Invalid input" << endl;
    }
  }
};

class kelvin {
private:
  double kel;

public:
  void getdata3() {
    cout << "Enter the temperature in kelvin: " << endl;
    cin >> kel;
    cout<< ""<<endl;
  }
  void cal5(double n) {
    double a = (n - 273.15) * 9 / 5 + 32;
    cout << "Temperature in ferhite: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void cal6(double n) {
    double a = n - 273.15;
    cout << "Temperature in celcius: " << a <<"°"<< endl;
    cout<< ""<<endl;
  }
  void match3() {
    cout << "Enter 5 if you want to convert temperature in ferhite" << endl;
    cout << "Enter 6 if you want to convert temperature in celcius" << endl;
    int tem3;
    cin >> tem3;
    cout<< ""<<endl;
    switch (tem3) {
    case 5:
      getdata3();
      cal5(kel);
      break;
    case 6:
      getdata3();
      cal6(kel);
      break;
    default:
      cout << "Invalid input" << endl;
    }
  }
};

class decide : public ferhite, public celsius, public kelvin {
private:
  int choice;

public:
  void show() {
    cout << "Enter 7 if you have temperature in ferhite" << endl;
    cout << "Enter 8 if you have temperature in celcius" << endl;
    cout << "Enter 9 if you have temperature in kelvin" << endl;
    cout<< ""<<endl;
  }
  void match4() {
    cout << "Enter your choice: ";
    cin >> choice;
    switch (choice) {
    case 7:
      match1();
      break;
    case 8:
      match2();
      break;
    case 9:
      match3();
      break;
    default:
      cout << "Invalid input" << endl;
    }
  }
};

int main() {
  cout << "^^^^^^^^^^^^^^^Temperature Converter^^^^^^^^^^^^^^^" << endl;
  cout<< ""<<endl;
  decide obj;
  obj.show();
  obj.match4();

  return 0;
}