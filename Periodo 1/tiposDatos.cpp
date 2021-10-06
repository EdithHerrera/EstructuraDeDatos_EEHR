#include <iostream>
#include <limits>

using namespace std;

int main(){
        int imin = numeric_limits<int>::min();
        int imax = numeric_limits<int>::max();
        
        cout << " imin = " << imin << endl;
        cout << " imax = " << imax << "\n";
        cout << " tamanio de int : " << sizeof(int) << endl;
        
        float fmin = std::numeric_limits<float>::min();
        float fmax = std::numeric_limits<float>::max();
        
        cout << " fmin = " << fmin << endl;
        cout << " fmax = " << fmax << "\n";
        cout << " tamanio de float : " << sizeof(float) << endl;
        
        char cmin = numeric_limits<char>::min();
        char cmax = numeric_limits<char>::max();
        
        cout << " fmin = " << cmin << endl;
        cout << " fmax = " << cmax << endl;
        cout << " tamanio de char : " << sizeof(char) << endl;

		double dmin = numeric_limits<double>::min();
        double dmax = numeric_limits<double>::max();
        
        cout << " dmin = " << dmin << endl;
        cout << " dmax = " << dmax << endl;
        cout << " tamanio de double : " << sizeof(double) << endl;
        
        wchar_t wmin = numeric_limits<wchar_t>::min();
        wchar_t wmax = numeric_limits<wchar_t>::max();
        
        cout << " wmin = " << wmin << endl;
        cout << " wmax = " << wmax << endl;
        cout << " tamanio de wchar_t : " << sizeof(wchar_t) << endl;

        bool bmax = numeric_limits<bool>::max();
		bool bmin = numeric_limits<bool>::min();
        
        cout << " bmin = " << bmin << endl;
        cout << " bmax = " << bmax << endl;
        cout << " tamanio de bool : " << sizeof(bool) << endl;
        
        cout << "////////////////////// \n Autor: Edith Herrera" << endl;
        
        
        return 0;
         
}
