#ifndef BITMAP_H
#define BITMAP_H

class Bitmap
{
    public:
        Bitmap(const char* name, const int width, const int height);
        ~Bitmap();

        int& operator [](int index) { return pixels[index]; }
        int& get(const int x, const int y) const { return pixels[x + (y * m_width)]; }

        void save(const char* path);

        int getWidth() const { return m_width; }
        int getHeight() const { return m_height; }
        const char* getName() const { return m_name; }

        void printBitmap();
        void clear(int value);
    private:
        const int m_width;
        const int m_height;
        const char* m_name;
        int* pixels;
};

#endif