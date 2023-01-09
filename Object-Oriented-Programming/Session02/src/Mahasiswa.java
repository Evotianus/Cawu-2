public class Mahasiswa {
    // public static int score = 100;

    private String NIM;
    private String name;
    private double GPA;

    // Constructor
    // Digunakan untuk membuat object dari class Mahasiswa
    public Mahasiswa() {
        System.out.println("Hey There!");
    }

    // Getter + Setter
    // Berguna untuk mengambil data yang ingin dimasukkan ke variabel (Getter)
    // Berguna untuk mengset data yang ingin dimasukkan ke variabel (Setter)
    public String getNIM() {
        return NIM;
    }

    public void setNIM(String NIM) {
        this.NIM = NIM;
    }


    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public double getGPA() {
        return GPA;
    }

    public void setGPA(double GPA) {
        this.GPA = GPA;
    }

    public Mahasiswa(String NIM, String name, double GPA) {
        this.NIM = NIM;
        this.name = name;
        this.GPA = GPA;
    }

    public void print() {
        System.out.println("NIM  : " + NIM);
        System.out.println("Name : " + name);
        System.out.println("GPA  : " + GPA);
    }
}
