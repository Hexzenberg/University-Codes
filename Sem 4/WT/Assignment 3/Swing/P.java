// Write a java Program to check the number is strong number or not using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class P extends JFrame implements ActionListener{
    JButton b;JLabel pl,r,k;
    JTextField c;JPanel p;
    public P(){
        b=new JButton("Check if the number is strong");b.addActionListener(this);
        pl=new JLabel("Enter a number");r=new JLabel("Output: ");k=new JLabel();
        c=new JTextField(5);
        setLayout(new GridLayout(3,2));
        p=new JPanel();p.add(pl);p.add(c);add(p);
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(r);p.add(k);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    int fact(int n){
        return(n==0||n==1?1:n*fact(n-1));
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int x;
        if(s.equals("Check if the number is strong")){
            x=Integer.parseInt(c.getText());
            int sum=0,r,t=x;
            while(t!=0){
                r=t%10;
                r=fact(r);
                sum+=r;
                t/=10;
            }
            k.setText(sum==x?"Strong Number":"Not a strong Number");
        }
    }
    public static void main(String args[]){
        new P();
    }
}