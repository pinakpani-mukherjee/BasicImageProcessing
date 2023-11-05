#include "Image.h"

int main(int argc, const char *argv[])
{
    Image test1("./assets/photo.png");
    Image test2("./assets/stock_landscape.jpg");
    // Image gray_average = test;
    // gray_average.grayscale_lum();
    // gray_average.write("./assets/photo_grayscale_lum.png");

    // test.colorMask(0.21, 0.66, 0.23);
    // test.write("./assets/output_images/photo_colormasked.png");

    Image diff = test1;
    diff.diffmap(test2);
    diff.write("./assets/output_images/photo_diffmap.png");
    return 0;
}
