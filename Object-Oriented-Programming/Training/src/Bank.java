public class Bank {
    String accountNumber;
    double balance;
    String customerName;
    String email;
    String phoneNumber;

    public Bank() {
        System.out.println("Shalom");
    }

    public void setAccountNumber(String accountNumber) {
        this.accountNumber = accountNumber;
    }

    public String getAccountNumber() {
        return accountNumber;
    }

    public void setBalance(double balance) {
        this.balance = balance;
    }

    public double getBalance() {
        return balance;
    }

    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public String getCustomerName() {
        return customerName;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public String getEmail() {
        return email;
    }

    public void deposit(double totalDeposit) {
        balance += totalDeposit;
    }

    public void 

    public static void main(String[] args) {
        new Bank();
    }
}