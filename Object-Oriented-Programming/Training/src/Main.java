public class Main {
    public Main() {
        Bank account1 = new Bank();

        account1.setBalance(50.0);
        System.out.println("Total balance: " + account1.getBalance());
        
        account1.deposit(100);
        
        System.out.println("Total balance: " + account1.getBalance());
    }

    public static void main(String[] args) {
        new Main();
    }
}
