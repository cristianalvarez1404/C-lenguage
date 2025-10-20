public class MyClass {
  public static void main(String args[]) {
    StoreContact contact = StoreContact.builder()
        .name("John")
        .email("john@gmail.com")
        .phone("123456789")
        .address("CL 5")
        .build();
        
    System.out.println(contact.getName());
  }
}



    