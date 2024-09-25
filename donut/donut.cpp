// #include <iostream>
// #include <cstring>
// #include <cmath>
// #include <unistd.h> // For usleep

// #define R(t, x, y) f = x; x -= t * y; y += t * f; f = (3 - x * x - y * y) / 2; x *= f; y *= f;

// int main() {
//     float z[1760];
//     char b[1760];
//     float a = 0, e = 1, c = 1, d = 0, f, g, h, G, H, A, t, D;
//     int i, j, k, o, N, x, y;

//     for (;;) {
//         std::memset(b, 32, 1760); // Fill buffer with spaces
//         std::memset(z, 0, 7040);  // Reset depth buffer
//         g = 0;
//         h = 1;

//         for (j = 0; j < 90; j++) {
//             G = 0;
//             H = 1;

//             for (i = 0; i < 314; i++) {
//                 A = h + 2;
//                 D = 1 / (G * A * a + g * e + 5);
//                 t = G * A * e - g * a;
//                 x = 40 + 30 * D * (H * A * d - t * c);
//                 y = 12 + 15 * D * (H * A * c + t * d);
//                 o = x + 80 * y;
//                 N = 8 * ((g * a - G * h * e) * d - G * h * a - g * e - H * h * c);

//                 if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
//                     z[o] = D;
//                     b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0];
//                 }
//                 R(.02, H, G);
//             }
//             R(.07, h, g);
//         }

//         for (k = 0; k < 1761; k++) {
//             std::putchar(k % 80 ? b[k] : 10); // Print characters with newlines
//         }

//         R(.04, e, a);
//         R(.02, d, c);

//         usleep(15000); // Pause for smooth animation
//         std::cout << "\033[23A"; // Move the cursor up to create the animation effect
//     }

//     return 0;
// }

// for num_frames

// #include <iostream>
// #include <cstring>
// #include <cmath>
// #include <unistd.h> // For usleep

// #define R(t, x, y) f = x; x -= t * y; y += t * f; f = (3 - x * x - y * y) / 2; x *= f; y *= f;

// int main() {
//     float z[1760];
//     char b[1760];
//     float a = 0, e = 1, c = 1, d = 0, f, g, h, G, H, A, t, D;
//     int i, j, k, o, N, x, y;

//     for (;;) {
//         std::memset(b, 32, 1760); // Fill buffer with spaces
//         std::memset(z, 0, 7040);  // Reset depth buffer
//         g = 0;
//         h = 1;

//         for (j = 0; j < 90; j++) {
//             G = 0;
//             H = 1;

//             for (i = 0; i < 314; i++) {
//                 A = h + 2;
//                 D = 1 / (G * A * a + g * e + 5);
//                 t = G * A * e - g * a;
//                 x = 40 + 30 * D * (H * A * d - t * c);
//                 y = 12 + 15 * D * (H * A * c + t * d);
//                 o = x + 80 * y;
//                 N = 8 * ((g * a - G * h * e) * d - G * h * a - g * e - H * h * c);

//                 if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
//                     z[o] = D;
//                     b[o] = "0123456789"[N > 0 ? N : 0];
//                 }
//                 R(.02, H, G);
//             }
//             R(.07, h, g);
//         }

//         for (k = 0; k < 1761; k++) {
//             std::putchar(k % 80 ? b[k] : 10); // Print characters with newlines
//         }

//         R(.04, e, a);
//         R(.02, d, c);

//         usleep(15000); // Pause for smooth animation
//         std::cout << "\033[23A"; // Move the cursor up to create the animation effect
//     }

//     return 0;
// }

// for letter 

#include <iostream>
#include <cstring>
#include <cmath>
#include <unistd.h> // For usleep

#define R(t, x, y) f = x; x -= t * y; y += t * f; f = (3 - x * x - y * y) / 2; x *= f; y *= f;

int main() {
    float z[1760];
    char b[1760];
    float a = 0, e = 1, c = 1, d = 0, f, g, h, G, H, A, t, D;
    int i, j, k, o, N, x, y;

    for (;;) {
        std::memset(b, 32, 1760); // Fill buffer with spaces
        std::memset(z, 0, 7040);  // Reset depth buffer
        g = 0;
        h = 1;

        for (j = 0; j < 90; j++) {
            G = 0;
            H = 1;

            for (i = 0; i < 314; i++) {
                A = h + 2;
                D = 1 / (G * A * a + g * e + 5);
                t = G * A * e - g * a;
                x = 40 + 30 * D * (H * A * d - t * c);
                y = 12 + 15 * D * (H * A * c + t * d);
                o = x + 80 * y;
                N = 8 * ((g * a - G * h * e) * d - G * h * a - g * e - H * h * c);

                if (22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = "ABCDEFGHIJ"[N > 0 ? N : 0];
                }
                R(.02, H, G);
            }
            R(.07, h, g);
        }

        for (k = 0; k < 1761; k++) {
            std::putchar(k % 80 ? b[k] : 10); // Print characters with newlines
        }

        R(.04, e, a);
        R(.02, d, c);

        usleep(15000); // Pause for smooth animation
        std::cout << "\033[23A"; // Move the cursor up to create the animation effect
    }

    return 0;
}
