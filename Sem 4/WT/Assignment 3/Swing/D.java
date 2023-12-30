// Write a program that helps in creating 3 push buttons the names of 3 colour (Yellow, Blue, Pink).
// When a button is clicked, that particular color is set as background color in the frame
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class D extends JFrame implements ActionListener{
    JButton y,b,r;
    JPanel p;
    public D(){
        y=new JButton("Yellow");y.addActionListener(this); 
        b=new JButton("Blue");b.addActionListener(this); 
        r=new JButton("Pink");r.addActionListener(this); 
        setLayout(new GridLayout(1,3)); 
        p=new JPanel();p.add(y);p.add(b);p.add(r);add(p); 
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("Yellow"))p.setBackground(Color.YELLOW);
        else if(s.equals("Blue"))p.setBackground(Color.BLUE);
        else if(s.equals("Pink"))p.setBackground(Color.PINK);
    }
    public static void main(String args[]){
        new D();
    }
}