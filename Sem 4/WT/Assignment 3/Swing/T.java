// Write a java program to create two tabs like in first tab you will take user input of two numbers and division 
// of those two numbers then a next button will come which will take us to 2nd tab where again you will take
// user input of two numbers and perform multiplication of those two number
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class T extends JFrame implements ActionListener{
    JButton b,n;
    JLabel x,y,z,w;
    JTextField c,d;
    JPanel p;
    public T(){
        b=new JButton("/");b.addActionListener(this); 
        n=new JButton("Next");n.addActionListener(this); 
        x=new JLabel("Num 1");y=new JLabel("Num 2");z=new JLabel("Output");w=new JLabel(); 
        c=new JTextField(5);d=new JTextField(5); 
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
        if(s.equals("/")){
            int p,q;
            p=Integer.parseInt(c.getText());q=Integer.parseInt(d.getText());
            w.setText(String.valueOf(p/q));
        }
        else if(s.equals("Next")){
            setVisible(false); 
            C1 o=new C1();
            o.setVisible(true);
        }
    }
    public static void main(String args[]){
        new T();
    }
} 