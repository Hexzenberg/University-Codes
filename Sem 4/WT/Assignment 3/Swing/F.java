// Write a program convert Celsius to Fahrenheit and vice-versa using swing
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class F extends JFrame implements ActionListener{
    JLabel c,f,o;
    JTextField t,y;
    JButton b1,b2;JPanel p;
    public F(){
        c=new JLabel("Enter the temperature: ");f=new JLabel();
        t=new JTextField(5);
        b1=new JButton("Convert to C");b1.addActionListener(this);
        b2=new JButton("Convert to F");b2.addActionListener(this);
        o=new JLabel();
        setLayout(new GridLayout(3,2));
        p=new JPanel();p.add(c);p.add(t);add(p);
        p=new JPanel();p.add(b1);p.add(b2);add(p);
        p=new JPanel();p.add(f);p.add(o);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();Double x;
        x=Double.parseDouble(t.getText());
        if(s.equals("Convert to C")){
            o.setText("Degree C");
            f.setText(String.valueOf(((x-32)*5)/9));
        }
        else if(s.equals("Convert to F")){
            o.setText("Degree F");
            f.setText(String.valueOf((x*9/5)+32));
        }
    }
    public static void main(String[] args){
        new F();
    }
}