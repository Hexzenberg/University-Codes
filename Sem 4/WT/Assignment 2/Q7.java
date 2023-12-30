//WAP to convert Temperature from Centigrade to fahrenheit
import java.applet.*;
import java.awt.*;
import java.awt.event.*;
public class Q7 extends Applet implements ActionListener{
    Label c,f,o;
    TextField t;
    Button b;
    public void init(){
        c=new Label("Temp in C");
        t=new TextField(20);
        b=new Button("Convert");
        f=new Label();
        o=new Label("Degree F");
        add(c);add(t);add(b);add(f);add(o);
        b.addActionListener(this);
    }
    public void actionPerformed(ActionEvent a){
        String s=a.getActionCommand();
        if(s=="Convert"){
            Double x,y;
            x=Double.parseDouble(t.getText());
            y=((9.0/5.0)*x)+32;
            f.setText(String.valueOf(y));
        }
    }
}
/*
    <html>
    <applet code=Q7 height=500 width=500></applet>
    </html>
*/