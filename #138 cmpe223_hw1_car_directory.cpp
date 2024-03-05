/* Write a C++ program to implement a car service directory.
Structure contains name & surname of the owner, car id, model,
registration date & next service date as day, month, year & phone
number of the car owner. Write a user-defined function for each menu option.
Your program should have the following menu:
Menu:
1- Add a new car to directory
2- Delete a car from the directory
3- List available cars in the directory
4- Search a car:
 A – Search according to car id
 B – Search according to owner_name
5- Update car information
6- Sort according to car id
7- Sort according to owner_name
8- Quit */
#include <iostream>
#include <cstring>
using namespace std;

struct date
{
    int day, month, year;
};

struct car
{
    int ID;
    char owner_name[20];
    char owner_surname[20];
    char model[20];
    struct date reg_date;
    struct date service_date;
    char phone_no[20];
};

struct carDirectory
{
    struct car cars[100];
    int count;
} directory; // this is an instance
/*An instance refers to a specific occurrence or object created
from a class or struct. It is a concrete representation of a class
or struct that holds its own unique data and state.
When you define a class or struct, you are essentially creating a
blueprint or template for objects of that type. Instances are
created from that blueprint, and each instance has its own set of
data, properties, and behavior based on the class or struct definition.
Instances allow you to work with multiple objects of the same type,
each with its own distinct characteristics and behavior. You can
create multiple instances of a class or struct, manipulate their
data, call their member functions, and interact with them independently.*/

void addCar()
{
    if (directory.count >= 100)
    // we used a dot to access structure members, here: count
    {
        cout << "Car directory is full. Cannot add more cars.\n";
        return;
        /*Eventhough void func. can't have a return  value, it is
        used here to exit the function early as it would be
        rediculous to prompt the user to add a new car after
        telling him that the directory is full.
        Could've replaced it with an else.*/
    }

    struct car newCar;
    // Declared variable named `newCar` of type `car` structure.
    // By declaring struct car newCar; , you are creating a new
    // instance of the `car` structure.

    cout << "Enter car ID: ";
    cin >> newCar.ID;

    cout << "Enter owner's name: ";
    cin >> newCar.owner_name;

    cout << "Enter owner's surname: ";
    cin >> newCar.owner_surname;

    cout << "Enter car model: ";
    cin >> newCar.model;

    cout << "Enter registration date (day month year[dd/mm/yyyy]): ";
    cin >> newCar.reg_date.day >> newCar.reg_date.month >> newCar.reg_date.year;

    cout << "Enter next service date (day month year[dd/mm/yyyy]): ";
    cin >> newCar.service_date.day >> newCar.service_date.month >> newCar.service_date.year;

    cout << "Enter owner's phone number: ";
    cin >> newCar.phone_no;

    directory.cars[directory.count] = newCar;
    directory.count++;

    cout << "Car added successfully.\n";
}

void deleteCar()
{
    int carID;
    // declared variable `carID` to store ID of car to be deleted

    cout << "Enter the ID of the car to delete: ";
    cin >> carID;

    int foundIndex = -1;

    for (int i = 0; i < directory.count; i++)
    // for loop used to iterate through all cars in directory
    {
        if (directory.cars[i].ID == carID)
        /*if statement checks if the ID of the current
        car (directory.cars[i].ID) is equal to the carID
        entered by the user.*/
        {
            foundIndex = i;
            /*Current value of `i`(not [i] of index) is assigned
            to the variable `foundIndex` then loop is terminated.*/
            break;
            // so loop doesn't iterate after finding the matching car ID
        }
    }

    if (foundIndex != -1) // if the index is found, proceed
    /* if the if statement is true, it means that a car
    with the given ID was found then we enter further */
    {
        for (int i = foundIndex; i < directory.count - 1; i++)
        /*loop iterates as long as `i` (i.e the index no.) of
        the found car is less than the `directory.count-1`.*/
        {
            directory.cars[i] = directory.cars[i + 1];
            /* directory.cars[i] refers to the i-th element in the
            directory.cars array. In the context of the previous code
            snippet, i represents the index of the car that needs to
            be deleted from the directory.
            directory.cars[i+1] refers to the next element in the
            directory.cars array. This element is the one
            immediately following the car at index i. By accessing
            this element, we can obtain the value that will
            overwrite the car at index i. */
            /* EX: Kia, BMW, Ford, Audi. Delete BMW.
            1-iteration: Kia, Ford, Ford, Audi.
            2-iteration: Kia, Ford, Audi, Audi. */
        }

        directory.count--;
        /* EX: only-iteration: Kia, Ford, Audi. */

        cout << "Car with ID " << carID << " deleted successfully.\n";
    }
    else
    {
        cout << "Car with ID " << carID << " not found in the directory.\n";
    }
}

