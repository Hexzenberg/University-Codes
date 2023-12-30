import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1_2 extends JFrame implements ActionListener{
    JButton b,n;
    JLabel x,y;
    JTextField c,d;
    JPanel p;
    public Q1_2(){
        b=new JButton("Login");b.addActionListener(this); 
        n=new JButton("Prev");n.addActionListener(this); 
        x=new JLabel("User id");y=new JLabel("Password");
        c=new JTextField(20);d=new JTextField(20); 
        setLayout(new GridLayout(5,3));
        p=new JPanel();p.add(x);p.add(c);add(p); 
        p=new JPanel();p.add(y);p.add(d);add(p); 
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(n);add(p);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("Login")){
            String s1=c.getText(),s2=d.getText();
            if(s1.equals("abc")&&s2.equals("123")){
                setVisible(false);
                Q1_3 o=new Q1_3();
                o.setVisible(true);
            }else{
                JOptionPane.showMessageDialog(this,"Wrong Input");
            }
        }
        else if(s.equals("Prev")){
            setVisible(false); 
            Q1_1 o=new Q1_1();
            o.setVisible(true);
        }
    }
} 