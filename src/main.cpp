#include "Image.h"

int main(int argc, const char *argv[])
{
    // Image test1("./assets/photo.png");
    Image test2("./assets/stock_landscape.jpg");

    test2.flipY();

    test2.write("./assets/output_images/photo_flipped_y.png");

    return 0;
}
