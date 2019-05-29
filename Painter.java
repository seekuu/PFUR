
import javax.swing.*; 
import java.awt.*; 
import java.awt.event.*; 

public class Painter extends Frame implements MouseMotionListener, MouseListener { 

int x,y,last_x, last_y; 
String xo;
int[] moves = new int[9];
Graphics g; 
Color c;
int i=0; 


Painter() { 
	super(); 
	setVisible(true); 
	setSize(300,350); 
	setLayout(null);
	for(int i=0;i<9;i++){
	moves[i]=5;} 

/*Button b3 = new Button("exit"); 
b3.setBounds(400, 50, 50, 50); 
add(b3); 

b3.addActionListener(new ActionListener() { 
@Override 
public void actionPerformed(ActionEvent e) { 
System.exit(0); 
} 
}); 

Button b4 = new Button("clear"); 
b4.setBounds(50, 50, 50, 50); 
add(b4); 

b4.addActionListener(new ActionListener() { 
@Override 
public void actionPerformed(ActionEvent e) { 
g.clearRect(0, 0, getWidth(), getHeight()); 
} 
}); */ 

	addWindowListener(new WindowAdapter() { 
    	public void windowClosing(WindowEvent e) { 
        	System.exit(0); 
    	}});
    Button b1 = new Button(xo); 
    Button b2 = new Button(xo); 
    Button b3 = new Button(xo); 
    Button b4 = new Button(xo); 
    Button b5 = new Button(xo); 
    Button b6 = new Button(xo); 
    Button b7 = new Button(xo); 
    Button b8 = new Button(xo); 
    Button b9 = new Button(xo); 
    b1.setBounds(0,50,100,100);
    b2.setBounds(0,150,100,100); 
    b3.setBounds(0,250,100,100); 
    b4.setBounds(100,50,100,100); 
    b5.setBounds(100,150,100,100); 
    b6.setBounds(100,250,100,100); 
    b7.setBounds(200,50,100,100); 
    b8.setBounds(200,150,100,100); 
    b9.setBounds(200,250,100,100);
    add(b1); 
    add(b2); 
    add(b3); 
    add(b4); 
    add(b5); 
    add(b6); 
    add(b7); 
    add(b8); 
    add(b9);
    b1.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) {
		if (b1.getLabel()==null){
		if(i%2==0){
		b1.setLabel("O");
		moves[0]=0;
		}
		if(i%2==1){
		b1.setLabel("X");
		moves[0]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b2.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b2.getLabel()==null){
		if(i%2==0){
		b2.setLabel("O");
		moves[1]=0;
		}
		if(i%2==1){
		b2.setLabel("X");
		moves[1]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});

    b3.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b3.getLabel()==null){
		if(i%2==0){
		b3.setLabel("O");
		moves[2]=0;
		}
		if(i%2==1){
		b3.setLabel("X");
		moves[2]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b4.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b4.getLabel()==null){
		if(i%2==0){
		b4.setLabel("O");
		moves[3]=0;
		}
		if(i%2==1){
		b4.setLabel("X");
		moves[3]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b5.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b5.getLabel()==null){
		if(i%2==0){
		b5.setLabel("O");
		moves[4]=0;
		}
		if(i%2==1){
		b5.setLabel("X");
		moves[4]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b6.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b6.getLabel()==null){
		if(i%2==0){
		b6.setLabel("O");
		moves[5]=0;
		}
		if(i%2==1){
		b6.setLabel("X");
		moves[5]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b7.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b7.getLabel()==null){
		if(i%2==0){
		b7.setLabel("O");
		moves[6]=0;
		}
		if(i%2==1){
		b7.setLabel("X");
		moves[6]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b8.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b8.getLabel()==null){
		if(i%2==0){
		b8.setLabel("O");
		moves[7]=0;
		}
		if(i%2==1){
		b8.setLabel("X");
		moves[7]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});
    b9.addActionListener(new ActionListener() { 
	@Override 
	public void actionPerformed(ActionEvent e) { 
		if (b9.getLabel()==null){
		if(i%2==0){
		b9.setLabel("O");
		moves[8]=0;
		}
		if(i%2==1){
		b9.setLabel("X");
		moves[8]=1;
		}
		i++;
		if(check()==1)System.exit(0);}
}});

	//addMouseListener(this); 
	//addMouseMotionListener(this); 

	//createMenu(); 
} 
public int check(){
	if (moves[0]==moves[1] && moves[1]==moves[2] && moves[2]==0){
		System.out.println("WIN 1");
		return 1;
	}
	else if (moves[3]==moves[4] && moves[4]==moves[5] && moves[5]==0){
		System.out.println("WIN 1");
		return 1;
	}
	else if (moves[6]==moves[7] && moves[7]==moves[8] && moves[8]==0){
		System.out.println("WIN 1");
		return 1;
	}
	else if (moves[0]==moves[4] && moves[4]==moves[8] && moves[8]==0){
		System.out.println("WIN 1");
		return 1;
	}
	else if (moves[2]==moves[4] && moves[4]==moves[6] && moves[6]==0){
		System.out.println("WIN 1");
		return 1;
	}
	else if (moves[0]==moves[1] && moves[1]==moves[2] && moves[2]==1){
		System.out.println("WIN 2");
		return 1;
	}
	else if (moves[3]==moves[4] && moves[4]==moves[5] && moves[5]==1){
		System.out.println("WIN 2");
		return 1;
	}
	else if (moves[6]==moves[7] && moves[7]==moves[8] && moves[8]==1){
		System.out.println("WIN 2");
		return 1;
	}
	else if (moves[0]==moves[4] && moves[4]==moves[8] && moves[8]==1){
		System.out.println("WIN 2");
		return 1;
	}
	else if (moves[2]==moves[4] && moves[4]==moves[6] && moves[6]==1){
		System.out.println("WIN 2");
		return 1;
	}
	else return 0;
}



public static void main(String[] args) { 
Painter p = new Painter(); 
} 

@Override 
public void mouseClicked(MouseEvent e) { 
		  if(e.getButton() == MouseEvent.BUTTON1) {
            	//b3.setLabel("O");;
          }
          if(e.getButton() == MouseEvent.BUTTON3) {
            	//b3.setLabel("X");;
          }

} 

@Override 
public void mousePressed(MouseEvent e) { 

} 

@Override 
public void mouseReleased(MouseEvent e) { 

} 

@Override 
public void mouseEntered(MouseEvent e) { 

} 

@Override 
public void mouseExited(MouseEvent e) { 

} 

@Override 
public void mouseDragged(MouseEvent e) { 

} 

@Override 
public void mouseMoved(MouseEvent e) { 

} 
}
