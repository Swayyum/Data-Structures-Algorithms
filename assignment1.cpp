#include <iostream>
#include <vector>
 
std::vector<double> vecProduct(const std::vector<double>& v1, const std::vector<double>& v2) {
using std::vector;
std::vector<double> vectC;
    if(v1.size() != v2.size()){
        return vector<double>();
		//
    }
    
    else{
        for (int i = 0; i< v1.size(); i++) 
        {
            vectC.push_back(v1[i]*v2[i]);
			// c[i] = a[i]*b[i]; error, vector c(n) needs for loop in int main
        }
    }
return vectC;
}
	// Return empty vector if v1 and v2 are of different sizes;




// Overload << operator to print std::vector
std::ostream& operator <<(std::ostream& os, const std::vector<double>& v) {
	for (int i = 0; i < v.size(); i++) {
		os << v.at(i) << " ";
	}
	os << std::endl;
	return os;
}

// Test 
int main() {
	// Test 1
	std::vector<double> v1{1.0, 2.0, 3.0};
	std::vector<double> v2{4.0, 5.0, 6.0};
	std::vector<double> v3 = vecProduct(v1, v2);
	std::cout << v3; // Should print 4, 10, 18

	// Test 2
	std::vector<double> v4{42.0};
	std::cout << vecProduct(v1, v4); // Should print empty vector

}