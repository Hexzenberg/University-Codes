//Create three tabs perform the addition of two numbers and have a new button next in the first tab when next
//button is clicked then perform the division of two numbers and two more buttons prev and next when prev is 
//clicked then go to the fist tab and next is clicked for the third tab to take userid and password when the login 
//button is clicked then go to the next page to display userid and pass and have a exit button to terminate the 
//program.
//10/04/23
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1 extends JFrame implements ActionListener{
    JButton b,n;
    JLabel x,y,z,w;
    JTextField c,d;
    JPanel p;
    public Q1(){
        b=new JButton("+");b.addActionListener(this); 
        n=new JButton("Next");n.addActionListener(this); 
        x=new JLabel("Num 1");y=new JLabel("Num 2");z=new JLabel("Output");w=new JLabel(); 
        c=new JTextField(20);d=new JTextField(20); 
        setLayout(new GridLayout(5,3));
        p=new JPanel();p.add(x);p.add(c);add(p); 
        p=new JPanel();p.add(y);p.add(d);add(p); 
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(z);p.add(w);add(p); 
        p=new JPanel();p.add(n);add(p);  
        setSize(500,500); 
        setTitle("My window");
        setVisible(true); 
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("+")){
            int p,q;
            p=Integer.parseInt(c.getText());q=Integer.parseInt(d.getText());
            w.setText(String.valueOf(p+q));
        }
        else if(s.equals("Next")){
            setVisible(false); 
            Q1_1 o=new Q1_1();
            o.setVisible(true);
        }
    }
    public static void main(String args[]){
        new Q1();
    }
} 