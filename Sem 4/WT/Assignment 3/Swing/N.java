// Write a java Program to calculate the sum digits of a number using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class N extends JFrame implements ActionListener{
    JButton b;JLabel pl,r,k;
    JTextField c;JPanel p;
    public N(){
        b=new JButton("Calculate Sum of Digits");b.addActionListener(this);
        pl=new JLabel("Enter a number");r=new JLabel("Sum of the digits: ");k=new JLabel();
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
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int x;
        if(s.equals("Calculate Sum of Digits")){
            x=Integer.parseInt(c.getText());
            int sum=0,r;
            while(x!=0){r=x%10;sum+=r;x/=10;}
            k.setText(String.valueOf(sum));
        }
    }
    public static void main(String args[]){
        new N();
    }
}