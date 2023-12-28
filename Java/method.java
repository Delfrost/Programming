class Heisenberg{
    public static int add(int a,int b){
        System.out.printf("add(int a,int b)");
        int c=a+b;
        return c; 
        
    }
    public static void main(String []args){
        System.out.println("Main Starts");
        add(19,29);
        System.out.println("Main Ends");
    }
    
    public static int sub(int a,int b){
        System.out.println("sub(int a,int b)");
        int d = a-b;
        return d;

    }

}