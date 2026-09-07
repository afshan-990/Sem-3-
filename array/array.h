// array.h
#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ostream;

template <class T>
class array
{
private:
    int lb;             // Lower bound (first valid index)
    int ub;             // Upper bound (last used index)
    T a[100];           // Maximum 100 elements

public:
    // Constructor
    array()
    {
        lb = 0;
        ub = -1;         // Empty array
    }

    // Set lower bound
    void setLB(int x)
    {
        lb = x;
    }

    // Set upper bound
    void setUB(int x)
    {
        ub = x;
    }

    // Get lower bound
    int getLB()
    {
        return lb;
    }

    // Get upper bound
    int getUB()
    {
        return ub;
    }

    // Create array by reading elements from user
    void create()
    {
        cout << "Enter lower bound: ";
        cin >> lb;

        cout << "Enter upper bound: ";
        cin >> ub;

        if (ub < lb)
        {
            cout << "Invalid bounds.\n";
            ub = lb - 1;
            return;
        }

        if (ub - lb + 1 > 100)
        {
            cout << "Array can contain maximum 100 elements.\n";
            ub = lb + 99;
        }

        cout << "Enter " << (ub - lb + 1) << " elements:\n";

        for (int i = lb; i <= ub; i++)
        {
            cin >> a[i - lb];
        }
    }

    // Insert at the end
    void insert_at_end(T key)
    {
        int size = ub - lb + 1;

        if (size >= 100)
        {
            cout << "Array is full.\n";
            return;
        }

        a[size] = key;
        ub++;
    }

    // Insert at the beginning
    void insert_at_beginning(T key)
    {
        int size = ub - lb + 1;

        if (size >= 100)
        {
            cout << "Array is full.\n";
            return;
        }

        for (int i = size; i > 0; i--)
        {
            a[i] = a[i - 1];
        }

        a[0] = key;
        lb--;
    }

    // Insert at a given position
    void insert_at_position(int pos, T key)
    {
        int size = ub - lb + 1;

        if (size >= 100)
        {
            cout << "Array is full.\n";
            return;
        }

        if (pos < lb || pos > ub + 1)
        {
            cout << "Invalid position.\n";
            return;
        }

        int index = pos - lb;

        for (int i = size; i > index; i--)
        {
            a[i] = a[i - 1];
        }

        a[index] = key;
        ub++;
    }

    // Delete at the end
    void delete_at_end()
    {
        if (ub < lb)
        {
            cout << "Array is empty.\n";
            return;
        }

        ub--;
    }

    // Delete at the beginning
    void delete_at_beginning()
    {
        if (ub < lb)
        {
            cout << "Array is empty.\n";
            return;
        }

        int size = ub - lb + 1;

        for (int i = 0; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }

        lb++;
    }

    // Delete at a given position
    void delete_at_position(int pos)
    {
        if (ub < lb)
        {
            cout << "Array is empty.\n";
            return;
        }

        if (pos < lb || pos > ub)
        {
            cout << "Invalid position.\n";
            return;
        }

        int index = pos - lb;
        int size = ub - lb + 1;

        for (int i = index; i < size - 1; i++)
        {
            a[i] = a[i + 1];
        }

        ub--;
    }

    // Friend output operator
    template <class U>
    friend ostream& operator<<(ostream&, const array<U>&);
};


// Definition of operator<<
template <class U>
ostream& operator<<(ostream& out, const array<U>& obj)
{
    if (obj.ub < obj.lb)
    {
        out << "Array is empty.";
        return out;
    }

    for (int i = 0; i <= obj.ub - obj.lb; i++)
    {
        out << obj.a[i] << " ";
    }

    return out;
}

#endif
