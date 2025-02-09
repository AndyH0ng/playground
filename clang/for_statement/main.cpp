//
//  main.cpp
//  for_statement
//
//  Created by 준우 on 1/16/25.
//

#include <iostream>

int main() {
    std::cout << "1) typical loop with a single statement:\n";
    for (int i = 0; i < 5; ++i) std::cout << i << ' ';
    
    
    std::cout << "\n\n" "2) init-statement can declare multiple names,\n"
                 "as long as they can use the same declare-specifier-seq:\n";
    for (int i = 0, *p = &i; i < 5; ++i) {
        std::cout << i << ':' << *p << ' ';
    }
    
    
    std::cout << "\n\n" "3) condition may be a declaration:\n";
    char cstr[] = "Hello";
    for (int n = 0; char c = cstr[n]; ++n)
        std::cout << c;
    
    
    std::cout << "\n\n" "4) init-statement can be an expression:\n";
    int m = 0;
    for (std::cout << "Loop Start\n";
         std::cout << "Loop Test\n";
         std::cout << "Iteration " << ++m << '\n')
        if (m > 1) break;
    
    
    std::cout << "\n" "5) init-statement and loop-expression can contain\n"
                 "multiple statements separated by commas:\n";
    for (int x = 0, y = 1; x < 5; ++x, y *= 2)
        std::cout << '(' << x << ',' << y << ')' << '\n';
    
    
    std::cout << "\n" "6) statement can be the null statement:\n";
    for (int i = 0; i < 5; std::cout << i << '\n', ++i);
    
}
