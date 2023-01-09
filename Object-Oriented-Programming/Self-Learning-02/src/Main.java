public class Main {
    public Main() {
        Rectangle rect1 = new Rectangle(5, 10);

        System.out.println(rect1.calculatePerimeter());
        System.out.println(rect1.calculateArea());


        Product product1 = new Product("Laptop", 1000, 20);
        
        product1.checkStock();
        System.out.println(product1.getStock());
        product1.sellProduct(5);
        System.out.println(product1.getStock());
    }

    public static void main(String[] args) {
        new Main();
    }
}
