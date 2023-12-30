// Write a program to find out Factorial of a number using swing
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class B extends JFrame implements ActionListener{
    JButton a;
    JTextField x;
    JLabel i,j,k;JPanel p;
    public B(){
        a=new JButton("Calculate factorial");
        x=new JTextField(5);;
        i=new JLabel("Number : ");j=new JLabel("Factorial : ");k=new JLabel();
        a.addActionListener(this);
        setVisible(true);setSize(500, 500);
        setLayout(new GridLayout(3,4));
        p=new JPanel();p.add(i);p.add(x);add(p);
        p=new JPanel();p.add(a);add(p);
        p=new JPanel();p.add(j);p.add(k);add(p);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    int fact(int n){
        return (n==0||n==1?1:n*fact(n-1));
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();int y,j=1;
        if(s.equals("Calculate factorial")){
            y=Integer.parseInt(x.getText());
            j=fact(y);
        }k.setText(String.valueOf(j));
    }
    public static void main(String[] args){
        new B();
    }
}