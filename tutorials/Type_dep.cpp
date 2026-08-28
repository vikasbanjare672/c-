#include <iostream>
#include <vector>

/* typedef = reserved keyword used to create an additional name
             (alias) for another data type.
             New identifier for an existing type
             Helps with readability and reduces typos
             Use when there is a clear benefit
             Replaced with 'using' (work better w/ templates)  */

//typedef std::string str; // str is now an alias for std::string
using str = std::string; // str is now an alias for std::string as it work better w/ templates

int main(){
    str name ="Memeow"; // using the alias str instead of std::string
    std::cout << name << "\n";
    return 0;
}