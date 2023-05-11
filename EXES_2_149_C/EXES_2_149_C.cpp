#include <iostream>

using namespace std;

int wira[11];
int n;
int i;

void input() {
    while (true) {
        cout << " enter the number of elements in the array : ";
        cin >> n;
        if (n <= 11)
            break;
        else
            cout << "\nArray should have and maximum 11 element.\n\n";
    }
    cout << "\n----------------------\n";
    cout << " Enter Array Elements\n";
    cout << "---------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ".";
        cin >> wira[i];

    }

}

void LinearSearch() {
    int lowerbound = 0;
    int upperbound = n - 1;
    while (lowerbound <= upperbound) {
        int mid = (lowerbound + upperbound) / 2;
        if (wira[mid] == n) {
            cout << " KETEMU YA SAYANG " << endl;
            return;
        }
        else if (wira[mid] < n) {
            lowerbound = mid + 1;
        }
        else {
            upperbound = mid - 1;
        }
    }
    cout << " LAH KOK ILANG? " << endl;
}
int main()
{
    input();
    LinearSearch();
}
