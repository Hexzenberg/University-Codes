// Write a program swap two number without using third variable using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class J extends JFrame implements ActionListener{
    JLabel a,b,o,n,be,af,c,h;
    JButton f;JPanel p;
    JTextField g,d;
    public J(){
        a=new JLabel("Num 1:");b=new JLabel("Num 2:");c=new JLabel("Num 1:");
        h=new JLabel("Num 2:");be=new JLabel("Before: ");af=new JLabel("After: ");
        n=new JLabel();o=new JLabel();f=new JButton("Swap");f.addActionListener(this);
        g=new JTextField(5);d=new JTextField(5);
        setLayout(new GridLayout(8,2));
        p=new JPanel();p.add(be);add(p);
        p=new JPanel();p.add(a);p.add(g);add(p);
        p=new JPanel();p.add(b);p.add(d);add(p);
        p=new JPanel();p.add(f);add(p);
        p=new JPanel();p.add(af);add(p);
        p=new JPanel();p.add(c);p.add(o);add(p);
        p=new JPanel();p.add(h);p.add(n);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int n1,n2;
        if(s=="Swap"){
            n1=Integer.parseInt(g.getText());n2=Integer.parseInt(d.getText());
            n1+=n2;n2=n1-n2;n1-=n2;
            o.setText(String.valueOf(n1));n.setText(String.valueOf(n2));
        }
    }
    public static void main(String[] args){
        new J();
    }
}