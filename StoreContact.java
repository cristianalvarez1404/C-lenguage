public class StoreContact {
    private String name;
    private String email;
    private String phone;
    private String address;
      
    public static class Builder {
        private String name;
        private String email;
        private String phone;
        private String address;
        
        public Builder name(String name){
            this.name = name;
            return this;
        }
        
         public Builder email(String email){
            this.email = email;
            return this;
        }
        
         public Builder phone(String phone){
            this.phone = phone;
            return this;
        }
        
         public Builder address(String address){
            this.address = address;
            return this;
        }
        
        public StoreContact build(){
            StoreContact contact = new StoreContact();
        
            contact.name = this.name;
            contact.email = this.email;
            contact.phone = this.phone;
            contact.address = this.address;
            
            return contact;
        }
        
    }
    
    public static Builder builder(){
        return new Builder();
    }

    public String getName(){
      return this.name;
    }
   
}