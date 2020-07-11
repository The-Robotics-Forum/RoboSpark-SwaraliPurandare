#include<bits/stdc++.h>
using namespace std;

class String
{
public:
    int size;
    char *arr;

    String()
    {
        size = 15;
        arr = new char[15];
    }

    String(int size)
    {
        this->size = size;
        arr = new char[size];
    }

    String(char *s)
    {
        size = strlen(s);
        arr = new char[size];

        for (int i = 0; i < size; i++)
            arr[i] = s[i];
    }
    String operator+(String s);
    String operator*(int n);
    void display();
};

String String::operator+(String s)
{
    String temp(size + s.size);

    int k = 0;
    
    for (int i = 0; i < size; i++)
        temp.arr[k++] = arr[i];

    for (int i = 0; i < s.size; i++)
        temp.arr[k++] = s.arr[i];

    return temp;
}

String String::operator*(int n)
{
    String temp(size * n);
    
    int k = 0;

    while (n--)
    {
        for (int i = 0; i < size; i++)
            temp.arr[k++] = arr[i];
    }

    return temp;
}

void String::display()
{
    cout << "String: " << arr << endl;
}

int main()
{
    String dhawal = "Dhawal";
    String khapre = "Khapre";

    (dhawal + khapre).display();
    (dhawal * 3).display();
    return 0;
}