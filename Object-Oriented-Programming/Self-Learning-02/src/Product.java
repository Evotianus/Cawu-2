public class Product {
    // Attributes
    private String name;
    private int price;
    private int stock;


    // Getter and Setter
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getPrice() {
        return price;
    }

    public void setStock(int stock) {
        this.stock = stock;
    }

    public int getStock() {
        return stock;
    }


    // Constructor
    public Product() {

    }


    // Overloading Constructor
    public Product(String name, int price, int stock) {
        this.name = name;
        this.price = price;
        this.stock = stock;
    }


    // Method to check product quantity
    public void checkStock() {
        if (this.stock < 10) {
            System.out.println("Product " + this.name + " is low in stock!");
        } else {
            System.out.println("Product " + this.name + " is ready in stock!");
        }
    }

    // Method to sell product
    private int sellCount;

    public void setSellCount(int sellCount) {
        this.sellCount = sellCount;
    }

    public int getSellCount() {
        return sellCount;
    }

    public void sellProduct(int sellCount) {
        this.stock -= sellCount;
    }
}
