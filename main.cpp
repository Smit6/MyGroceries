#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
  vector<string> list; //array of 5 strings
  int numItems = 0;
  char input;
  int i = 0;
  string choice;
  do {
    cout << "\n==GROCERY LIST MANAGER==";
    cout << "\nEnter your choice: ";
    cout << "\n (A)dd an item";
    cout << "\n (Q)uit";
    cout << "\nYour choice (A/Q): ";
    cin >> input;
    if (input != 'A')
      break;
    cout << "enter what you bought" << endl;
    cin >> choice;
    list.push_back(choice);
    i++;
  } while (i);
  if (i == 0) {
    cout << "there are no items on the list." << endl;
    return 0;
  }
  cout << "your shopping list :" << endl;
  for (int j = 0; j < i; j++) {
    cout << j + 1 << ". " << list[j] << endl;
  }
  return 0;
}
