#include <stdio.h>
#include <math.h>
int main(void) {
  float h, r, area; 
  printf("Enter Hight : ");
  scanf("%f", &h);		 // รับค่าความสูง
  printf("Enter Radius : ");
  scanf("%f", &r);		 // รับค่ารัศมี
  area = ((2*3.14*r)*h) + (2*(3.14*pow(r,2)));	// คำนวณตามสูตรหาพื้นที่ผิวนอกของรูปทรงกระบอก
  printf("Cylindrical area is %.2f", area); // แสดงผลลัพธ์ที่คำนวณได้
  return 0;
}