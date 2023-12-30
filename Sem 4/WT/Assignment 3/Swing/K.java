// Write a java program to find out the minimum of three number using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class K extends JFrame implements ActionListener{
    JLabel a,b,c,o,n;
    JButton f;JPanel p;
    JTextField g,d,e;
    public K(){
        a=new JLabel("Num 1");b=new JLabel("Num 2");c=new JLabel("Num 3");
        o=new JLabel("Output:");n=new JLabel();f=new JButton("Find Min");f.addActionListener(this);
        g=new JTextField(5);e=new JTextField(5);d=new JTextField(5);
        setLayout(new GridLayout(5,1));
        p=new JPanel();p.add(a);p.add(g);add(p);
        p=new JPanel();p.add(b);p.add(d);add(p);
        p=new JPanel();p.add(c);p.add(e);add(p);
        p=new JPanel();p.add(f);add(p);
        p=new JPanel();p.add(o);p.add(n);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();Double n1,n2,n3;
        if(s=="Find Min"){
            n1=Double.parseDouble(g.getText());n2=Double.parseDouble(d.getText());n3=Double.parseDouble(e.getText());
            n.setText(String.valueOf((n1<=n2&&n1<=n3)?n1:(n2<=n1&&n2<=n3)?n2:n3));
        }
    }
    public static void main(String[] args){
        new K();
    }
}