void listCars()
{
    if (directory.count == 0)
    {
        cout << "Car directory is empty.\n";
        return;
    }

    cout << "Car Directory:\n";

    for (int i = 0; i < directory.count; i++)
    // loop iterates over the elements in the directory.cars array
    //& displays the details of each car stored in the structure
    {
        cout << "Car ID: " << directory.cars[i].ID << endl;
        cout << "Owner Name: " << directory.cars[i].owner_name << " " << directory.cars[i].owner_surname << endl;
        cout << "Car Model: " << directory.cars[i].model << endl;
        cout << "Registration Date: " << directory.cars[i].reg_date.day << "/" << directory.cars[i].reg_date.month << "/" << directory.cars[i].reg_date.year << endl;
        cout << "Next Service Date: " << directory.cars[i].service_date.day << "/" << directory.cars[i].service_date.month << "/" << directory.cars[i].service_date.year << endl;
        cout << "Phone Number: " << directory.cars[i].phone_no << endl;
        cout << endl;
        // successfully displayed every member of the structure
        // of the `i-th index` instance
    }
}

void searchCarByID()
{
    int carID;
    cout << "Enter the ID of the car to search: ";
    cin >> carID;

    bool found = false;
    // declared a boolean function named `found`
    // with an initial value = false

    for (int i = 0; i < directory.count; i++)
    // loop iterates through all directory elements (Linear Search Algorithm)
    {
        if (directory.cars[i].ID == carID)
        {
            cout << "Car found!\n";
            cout << "Car ID: " << directory.cars[i].ID << endl;
            cout << "Owner Name: " << directory.cars[i].owner_name << " " << directory.cars[i].owner_surname << endl;
            cout << "Car Model: " << directory.cars[i].model << endl;
            cout << "Registration Date: " << directory.cars[i].reg_date.day << "/" << directory.cars[i].reg_date.month << "/" << directory.cars[i].reg_date.year << endl;
            cout << "Next Service Date: " << directory.cars[i].service_date.day << "/" << directory.cars[i].service_date.month << "/" << directory.cars[i].service_date.year << endl;
            cout << "Phone Number: " << directory.cars[i].phone_no << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Car with ID " << carID << " not found in the directory.\n";
    }
}

void searchCarByOwnerName()
{
    char ownerName[20]; // array declared
    cout << "Enter the car owner name to search: ";
    cin >> ownerName;

    bool found = false;

    for (int i = 0; i < directory.count; i++)
    // loop iterates through all directory elements (Linear Search Algorithm)
    {
        if (strcmp(directory.cars[i].owner_name, ownerName) == 0)
        {
            cout << "Car found!\n";
            cout << "Car ID: " << directory.cars[i].ID << endl;
            cout << "Owner Name: " << directory.cars[i].owner_name << " " << directory.cars[i].owner_surname << endl;
            cout << "Car Model: " << directory.cars[i].model << endl;
            cout << "Registration Date: " << directory.cars[i].reg_date.day << "/" << directory.cars[i].reg_date.month << "/" << directory.cars[i].reg_date.year << endl;
            cout << "Next Service Date: " << directory.cars[i].service_date.day << "/" << directory.cars[i].service_date.month << "/" << directory.cars[i].service_date.year << endl;
            cout << "Phone Number: " << directory.cars[i].phone_no << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Car with owner name " << ownerName << " not found in the directory.\n";
    }
}

void updateCarInfo()
{
    int carID;
    cout << "Enter the ID of the car to update: ";
    cin >> carID;

    int foundIndex = -1; // declared variable, initial value is -1

    for (int i = 0; i < directory.count; i++)
    // loop iterates through all directory elements (Linear Search Algorithm)
    {
        if (directory.cars[i].ID == carID)
        // statement checks if the ID of the car at index `i` in the
        //`directory.cars` array matches the `carID` input given by user
        // if the if statement is true, proceed
        {
            foundIndex = i; // set new value for variable
            break;
        }
    }

    if (foundIndex != -1) // if the index is found, proceed
    {
        cout << "Enter new owner's name: ";
        cin >> directory.cars[foundIndex].owner_name;

        cout << "Enter new owner's surname: ";
        cin >> directory.cars[foundIndex].owner_surname;

        cout << "Enter new car model: ";
        cin >> directory.cars[foundIndex].model;

        cout << "Enter new registration date (day month year[dd/mm/yyyy]): ";
        cin >> directory.cars[foundIndex].reg_date.day >> directory.cars[foundIndex].reg_date.month >> directory.cars[foundIndex].reg_date.year;

        cout << "Enter new next service date (day month year[dd/mm/yyyy]): ";
        cin >> directory.cars[foundIndex].service_date.day >> directory.cars[foundIndex].service_date.month >> directory.cars[foundIndex].service_date.year;

        cout << "Enter new owner's phone number: ";
        cin >> directory.cars[foundIndex].phone_no;

        cout << "Car information updated successfully.\n";
    }
    else
    {
        cout << "Car with ID " << carID << " not found in the directory.\n";
    }
}

void sortCarsByID() // used (Bubble Sort Algorithm)
{
    for (int i = 0; i < directory.count - 1; i++)
    {
        for (int j = 0; j < directory.count - i - 1; j++)
        {
            if (directory.cars[j].ID > directory.cars[j + 1].ID)
            {
                struct car temp = directory.cars[j];
                directory.cars[j] = directory.cars[j + 1];
                directory.cars[j + 1] = temp;
            }
        }
    }

    cout << "Cars sorted by ID.\n";
}

void sortCarsByOwnerName() // used (Bubble Sort Algorithm)
{
    for (int i = 0; i < directory.count - 1; i++)
    {
        for (int j = 0; j < directory.count - i - 1; j++)
        {
            if (strcmp(directory.cars[j].owner_name, directory.cars[j + 1].owner_name) > 0)
            {
                struct car temp = directory.cars[j];
                directory.cars[j] = directory.cars[j + 1];
                directory.cars[j + 1] = temp;
            }
        }
    }

    cout << "Cars sorted by owner name.\n";
}

int main()
{
    directory.count = 0;

    int choice;

    // do while executes once then iterates if
    // the condition of the while loop is true
    do
    {
        cout << "Menu:\n";
        cout << "1- Add a new car to directory\n";
        cout << "2- Delete a car from the directory\n";
        cout << "3- List available cars in the directory\n";
        cout << "4- Search a car\n";
        cout << "5- Update car information\n";
        cout << "6- Sort according to car ID\n";
        cout << "7- Sort according to owner name\n";
        cout << "8- Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addCar();
            break;
        case 2:
            deleteCar();
            break;
        case 3:
            listCars();
            break;
        case 4:
            char searchChoice;
            cout << "A- Search according to car ID\n";
            cout << "B- Search according to owner name\n";
            cout << "Enter your choice: ";
            cin >> searchChoice;

            if (searchChoice == 'A')
            {
                searchCarByID();
            }
            else if (searchChoice == 'B')
            {
                searchCarByOwnerName();
            }
            else
            {
                cout << "Invalid choice. Please try again.\n";
            }
            break;
        case 5:
            updateCarInfo();
            break;
        case 6:
            sortCarsByID();
            break;
        case 7:
            sortCarsByOwnerName();
            break;
        case 8:
            cout << "Successfully exited\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            break;
        }

        cout << endl;
    } while (choice != 8);

    return 0;
}
