// Write a program to find out a+b, a-b, a*b, and a/b using swing
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class A extends JFrame implements ActionListener{
    JButton a,s,m,d;
    JTextField x,y;
    JLabel i,j,k,l;JPanel p;
    public A(){
        a=new JButton("+");s=new JButton("-");m=new JButton("*");d=new JButton("/");
        x=new JTextField(5);y=new JTextField(5);
        i=new JLabel("Num 1");j=new JLabel("Num 2");k=new JLabel("Output : ");l=new JLabel();
        a.addActionListener(this);s.addActionListener(this);m.addActionListener(this);d.addActionListener(this);
        setVisible(true);setSize(500, 500);
        setLayout(new GridLayout(3,4));
        p=new JPanel();p.add(i);p.add(x);p.add(j);p.add(y);add(p);
        p=new JPanel();p.add(a);p.add(s);p.add(m);p.add(d);add(p);
        p=new JPanel();p.add(k);p.add(l);add(p);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        int d,e,f=0;
        d=Integer.parseInt(x.getText());e=Integer.parseInt(y.getText());
        if(s.equals("+"))f=d+e;
        else if(s.equals("-"))f=d-e;
        else if(s.equals("*"))f=d*e;
        else if(s.equals("/"))f=d/e;
        else k.setText("No action performed!");
        l.setText(String.valueOf(f));
    }
    public static void main(String[] args){
        new A();
    }
}