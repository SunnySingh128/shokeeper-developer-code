// #include <iostream>
// #include <string>
// #include <vector>
// using namespace std;
// // ------------------------------------------------------use for input---------------------------------
// class Main
// {
// protected:
//   string item;
//   int amount;

// public:
// };
// class shopkeeper : public Main
// {
// protected:
//   vector<string> str;
//   vector<string> str1 = {"oil", "shampoo", "soap", "tofee", "cake", "kurkure"};
//   vector<int> num;
//   vector<int> total;
//   vector<int> total1;
//   vector<int> total2;

// public:
//   shopkeeper()
//   {
//     int a;
//     int i = 0;
//     int f;
//     cout << "fill all in small letters" << endl;
//     while (true)
//     {
//       cout << "shop's name:" << endl;
//       // input for shop name
//       getline(cin, item);
//       // -----------------
//       // store shop name
//       str.push_back(item);
//       // --------------------------
//       while (i < str1.size())
//       {
//         cout << "Item name: " << str1[i] << endl;
//         cout << "enter the amount" << endl;
//         // input for price of item
//         cin >> amount;
//         // ------------------------------
//         // store price
//         num.push_back(amount);
//         // ----------------------------------
//         i++;
//       }
//       i = 0;
//       cout << "for adding another shop item press 1 else press 0" << endl;
//       cin >> a;
//       if (a == 0)
//       {
//         break;
//       }
//       cin.ignore();
//     }
//   }
// };
// // -----------------------------------------------------------------------------for items------------------------
// class final : public shopkeeper
// {
//   int sum = 0;
//   int sum1 = 0;
//   int sum2 = 0;
//   int sum3 = 0;
//   int sum4 = 0;
// public:
//   //------------------------------------------------------ check for individual item------------------------------
//   void item1()
//   {
//     int a1 = 0;
//     int j1 = 0;
//     int i1 = 0;
//     int g1 = 0;
//     while (i1 < num.size())
//     {
//       a1 = j1;
//       // ------------find low amount-------
//       int size1 = num.size();
//       int min = 1000000;
//       for (int k = a1; k < size1; k += 6)
//       {
//         if (num[k] < min)
//         {
//           min = num[k];
//           g1 = k;
//         }
//       }
//       int size2=str1.size();
//       int h = g1 / size2;
//       cout << "minimum amount for " << str1[a1] << " is " << min << " from shop " << str[h] << endl;
//       sum4 = sum4 + min;
//       j1++;
//       if(num.size()==str1.size()){
//         i1++;
//       }else{
//       i1+=2;
//       }
//     }
//   }
//   // ----------------------------------------------------------check for custom individual item-------------------------------------
//   void items()
//   {
//     string l;
//     int c;
//     int a = 0;
//     int i = 0;
//     while (i < num.size())
//     {
//       //------- check condition
//       // cout << endl
//       //      << "find individual item at low amount write 1 else 0 " << endl;
//       // cin >> c;
//       // if (c == 0)
//       // {
//       //   break;
//       // }
//       cout << "type the item name which you find" << endl;
//       // -----checking for item repeat-----------
//       cin.ignore();
//       getline(cin, l);
//       string f;
//       string n = l;
//       if (f == l)
//       {
//         cout << "item repeat" << endl;
//         break;
//       }
//       f = n;
//       // ----------check item is present or not----
//       int k = 0;
//       for (int i = 0; i < str1.size(); i++)
//       {
//         if (str1[i] == l)
//         {
//           a = i;
//           k++;
//           break;
//         }
//       }
//       if (k == 0)
//       {
//         cout << "no item found" << endl;
//         break;
//       }
//       // ------------find low amount-------
//       int size1 = num.size();
//       int min = 1000000;
//       for (int k = a; k < size1; k += 2)
//       {
//         if (num[k] < min)
//         {
//           min = num[k];
//         }
//       }
//       cout << "minimum amount for " << str1[a] << " is " << min << " from shop ";
//       if (a <= 1)
//       {
//         cout << str[0] << endl;
//       }
//       sum = sum + min;
//       i++;
//     }
//   }
//   // -------------------------------------------------------to calculate all over price----------------------------------
//   void allover()
//   {
//     int i = 0;
//     int j=str1.size();
//     while (i < num.size())
//     {
//       sum1 = 0;
//       int size=str1.size();
//       int g=j/size;
//       for (int k = i; k <g*size; k++)
//       {
//         sum1 += num[k];
//       }
//       total.push_back(sum1);
//       i = i + 6;
//       j+=6;
//     }
//   }
//   // ------------------------------------------------divides in group-----------------------------------------
//   void benefit()
//   {
//     int k = 0;
//     int a = 3;
//     int c = 0;
//     int size=str1.size();
//     int d =size/2;
//     int b = 6;
//     while (k < num.size())
//     {
//       sum2=0;
//       for (int i = c; i < a; i++)
//       {
//         sum2 += num[i];
//       }
//       c = a + 3;
//       a += 6;
//       total1.push_back(sum2);
//       sum3=0;
//       for (int j = d; j < b; j++)
//       {
//         sum3 += num[j];
//       }
//       d = b + 3;
//       b += 6;
//       total2.push_back(sum3);
//       k = k + 6;
//     }
//   }
//   // ----------------------------------------------------final result-----------------------------------------------------------
//   void show()
//   {
//     int min = 100000;
//     for (int i = 0; i < total.size(); i++)
//     {
//       if (total[i] < min)
//       {
//         min = total[i];
//       }
//     }
//     cout << "total amount of item from individual shops: " << sum4 << endl;
//     cout << "allover item price from one shop:" << min << endl;
//     int min1 = 10000;
//     int d = 0;
//     for (int k = 0; k < total1.size(); k++)
//     {
//       if (total1[k] < min1)
//       {
//         min1 = total1[k];
//         d = k;
//       }
//     }
//     cout << "first three products of low amount " << min1 << " is purchased from shop " << str[d] << endl;
//     int min2 = 10000;
//     int a = 0;
//     for (int j = 0; j < total2.size(); j++)
//     {
//       if (total2[j] < min2)
//       {
//         min2 = total2[j];
//         a = j;
//       }
//     }
//     cout << "last three products of amount " << min2 << " is purchased from the shop " << str[a] << endl;
//     int total3 = min1 + min2;
//     cout<<total3<<endl;
//     int s=min>sum4?sum4:min;
//     cout<<s<<endl;
//     int f=s>total3?total3:s;
//     cout<<f<<endl;
//     if(min==f){
//     cout << "allover item price from one shop:" << min << endl;
//     }else if(sum3==f){
//       cout << "allover item price from one shop:" << sum3 << endl;
//     }else{
//     cout << "first three products of low amount " << min1 << " is purchased from shop " << str[d] << endl;
//         cout << "last three products of amount " << min2 << " is purchased from the shop " << str[a] << endl;
//         cout<<total3<<endl;
//     }
//   }
// };
// // -----------------------------------------------------main function ---------------------------------------------------------------
// int main()
// {
//   final ob1;
//   ob1.item1();
//   ob1.allover();
//   ob1.benefit();
//   ob1.show();
//   // for individual itemtushar
//   int n;
//   cout<<"if you want particular item"<<endl;
//   cin>>n;
//     ob1.items();
// }
#include <iostream>

class Bitwise {
private:
    int value;

public:
    Bitwise(int val) : value(val) {}

    // Overload << operator
    Bitwise operator<<(int bits) {
        return Bitwise(value << bits);
    }

    // Overload << operator for output
    friend std::ostream& operator<<(std::ostream& os, const Bitwise& bw) {
        os << bw.value;
        return os;
    }
};

int main() {
    Bitwise bw(5);
    Bitwise result = bw << 2;

    std::cout << "Result: " << result << std::endl;

    return 0;
}
