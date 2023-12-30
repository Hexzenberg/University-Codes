import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1_1 extends JFrame implements ActionListener{
    JButton b,n,m;
    JLabel x,y,z,w;
    JTextField c,d;
    JPanel p;
    public Q1_1(){
        b=new JButton("/");b.addActionListener(this); 
        n=new JButton("Prev");n.addActionListener(this);
        m=new JButton("Next");m.addActionListener(this);
        x=new JLabel("Num 1");y=new JLabel("Num 2");z=new JLabel("Output");w=new JLabel(); 
        c=new JTextField(20);d=new JTextField(20); 
        setLayout(new GridLayout(6,3));
        p=new JPanel();p.add(x);p.add(c);add(p); 
        p=new JPanel();p.add(y);p.add(d);add(p); 
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(z);p.add(w);add(p); 
        p=new JPanel();p.add(n);add(p);   
        p=new JPanel();p.add(m);add(p);   
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
            Q1 o=new Q1();
            o.setVisible(true);
        }
        else if(s.equals("Next")){
            setVisible(false); 
            Q1_2 o=new Q1_2();
            o.setVisible(true);
        }
    }
}