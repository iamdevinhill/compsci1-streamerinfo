// Devin Hill
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main() {

  // open file
  ifstream infile;
  infile.open("streamers.txt");


  // variables
  string name;
  int viewers;
  int max;
  string high_name;
  getline(infile, name);
  infile >> viewers;
  max = viewers;
  

  // loop thru file
  while(infile){
    
    if(viewers > max) {
      max = viewers;
      high_name = name;
    }
    
      getline(infile, name);
    getline(infile, name);
    infile >> viewers;
    }
    // print output
    cout << high_name << " has the most average viewers with " << max << endl;

    
  infile.close();
    
	return 0;

  }
