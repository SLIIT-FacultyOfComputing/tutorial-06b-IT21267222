#include "Box.h"

// Implement setters and getters

  void Box::setLength(int lengthx){
    length = lengthx;
  }
  void Box::setWidth(int widthx){
    width = widthx;
  }
  void Box::setHeight(int heightx){
    height = heightx;
  }

  int Box::getLength(){
    return length;
  }
  int Box::getWidth(){
    return width;
  }
  int Box::getHeight(){
    return height;
  }

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return width* height* length;
}
