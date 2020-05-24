//
//  main.cpp
//  abc168_c
//
//  Created by yuuki oosu on 2020/05/24.
//  Copyright © 2020 yuuki oosu. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, const char * argv[]) {
    int A(0), B(0), H(0), M(0);
    scanf("%d %d %d %d", &A, &B, &H, &M);

    if (H >= 12) {
        H -= 12;
    }

    double pi = 3.141592653589793;
    double initialRadian = pi / 2.0;

    int elapseA = (H * 60) + M;
    double vA = ((2.0 * pi) / (12.0 * 60.0)) * -1.0;
    double xA = A * std::cos((elapseA * vA) + initialRadian);
    double yA = A * std::sin((elapseA * vA) + initialRadian);

    double vB = ((2.0 * pi) / 60.0) * -1.0;
    double xB = B * std::cos((M * vB) + initialRadian);
    double yB = B * std::sin((M * vB) + initialRadian);

    double dis = std::sqrt(std::pow(xB - xA, 2) + std::pow(yB - yA, 2));

    std::cout << std::fixed << std::setprecision(20) << dis;

    return 0;
}
