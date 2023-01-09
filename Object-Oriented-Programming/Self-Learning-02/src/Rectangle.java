public class Rectangle {
    private int width;
    private int height;

    // Rectangle Constructor
    public Rectangle() {

    }


    // Rectangle Getter and Setter
    public void setWidth(int width) {
        this.width = width;
    }

    public int getWidth() {
        return width;
    }

    public void setHeight(int height) {
        this.height = height;
    }

    public int getHeight() {
        return height;
    }


    // Rectangle Overloading Constructor
    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }


    // Calculate Method
    public int calculatePerimeter() {
        return 2 * (width + height);
    }

    public int calculateArea() {
        return width * height;
    }
}
