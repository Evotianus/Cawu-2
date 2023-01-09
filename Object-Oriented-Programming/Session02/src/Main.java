// Note :
/*
 * Jika hanya "Mahasiswa m1;" saja, maka artinya hanya inisialisasi m1
 * Jika hanya "new Mahasiswa();" saja, maka artinya hanya memanggil class Mahasiswa()
 * Jika "Mahasiswa m1 = new Mahasiswa();", maka artinya inisialisasi, dan membuat object dari class Mahasiswa ke variabel m1
 */

public class Main {
    public Main() {
        Mahasiswa m1 = new Mahasiswa();
        
        m1.setNIM("1234567890");
        m1.setName("Jojo Lili Bibi");
        m1.setGPA(3.99);
        System.out.println("Mahasiswa 1:");
        m1.print();
        // System.out.println("NIM     = " + m1.getNIM());
        // System.out.println("Name    = " + m1.getName());
        // System.out.println("GPA     = " + m1.getGPA());
        
        System.out.println();
        
        Mahasiswa m2 = new Mahasiswa("1029384756", "Danu", 3.85);

        System.out.println("Mahasiswa 2:");
        m2.print();
        // System.out.println("NIM     = " + m2.getNIM());
        // System.out.println("Name    = " + m2.getName());
        // System.out.println("GPA     = " + m2.getGPA());

        System.out.println();
        // System.out.println(Mahasiswa.score);
    }

    public static void main(String[] args) {
        new Main();
    }
}
