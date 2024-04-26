// package Multiple Inheritence;
// Base class 1
class Base1 {
    int n = 5;

    // int getNFromBase1() {
    //     return n;
    // }
}

// Base class 2
class Base2 {
    int n = 10;

    // int getNFromBase2() {
    //     return n;
    // }
}

class Derived extends Base2,Base1 {
    // You can access n from each base class explicitly
    void display() {
        System.out.println("n from Base1: " + super.n);
        System.out.println("n from Base2: " + super.n);
    }
}




