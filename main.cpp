#include <stdio.h>
#include "bitmap.h"
#include "filesystem.h"

int main(int argc, char* argv[])
{
    Bitmap bitmap("test_0", 32, 32);
    bitmap.clear(0xFF);

    FileSystem::get()->saveBitmap(bitmap);
    Bitmap* testmap = FileSystem::get()->loadBitmap("test_0");
    testmap->printBitmap();
    
    delete testmap;
    return 0;
}