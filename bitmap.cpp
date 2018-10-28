#include <stdio.h>
#include "bitmap.h"

Bitmap::Bitmap(const char* name, const int width, const int height)
    : m_width(width),
    m_height(height)
{
    m_name = name;
    pixels = new int[m_width * m_height];
    clear(0);
}

Bitmap::~Bitmap()
{
    clear(0);
    delete pixels;
}

void Bitmap::printBitmap()
{
    for(int y = 0; y < getHeight(); y++)
    {
        for(int x = 0; x < getWidth(); x++)
        {
            printf(" [%d] ", pixels[x + (y * getWidth())]);
        }
        printf("\n");
    }
}

void Bitmap::clear(int value)
{
    for(int y = 0; y < getHeight(); y++)
    {
        for(int x = 0; x < getWidth(); x++)
        {
            pixels[x + (y * getWidth())] = value;
            //printf(" [%d] ", pixels[x + (y * getWidth())]);
        }
    }
}