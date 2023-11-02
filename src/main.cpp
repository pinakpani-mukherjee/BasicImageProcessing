#include "Image.h"

int main(int argc, const char *argv[])
{
    Image test("./assets/photo.jpg");
    Image gray_average = test;
    gray_average.grayscale_lum();
    gray_average.write("./assets/photo_grayscale_lum.png");

    return 0;
}
