// Write a java program check given year is leap year or not using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class H extends JFrame implements ActionListener{
    JLabel a,o;
    JButton f;JPanel p;
    JTextField g;
    public H(){
        a=new JLabel("Enter the year");o=new JLabel();
        f=new JButton("Check for leap year");f.addActionListener(this);
        g=new JTextField(5);
        setLayout(new GridLayout(3,2));
        p=new JPanel();p.add(a);p.add(g);add(p);
        p=new JPanel();p.add(f);add(p);
        p=new JPanel();p.add(o);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int y;
        if(s=="Check for leap year"){
            y=Integer.parseInt(g.getText());
            o.setText((y%4==0&&y%100!=0||y%400==0)?"Leap Year":"Not a leap year");
        }
    }
    public static void main(String[] args){
        new H();
    }
}