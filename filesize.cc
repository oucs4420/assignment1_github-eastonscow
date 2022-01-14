#include <iostream>
#include <fstream>
using namespace std;

// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1

int main( int argc, char* argv[] )
{
    string line ; 
    // just to get you started, this is how to refer to the arguments that were passed
    cout << "program: ./filesize" << endl ; 
    for (int arg = 1; arg < argc; ++arg){
        //std::cout << "argv[" << arg << "]: " << argv[arg] << '\n' ;
        int numOfLines = 0 ;
        ifstream myfile(argv[arg]) ;  
        //if file cannot open output is -1
        if(myfile.fail()){
            numOfLines = -1 ; 
        }
        //gets line and adds 1 to count after each line
        while(getline(myfile, line)){
            numOfLines ++ ; 
        }
        //string file(argv[arg]) ; 
        cout << " " << argv[arg] << ": " <<  numOfLines << endl ; //prints the output
    }
    exit(0); // this means that the program executed correctly!
}
