// //03/04/23
// //Create three buttons blue, green and red that change the bgd color
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class Q1 extends JFrame implements ActionListener{
    JButton b,g,r;
    JPanel p;
    public Q1(){
        b=new JButton("Blue");b.addActionListener(this); 
        g=new JButton("Green");g.addActionListener(this); 
        r=new JButton("Red");r.addActionListener(this); 
        setLayout(new GridLayout(1,3)); 
        p=new JPanel();p.add(b);p.add(g);p.add(r);add(p); 
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE); 
    } 
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s.equals("Blue"))p.setBackground(Color.BLUE);
        else if(s.equals("Green"))p.setBackground(Color.GREEN);
        else if(s.equals("Red"))p.setBackground(Color.RED);
    }
    public static void main(String args[]){
        new Q1();
    }
}