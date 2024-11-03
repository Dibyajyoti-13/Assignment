#include<iostream>
#include<fstream>
#include<stdexcept>
using namespace std;

class NonIntegerDataException : public std::runtime_error {
public:
    NonIntegerDataException()
        : std::runtime_error("Error: Non-integer data found in the file") {}
};

int main(){
    int sum=0;
    string filepath;

    cout<<"Enter File path: ";
    cin>>filepath;
    
    ifstream file(filepath, ios::in);
    try{
        if(!file){
            //throw a standard ios_base::failure exception
            throw ios_base::failure("Error: Failed to open file...");
        }
        //agar andar int ke alawa kuch hua toh error
        string line;
        while (file >> line) {
            try {
                int num = stoi(line);
                sum += num;
            }
            catch (const invalid_argument&) {
                throw NonIntegerDataException();
            }
        }
        cout<<"Sum of integers: "<<sum<<endl;
    }
    catch(ios_base::failure& e){
        cerr<<e.what()<<endl;
    }
    catch (const NonIntegerDataException& e) {
        cerr << e.what() << endl; 
    }
    return 0;
}