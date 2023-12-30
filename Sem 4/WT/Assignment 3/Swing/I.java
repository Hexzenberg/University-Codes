// Write a java program to find out the GCD of three number using swing.
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
public class I extends JFrame implements ActionListener{
    JLabel a,b,c,o,g;
    JButton f;JPanel p;
    JTextField t1,t2,t3;
    public I(){
        a=new JLabel("Num 1");b=new JLabel("Num 2");c=new JLabel("Num 3");o=new JLabel();
        g=new JLabel("GCD: ");f=new JButton("Calculate GCD");f.addActionListener(this);
        t1=new JTextField(5);t2=new JTextField(5);t3=new JTextField(5);
        setLayout(new GridLayout(5,2));
        p=new JPanel();p.add(a);p.add(t1);add(p);
        p=new JPanel();p.add(b);p.add(t2);add(p);
        p=new JPanel();p.add(c);p.add(t3);add(p);
        p=new JPanel();p.add(f);add(p);
        p=new JPanel();p.add(g);p.add(o);add(p);
        setVisible(true);
        setSize(500,500); 
        setTitle("My window");
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int x,y,z;
        if(s=="Calculate GCD"){
            x=Integer.parseInt(t1.getText());y=Integer.parseInt(t2.getText());z=Integer.parseInt(t3.getText());
            int i=((x<=y&&x<=z)?x:(y<=x&&y<=z)?y:z),k=1;
            for(int j=2;j<=i;j++)if(x%j==0&&y%j==0&&z%j==0)k=j;
            o.setText(String.valueOf(k));
        }
    }
    public static void main(String[] args){
        new I();
    }
}
