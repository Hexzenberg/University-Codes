import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class B extends JFrame implements ActionListener{
    JLabel l1,l2,l3,l4,l5;
    JButton b;JPanel p;
    JTextField t1,t2,t3;
    public B(){
        l1=new JLabel("Num 1");l2=new JLabel("Num 2");l3=new JLabel("Num 3");
        l4=new JLabel("Output:");l5=new JLabel();b=new JButton("Find Min");b.addActionListener(this);
        t1=new JTextField(5);t3=new JTextField(5);t2=new JTextField(5);
        setLayout(new GridLayout(5,1));
        p=new JPanel();p.add(l1);p.add(t1);add(p);
        p=new JPanel();p.add(l2);p.add(t2);add(p);
        p=new JPanel();p.add(l3);p.add(t3);add(p);
        p=new JPanel();p.add(b);add(p);
        p=new JPanel();p.add(l4);p.add(l5);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent e){
        String s=e.getActionCommand();
        if(s=="Find Min"){
            int a=Integer.parseInt(t1.getText()),b=Integer.parseInt(t2.getText()),c=Integer.parseInt(t3.getText());
            l5.setText(String.valueOf((a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c));
        }
    }
    public static void main(String[] args){
        new B();
    }
}