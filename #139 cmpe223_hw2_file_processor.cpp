/* Write a C++ program to implement a file processor.
Your program should have the following menu:
Write necessary functions for the menu:
Menu:
1- create file (new file’s name should be user input)
2- copy file
3- copy file without spaces
4- merge files (file names should be user inputs)
5- Quit */
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

void createFile()
{
    string filename;

    // Prompt the user to enter the name of the new file
    cout << "Enter the name of the new file: ";
    cin >> filename;

    // Create a new ofstream object with the provided filename
    ofstream file(filename.c_str());
    if (file)
    {
        cout << "File created successfully.\n";
        file.close();
    }
    else
    {
        cerr << "Error creating the file.\n";
    }
}

void copyFile()
{
    string sourceFilename, destFilename;

    // Prompt the user to enter the name of the source file
    cout << "Enter the name of the source file: ";
    cin >> sourceFilename;

    // Prompt the user to enter the name of the destination file
    cout << "Enter the name of the destination file: ";
    cin >> destFilename;

    // Create ifstream object for reading the source file
    ifstream sourceFile(sourceFilename.c_str());

    // Create ofstream object for writing to the destination file
    ofstream destFile(destFilename.c_str());

    if (sourceFile && destFile)
    {
        char ch;
        // Read characters from the source file and write them to the destination file
        while (sourceFile.get(ch))
        {
            destFile.put(ch);
        }
        cout << "File copied successfully.\n";
        sourceFile.close();
        destFile.close();
    }
    else
    {
        cerr << "Error copying the file.\n";
    }
}

void copyFileWithoutSpaces()
{
    string sourceFilename, destFilename;

    // Prompt the user to enter the name of the source file
    cout << "Enter the name of the source file: ";
    cin >> sourceFilename;

    // Prompt the user to enter the name of the destination file
    cout << "Enter the name of the destination file: ";
    cin >> destFilename;

    // Create ifstream object for reading the source file
    ifstream sourceFile(sourceFilename.c_str());

    // Create ofstream object for writing to the destination file
    ofstream destFile(destFilename.c_str());

    if (sourceFile && destFile)
    {
        char ch;
        // Read characters from the source file and write non-space characters to the destination file
        while (sourceFile.get(ch))
        {
            if (!isspace(ch))
            {
                destFile.put(ch);
            }
        }
        cout << "File copied without spaces successfully.\n";
        sourceFile.close();
        destFile.close();
    }
    else
    {
        cerr << "Error copying the file without spaces.\n";
    }
}

void mergeFiles()
{
    string firstFilename, secondFilename, mergedFilename;

    // Prompt the user to enter the names of the first, second, and merged files
    cout << "Enter the name of the first file: ";
    cin >> firstFilename;

    cout << "Enter the name of the second file: ";
    cin >> secondFilename;

    cout << "Enter the name of the merged file: ";
    cin >> mergedFilename;

    // Create ifstream objects for reading the first and second files
    ifstream firstFile(firstFilename.c_str());
    ifstream secondFile(secondFilename.c_str());

    // Create ofstream object for writing to the merged file
    ofstream mergedFile(mergedFilename.c_str());

    if (firstFile && secondFile && mergedFile)
    {
        char ch;
        // Read characters from the first file and write them to the merged file
        while (firstFile.get(ch))
        {
            mergedFile.put(ch);
        }
        // Read characters from the second file and append them to the merged file
        while (secondFile.get(ch))
        {
            mergedFile.put(ch);
        }
        cout << "Files merged successfully.\n";
        firstFile.close();
        secondFile.close();
        mergedFile.close();
    }
    else
    {
        cerr << "Error merging the files.\n";
    }
}

int main()
{
    int choice;
    // Display the menu and execute the selected operation until the user chooses to quit
    do
    {
        cout << "Menu:\n";
        cout << "1- Create file\n";
        cout << "2- Copy file\n";
        cout << "3- Copy file without spaces\n";
        cout << "4- Merge files\n";
        cout << "5- Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            createFile();
            break;
        case 2:
            copyFile();
            break;
        case 3:
            copyFileWithoutSpaces();
            break;
        case 4:
            mergeFiles();
            break;
        case 5:
            cout << "Successfully exited\n";
            break;
        default:
            cerr << "Invalid choice. Please try again.\n";
        }

        cout << endl;
    } while (choice != 5);

    return 0;
}
