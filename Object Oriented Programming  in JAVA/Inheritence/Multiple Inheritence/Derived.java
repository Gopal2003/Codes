class Derived extends Base1, Base2 {
    // You can access n from each base class explicitly
    void display() {
        System.out.println("n from Base1: " + super.n);
        System.out.println("n from Base2: " + super.n);
    }
}