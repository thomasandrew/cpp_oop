#include <iostream>
#include <string>

class Exercise {
  
  private:
    int big;
    int small;

  public:
    Exercise(int big, int small) {
      this->big = big;
      this->small = small;      
    }  

    int getBig() {
      return big;
    }

    int getSmall() {
      return small;
    }
};

class Resp: public Exercise {
  
  public:

    using Exercise::Exercise;
 
    void minAndMax() {

      int num;
      int b = getBig();
      int s = getSmall();

      ans(&num, &b, &s);

      std::cout << "Max: " << b << "\n" << "Min: " << s;
    }

    void ans(int *pnum, int *pbig, int *psmall) {
      for (int i = 0; i < 3; i++) {
        std::cin >> *pnum; 

        if (*pnum > *pbig) {
         *pbig = *pnum;
        } else if (*pnum < *psmall) {
         *psmall = *pnum;
        }
      }
    }
};

int main() {
  
  Resp resp(0, 99999);
  resp.minAndMax();

  return 0;
}
