#include "Image.h"

int main(int argc, const char *argv[])
{
    Image test("./assets/photo.jpg");
    test.write("./assets/new_photo.jpg");
    Image copy = test;
    for (int i = 0; i < copy.w * copy.channels; i++)
    {
        copy.data[i] = 255;
    }
    test.write("./assets/new_photo_2.jpg");

    Image blank(100, 100, 3);
    blank.write("./assets/photo_blank.jpg");

    return 0;
}
