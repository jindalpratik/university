// To create a product class with a constructor to get the discount price

#include <iostream>

using namespace std;

class product {
    private:
        int price;
    public:
        product(int p) {
            price = p;
        }
        int getDiscountPrice() {
            return price - (price * 10 / 100);
        }
};

int main() {
    int p;
    cin >> p;
    product obj(p);
    cout << obj.getDiscountPrice() << endl;
    return 0;
}