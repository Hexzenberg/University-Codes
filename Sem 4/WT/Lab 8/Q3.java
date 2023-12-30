//WAP to show No Such Method exception
class Q3{
    public static void main(String[] args) {
        try{
            throw new Exception("NoSuchMethodError");
        }catch(Exception e){
            System.out.println(e.getMessage());
        }
    }
}
