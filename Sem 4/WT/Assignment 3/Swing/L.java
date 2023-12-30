// Write a java program to find out the monthly payment using swing. Input P,Y,R.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class L extends JFrame implements ActionListener{
    JButton b;
    JLabel pl,r,t,l,k;
    JTextField c,d,f;
    JPanel p;
    public L(){
        b=new JButton("Calculate Monthly Payment");b.addActionListener(this);
        pl=new JLabel("Principal Amount: ");r=new JLabel("Rate: ");t=new JLabel("Time(year): ");
        l=new JLabel("Monthly Payment: ");k=new JLabel();
        c=new JTextField(5);d=new JTextField(5);f=new JTextField(5);
        setLayout(new GridLayout(5,3));
        p=new JPanel();p.add(pl);p.add(c);add(p);
        p=new JPanel();p.add(r);p.add(d);add(p);
        p=new JPanel();p.add(t);p.add(f);add(p);
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(l);p.add(k);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();double x,y,z;
        if(s.equals("Calculate Monthly Payment")){
            x=Double.parseDouble(c.getText());y=Double.parseDouble(d.getText());z=Double.parseDouble(f.getText());
            k.setText(String.valueOf(((x*y*z)/100)/12));
        }
    }
    public static void main(String args[]){
        new L();
    }
}