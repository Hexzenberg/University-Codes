// Write a java program to find out the average marks of 5 subject and display grad according to KIIT grad scale, 
// using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class M extends JFrame implements ActionListener{
    JButton b;
    JLabel s1,s2,s3,s4,s5,a,g,v,j;
    JTextField t1,t2,t3,t4,t5;
    JPanel p;
    public M(){
        b=new JButton("Show Grade");b.addActionListener(this);
        s1=new JLabel("Marks in Subject 1(Out of 100)");s2=new JLabel("Marks in Subject 2");
        s3=new JLabel("Marks in Subject 3");s4=new JLabel("Marks in Subject 4");
        v=new JLabel("Average: ");j=new JLabel("Grade: ");a=new JLabel();g=new JLabel();
        s5=new JLabel("Marks in Subject 5");
        t1=new JTextField(5);t2=new JTextField(5);t3=new JTextField(5);
        t4=new JTextField(5);t5=new JTextField(5);setLayout(new GridLayout(8,3));
        p=new JPanel();p.add(s1);p.add(t1);add(p);
        p=new JPanel();p.add(s2);p.add(t2);add(p);
        p=new JPanel();p.add(s3);p.add(t3);add(p);
        p=new JPanel();p.add(s4);p.add(t4);add(p);
        p=new JPanel();p.add(s5);p.add(t5);add(p);
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(v);p.add(a);add(p);
        p=new JPanel();p.add(j);p.add(g);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent ae){
        String s=ae.getActionCommand();double m1,m2,m3,m4,m5,f;
        if(s.equals("Show Grade")){
            m1=Double.parseDouble(t1.getText());m2=Double.parseDouble(t2.getText());
            m3=Double.parseDouble(t3.getText());m4=Double.parseDouble(t4.getText());
            m5=Double.parseDouble(t5.getText());f=(m1+m2+m3+m4+m5)/5;
            a.setText(String.valueOf(f));
            g.setText(f>=90?"O":f>=80?"E":f>=70?"A":f>=60?"B":f>=50?"C":f>=40?"D":"F");
        }
    }
    public static void main(String args[]){
        new M();
    }
}