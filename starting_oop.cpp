#include <iostream>
using namespace std;

class Rectangle {
    private:
        int width;
        int height;

        int Error() {
            cout << "ERROR" << endl;
            return -1;
        }
    public: 
        void setWidth(int newWidth) {
           if(newWidth > 0) width = newWidth;
        }
        void setHeight(int newHeight) {
            if(newHeight > 0) height = newHeight;
        }
        int getWidth() const {
            return width;
        }
        int getHeight() const {
            return height;
        }
        int getArea() {
            return height * width;
        }
};

int main() {
    Rectangle myRectangle;

    myRectangle.setWidth(200);
    myRectangle.setHeight(100);

    cout << "Made a Rectangle!" << endl;
    cout<< "Width: " << myRectangle.getWidth() << endl;
}