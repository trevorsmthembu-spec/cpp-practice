#include <string>
#include <vector>

using namespace std;
  
vector<string> friendOrFoe(const vector<string>& input) {
   vector<string> output;
  for (int i = 0; i < input.size(); i++){
    if (input[i].size() == 4){
      output.push_back(input[i]);
    }
  }
  
  return output;
}