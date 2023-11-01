#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter for the following Exceptions : ";
    cout << "1 : int \n2 : float \n3:double \n4:char \n5:string \n";
    cin >> a;
    try
    {
        if (a == 1)
            throw 1;
        if (a == 2)
            throw 2.3f;
        if (a == 3)
            throw 3.2563;
        if (a == 4)
            throw 'c';
        if (a == 5)
            throw "string caught";
    }
    catch (int e)
    {
        cout << "Caught INT : " << e;
    }
    catch (float e)
    {
        cout << "Caught float : " << e;
    }
    catch (double e)
    {
        cout << "Caught double : " << e;
    }
    catch (char e)
    {
        cout << "Caught char : " << e;
    }
    catch (string e)
    {
        cout << "Caught string : " << e;
    }
    catch (...) // must be at the last [can get the data if any throw doesnt match]
    {           // not know exact exception
        cout << "All-Catch";
    }
    return 0;
}