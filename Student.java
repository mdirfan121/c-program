import java.awt.event.ActionEvent.*;
import java.awt.event.ActionListener.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.Statement;
import java.awt.FlowLayout.*;
import java.awt.*; 
import java.awt.event.*;
import java.sql.*;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JTextField;

class Student extends JFrame implements ActionListener
{
     JButton button1;
	 JButton button2;
	 JButton button3;
	 JButton button4;
	 JButton button5;
	 JButton button6;
	 TextArea ta1;
	 TextArea ta2;
	 TextArea ta3;
	 JFrame frame1;

	 Student()
	{
		 button1=new JButton("ADD");
		 add(button1);
		 button2=new JButton("UPDATE");
		 add(button2);
		 button3=new JButton("SEARCH");
		 add(button3);
		 button4=new JButton("DELETE");
		 add(button4);
		 button5=new JButton("CLOSE");
		 add(button5);
		
		 setLayout(new FlowLayout());
		 setSize(600,600);
		 setVisible(true);
		  button1.addActionListener(this);
	}
		
		public void actionPerformed(ActionEvent e)
	{

				    if(button1==e.getSource())
		         {
		          
			       frame1=new JFrame();
				   frame1.setSize(400,400);
			       ta1=new TextArea();
			       frame1.add(ta1);
			       ta2=new TextArea();
			       frame1.add(ta2);
			       ta3=new TextArea();
			       frame1.add(ta3);
			       button6=new JButton("ok");
			       frame1.add(button6);
				   button6.addActionListener(this);
				   frame1.setLayout(new GridLayout(10,10));
				   frame1.setVisible(true);
				 }
				   if(button6==e.getSource())
                   {
			        String sid=ta1.getText();
			        String sname=ta2.getText();
			        String scontact=ta3.getText();
				    try
		            {	
				    Class.forName("oracle.jdbc.driver.OracleDriver");
		            Connection connection=DriverManager.getConnection("jdbc:oracle:thin:@localhost:1521:xe","system","oracle");
		            Statement st=connection.createStatement();
					//st.executeUpdate("create table Student(eid varchar2(20),sname varchar2(20),scontact varchar2(20)");
			        st.executeUpdate("insert into Student values('"+sid+"','"+sname+"','"+scontact+"')");
					System.out.println("okie");
		            }
                     catch(Exception ex)
		           {
			         ex.printStackTrace();
		           }
			      }
			     
			  
	   }
	    public static void main(String... args)
		{
			 Student st=new Student();
		}
}   