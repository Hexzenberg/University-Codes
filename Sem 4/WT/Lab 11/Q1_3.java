import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1_3 extends JFrame implements ActionListener{
    JButton b;
    JLabel x,y;
    JPanel p;
    public Q1_3(){
        b=new JButton("Exit");b.addActionListener(this); 
        x=new JLabel("User id: abc");y=new JLabel("Password: 123");
        setLayout(new GridLayout(3,3));
        p=new JPanel();p.add(x);add(p); 
        p=new JPanel();p.add(y);add(p); 
        p=new JPanel();p.add(b);add(p);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("Exit")){
            dispose();
            System.exit(0);
        }
    }
} 