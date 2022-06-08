#include <iostream>
using namespace std;
struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};
void show(box);
void address(box *);

int main()
{
    box rectangular = {"mybox", 10, 10, 10, 0};
    address(&rectangular);
    show(rectangular);
    return 0;
}

void show(box rectangular)
{
    cout << "maker: " << rectangular.maker << endl;
    cout << "height: " << rectangular.height << endl;
    cout << "width: " << rectangular.width << endl;
    cout << "length: " << rectangular.length << endl;
    cout << "volume: " << rectangular.volume << endl;
}
void address(box * rectangular)
{
    rectangular->volume = rectangular->height * rectangular->length * rectangular->width;
}