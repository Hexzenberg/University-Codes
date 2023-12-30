//WAP to create two buttons * and next to perform addition of two numbers and to go to another page with 
//3 buttons prev * next resp, * performs multipliaction of two numbers prev for prev page and next button for
//next page for division.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q2_2 extends JFrame implements ActionListener{
    JButton b,n;
    JLabel x,y,z,w;
    JTextField c,d;
    JPanel p;
    public Q2_2(){
        b=new JButton("/");b.addActionListener(this); 
        n=new JButton("Prev");n.addActionListener(this); 
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
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("/")){
            int p,q;
            p=Integer.parseInt(c.getText());q=Integer.parseInt(d.getText());
            w.setText(String.valueOf(p/q));
        }
        else if(s.equals("Prev")){
            setVisible(false); 
            Q2_1 o=new Q2_1();
            o.setVisible(true);
        }
    }
} 