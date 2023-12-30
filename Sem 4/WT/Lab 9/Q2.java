//WAP to create a calculator
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class Q2 extends Applet implements ActionListener{
    Label num1,num2,o,r;
    Button a,s,m,d;
    TextField t1,t2;
    int x,y,z;
    public void init(){
        num1=new Label("num1");
        num2=new Label("num2");
        o=new Label("output");
        a=new Button("+"); 
        s=new Button("-"); 
        m=new Button("*"); 
        d=new Button("/"); 
        t1=new TextField(20);
        t2=new TextField(20);
        r=new Label();
        add(num1);add(t1);add(num2);add(t2);
        add(a);add(s);add(m);add(d);add(o);add(r);
        a.addActionListener(this);s.addActionListener(this);
        m.addActionListener(this);d.addActionListener(this);
    }
    public void actionPerformed(ActionEvent a){
        String str=a.getActionCommand();
        x=Integer.parseInt(t1.getText());
        y=Integer.parseInt(t2.getText());
        if(str.equals("+"))z=x+y;
        else if(str.equals("-"))z=x-y;
        else if(str.equals("*"))z=x*y;
        else if(str.equals("/"))z=x/y;
        r.setText(String.valueOf(z));
    }
}
/* 
    <html> 
    <applet code=Q2 height=500 width=500> 
    </applet> 
    </html> 
*/

