#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main(){  
    /*int n;
    float r = 1.4f;
    std::cin >> n;
    std::cout << n * static_cast<int>(r) << ' ';*/

    /*
                        size             min_val                                max_val
     char               sizeof(char)     std::numeric_limits<char>::min()       std::cout << std::numeric_limits<char>::max()
     int                sizeof(int)      std::numeric_limits<int>::min()        std::cout << std::numeric_limits<int>::max()
     unsigned          sizeof(unsigned) std::numeric_limits<unsigned>::min()   std::cout << std::numeric_limits<unsignedt>::max()
     float              sizeof(float)    std::numeric_limits<float>::min()      std::cout << std::numeric_limits<float>::max()
     double             sizeof(double)   std::numeric_limits<double>::min()     std::cout << std::numeric_limits<double>::max()

    */
    /*std::cout << std::setw(10)
        << "Name" << "Surename" << std::endl
        << "Ivan" << "Ivanov";*/
    cout << setw(12) << "type" << setw(12) <<  "size"
        << setw(12) <<  "min_val"
        << setw(12) <<  "max_val"  << endl;
    //1 row  
    cout << setw(12) << "char" << setw(12) << sizeof(char)
        << setw(12) << static_cast<int>(numeric_limits<char>::min())
        << setw(12) << static_cast<int>(numeric_limits<char>::max()) << endl;

    //2 row
    cout << setw(12) << "int" << setw(12) << sizeof(int)
        << setw(12) << numeric_limits<int>::min()
        << setw(12) << numeric_limits<int>::max() << endl;

    //3 row
    cout << setw(12) << "unsigned int" << setw(12) << sizeof(unsigned int)
        << setw(12) << static_cast<int>(numeric_limits<unsigned int>::min())
        << setw(12) << static_cast<int>(numeric_limits<unsigned int>::max()) << endl;

    //4 row
    cout << setw(12) << "float" << setw(12) << sizeof(float)
        << setw(12) << static_cast<int>(numeric_limits<float>::min())
        << setw(12) << static_cast<int>(numeric_limits<float>::max()) << endl;

    //5 row
    cout << setw(12) << "double" << setw(12) << sizeof(double)
        << setw(12) << static_cast<int>(numeric_limits<double>::min())
        << setw(12) << static_cast<int>(numeric_limits<double>::max()) << endl;

    return 0;
}