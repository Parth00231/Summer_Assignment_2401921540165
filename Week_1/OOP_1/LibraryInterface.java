interface LibraryUser {
    void registeringMember();
    void requestingBook();
}

class KidUser implements LibraryUser {
    int age;
    String bookType;

    public void registeringMember() {
        if(age< 12) {
            System.out.println("You have successfully registered a Kids Account");
        }
        else {
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestingBook() {

        if(bookType.equals("Kids")) {
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else {
            System.out.println("Oops, you are not allowed to take other books");
        }
    }
}

class AdultUser implements LibraryUser {
    int age;
    String bookType;

    public void registeringMember() {
        if(age> 12) {
            System.out.println("You have successfully registered  an Adult Account");
        }
        else System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        
    }

    public void requestingBook() {

        if(bookType.equals("Fiction")) System.out.println("Book Issued successfully, please return the book within 7 days");
        
        else System.out.println("Oops, you are not allowed to take other books");
    }
}
public class LibraryInterface {
    public static void main(String[] args) {

        KidUser kid = new KidUser(); // kid user

        kid.age = 10;
        kid.registeringMember();

        kid.age = 18;
        kid.registeringMember();

        kid.bookType = "Kids";
        kid.requestingBook();

        kid.bookType = "Fiction";
        kid.requestingBook();


        System.out.println();

        AdultUser adult = new AdultUser(); // adult user

        adult.age = 5;
        adult.registeringMember();

        adult.age = 23;
        adult.registeringMember();

        adult.bookType = "Kids";
        adult.requestingBook();

        adult.bookType = "Fiction";
        adult.requestingBook();

        System.out.println();
    }
}