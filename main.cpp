#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
using namespace std;
//wants it in both file and string format
//display string after every program, have a file that stores all the strings
//have option to clear or reset file

/* Intially, the process array is called under the array case and 
* process input is called under the object case to recursively handle nested
* objects and nested arrays and vice versa
*/
string processArray();//declared up here so can be accessed by both functions
string processInput()
{
    string objectOutput;
    bool flag = false;
    while (true) {
        cout << "Enter key" << endl;
        string temp_key;
        cin >> temp_key;
        objectOutput += '"';
        objectOutput += temp_key;
        objectOutput += '"';
        objectOutput += ':';
        cout << "choose option for value:" << endl;
        cout << "for string enter 1" << endl;
        cout << "for array enter 2" << endl;
        cout << "for number enter 3" << endl;
        cout << "for object enter 4" << endl;
        cout << "for boolean enter 5" << endl;
        cout << "for null enter 6" << endl;
        int value_option = 0;
        cin >> value_option;
        switch (value_option) {
        case 1: {
            string temp_value;
            cout << "Enter String" << endl;
            cin >> temp_value;
            objectOutput += '"';
            objectOutput += temp_value;
            objectOutput += '"';
            objectOutput += ',';
            break;
        }
        case 2: {
            string temp_array = processArray();
            objectOutput += "[";
            objectOutput += temp_array;
            objectOutput += "]";
            objectOutput += ',';
            break;
        }
        case 3: {
            string temp_value;
            cout << "Enter Number" << endl;
            cin >> temp_value;
            objectOutput += temp_value;
            objectOutput += ',';
            break;
        }
        case 4: {
            string temp_object = processInput();
            objectOutput += temp_object;
            objectOutput += ',';
            break;
        }
        case 5: {
            string temp_value;
            cout << "Enter boolean" << endl;
            cin >> temp_value;
            objectOutput += temp_value;
            objectOutput += ',';
            break;
        }
        case 6: {
            objectOutput += "null";
            objectOutput += ',';
            break;
        }
        }
        cout << "Add another key-value pair? (y = 1/n = 0)" << endl;//will ask for each level of object abstraction
        int continue_option;//handles the case of adding multiple key
        cin >> continue_option;//value pairs in an object
        if (continue_option == 0) break;
    }
    objectOutput.erase(objectOutput.size() - 1);
    objectOutput = "{" + objectOutput + "}";
    return objectOutput;
}

string processArray() {//recursive function will ask for each array values
    string output;
    int value_option = 0;
    while (value_option != 7) {
        cout << "choose option for value:" << endl;
        cout << "for string enter 1" << endl;
        cout << "for array enter 2" << endl;
        cout << "for number enter 3" << endl;
        cout << "for object enter 4" << endl;
        cout << "for boolean enter 5" << endl;
        cout << "for null enter 6" << endl;
        cout << "to exit enter 7" << endl;
        cin >> value_option;
        switch (value_option) {
            case 1: {
                string temp_value;
                cout << "Enter String" << endl;
                cin >> temp_value;
                output += '"';
                output += temp_value;
                output += '"';
                output += ',';
                break;
            }
            case 2: {
                string temp_array = processArray();
                output += "[";
                output += temp_array;
                output += "]";
                output += ',';
                break;
            }
            case 3: {
                string temp_value;
                cout << "Enter Number" << endl;
                cin >> temp_value;
                output += temp_value;
                output += ',';
                break;
            }
            case 4: {
                string temp_object = processInput();
                output += temp_object;
                output += ',';
                break;
            }
            case 5: {
                string temp_value;
                cout << "Enter boolean" << endl;
                cin >> temp_value;
                output += temp_value;
                output += ',';
                break;
            }
            case 6: {
                output += "null";
                output += ',';
                break;
            }
            case 7: {
                output.erase(output.size() - 1);
                break;
            }
        }
    }
    return output;
}
int main()
{
    fstream outputFile("output.txt", ios::app);
    if (!outputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }
    string output;//this is the final output string
    int option = 0;
    bool flag = false;//setting this so that curly braces are not added every iteration
    while (option != 2) {//continuous loop till exit
        cout << "choose an option: " << endl;
        cout << "Option 1: Enter values" << endl;//intially the key of the object
        cout << "Option 2: Exit" << endl;
        cout << "Option 3: Clear file" << endl;
        cin >> option;
        if (option == 3) {
            outputFile.close();  // Close the file before clearing its contents
            ofstream clearFile("output.txt", ofstream::trunc);
            clearFile.close();
            outputFile.open("output.txt", ios::app);  // Re-open file in append mode
            cout << "file cleared" << endl;
        }
        if (option == 1) {
            if (!flag) {
                output += '{';
                flag = true;
            }
            cout << "Enter key" << endl;
            string temp_key;
            cin >> temp_key;
            output += '"';
            output += temp_key;
            output += '"';
            output += ':';//key will always be a string, so appending necessary chars
            cout << "choose option for value:" << endl;
            cout << "for string enter 1" << endl;
            cout << "for array enter 2" << endl;
            cout << "for number enter 3" << endl;
            cout << "for object enter 4" << endl;
            cout << "for boolean enter 5" << endl;
            cout << "for null enter 6" << endl;//these are the only possible types
            int value_option = 0;
            cin >> value_option;
            switch (value_option) {
                case 1: {
                    string temp_value;
                    cout << "Enter String" << endl;
                    cin >> temp_value;
                    output += '"';
                    output += temp_value;
                    output += '"';
                    output += ',';
                    break;
                }
                case 2: {
                    string temp_array = processArray();//calls processArray to handle
                    output += "[";//nested objects and arrays
                    output += temp_array;
                    output += "]";
                    output += ',';
                    break;
                }
                case 3: {
                    string temp_value;
                    cout << "Enter Number" << endl;
                    cin >> temp_value;
                    output += temp_value;
                    output += ',';
                    break;
                }
                case 4: {
                    string temp_object = processInput();//handles nested objects
                    output += temp_object;
                    output += ',';
                    break;
                }
                case 5: {
                    string temp_value;
                    cout << "Enter boolean" << endl;
                    cin >> temp_value;//Enter true or false, no CAPS
                    output += temp_value;
                    output += ',';
                    break;
                }
                case 6: {
                    output += "null";
                    output += ',';//automatically fills null value
                    break;
                }
            }

        }
    }
    if (output.length() > 0) {
        output.erase(output.size() - 1);
        output += '}';
        cout << output;
    }
    if (output.length() != 0) {
        outputFile << output << endl;
        cout << endl;
        cout << "Written to file" << endl;
    }
    // Close the file at the end of the program
    outputFile.close();
    return 0;
}
