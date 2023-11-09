#include <iostream>
#include <cmath>

// Faktöriyel hesaplayan fonksiyon
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    
    // Kullanıcıdan açıyı (derece cinsinden) al
    double degree,degree_D;
    std::cout << "Dereceyi girin: ";
    std::cin >> degree;
    
    // Bir tam devirde kalınır ve yuvarlanma hataları azaltılır
    degree_D = fmod(degree,360);
    std::cout << degree_D << std::endl;
    
    // Dereceyi radyana çevir
    double radian = degree_D * M_PI / 180.0;

    // Taylor serisi kullanarak cosinus hesapla
    double cosValue = 0;
    int iteration = 10; // İterasyon sayısı, isteğe bağlı olarak ayarlanabilir

    for (int i = 0; i < iteration; ++i) {
        double term = pow(-1, i) * pow(radian, 2 * i) / factorial(2 * i);
        cosValue += term;
    }
    
    // Sonucu ekrana yazdır
    std::cout << "cos(" << degree << ") = " << cosValue << std::endl;
    return 0;
}
