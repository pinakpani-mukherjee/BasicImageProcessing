#include "Image.h"

int main(int argc, const char *argv[])
{
    // Image test1("./assets/photo.png");
    Image test2("./assets/stock_landscape.jpg");
    // Image gray_average = test;
    // gray_average.grayscale_lum();
    // gray_average.write("./assets/photo_grayscale_lum.png");

    // test.colorMask(0.21, 0.66, 0.23);
    // test.write("./assets/output_images/photo_colormasked.png");

    // Image diff = test1;
    // diff.diffmap_scale(test2, 25);
    // diff.write("./assets/output_images/photo_diffmap_scaled.png");
    double emboss_ker[] = {
        -2 / 9.0,
        -1 / 9.0,
        0.0,
        -1 / 9.0,
        1 / 9.0,
        1 / 9.0,
        0.0,
        1 / 9.0,
        2 / 9.0};
    double gauss_ker[] = {
        1 / 16.0,
        2 / 16.0,
        1 / 16.0,
        2 / 16.0,
        4 / 16.0,
        2 / 16.0,
        1 / 16.0,
        2 / 16.0,
        1 / 16.0,
    };

    // test2.std_convolve_clamp_to_0(0, 3, 3, gauss_ker, 1, 1);
    // test2.std_convolve_clamp_to_0(1, 3, 3, gauss_ker, 1, 1);
    // test2.std_convolve_clamp_to_0(2, 3, 3, gauss_ker, 1, 1);
    // test2.write("./assets/output_images/photo_gauss_blurred.png");

    test2.std_convolve_clamp_to_0(0, 3, 3, emboss_ker, 1, 1);
    test2.std_convolve_clamp_to_0(1, 3, 3, emboss_ker, 1, 1);
    test2.std_convolve_clamp_to_0(2, 3, 3, emboss_ker, 1, 1);
    test2.write("./assets/output_images/photo_embossed.png");

    return 0;
}
