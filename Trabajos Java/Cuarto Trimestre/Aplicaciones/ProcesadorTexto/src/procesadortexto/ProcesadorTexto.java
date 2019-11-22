/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package procesadortexto;

import java.awt.Color;
import java.awt.EventQueue;
import java.awt.Graphics;

import javax.swing.JFrame;
import javax.swing.JPanel;
import javax.swing.border.EmptyBorder;
import javax.swing.JSpinner;
import javax.swing.JLabel;
import javax.swing.JComboBox;
import javax.swing.DefaultComboBoxModel;
import javax.swing.JButton;
import javax.swing.SpinnerNumberModel;
import javax.swing.event.ChangeListener;
import javax.swing.event.ChangeEvent;
import java.awt.event.ItemListener;
import java.awt.event.ItemEvent;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;


public class ProcesadorTexto extends JFrame {

    private JPanel contentPane;
    private JSpinner sp1;
    private JSpinner sp2;
    private JComboBox comboBox;

    /**
     * Launch the application.
     */
    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            public void run() {
                try {
                    ProcesadorTexto frame = new ProcesadorTexto();
                    frame.setVisible(true);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
    }

    /**
     * Create the frame.
     */
    public ProcesadorTexto() {
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setBounds(100, 100, 573, 481);
        contentPane = new JPanel();
        contentPane.setBorder(new EmptyBorder(5, 5, 5, 5));
        setContentPane(contentPane);
        contentPane.setLayout(null);
        
        sp1 = new JSpinner();
        sp1.addChangeListener(new ChangeListener() {
            public void stateChanged(ChangeEvent arg0) {
                repaint();
            }
        });
        sp1.setModel(new SpinnerNumberModel(0, 0, 10, 1));
        sp1.setBounds(162, 51, 55, 28);
        contentPane.add(sp1);
        
        sp2 = new JSpinner();
        sp2.addChangeListener(new ChangeListener() {
            public void stateChanged(ChangeEvent e) {
                repaint();
            }
        });
        sp2.setModel(new SpinnerNumberModel(0, 0, 10, 1));
        sp2.setBounds(162, 150, 55, 28);
        contentPane.add(sp2);
        
        JLabel lblMargenInferior = new JLabel("Margen inferior");
        lblMargenInferior.setBounds(162, 26, 109, 14);
        contentPane.add(lblMargenInferior);
        
        JLabel lblMargenSuperior = new JLabel("Margen superior");
        lblMargenSuperior.setBounds(162, 127, 109, 14);
        contentPane.add(lblMargenSuperior);
        
        JLabel lblHoja = new JLabel("Hoja");
        lblHoja.setBounds(46, 26, 46, 14);
        contentPane.add(lblHoja);
        
        comboBox = new JComboBox();
        comboBox.addItemListener(new ItemListener() {
            public void itemStateChanged(ItemEvent arg0) {
                repaint();
            }
        });
        comboBox.setModel(new DefaultComboBoxModel(new String[] {"Horizontal", "Vertical"}));
        comboBox.setBounds(321, 55, 196, 20);
        contentPane.add(comboBox);
        
        JLabel lblHorientacinDePgina = new JLabel("Horientaciu00F3n de pu00E1gina.");
        lblHorientacinDePgina.setBounds(321, 26, 203, 14);
        contentPane.add(lblHorientacinDePgina);
        
        JButton btnInicializar = new JButton("Inicializar");
        btnInicializar.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent arg0) {
                sp1.setValue(0);
                sp2.setValue(0);
                comboBox.setSelectedIndex(0);
                repaint();
            }
        });
        btnInicializar.setBounds(45, 247, 165, 23);
        contentPane.add(btnInicializar);
    }
    
    public void paint(Graphics g)
    {
        super.paint(g);
        g.setColor(Color.blue);
        g.drawRect(30,80,100,140);
        int ms=Integer.parseInt(sp1.getValue().toString());
        int mi=Integer.parseInt(sp2.getValue().toString());
        g.setColor(Color.red);
        g.drawLine(30,80+ms,130,80+ms);
        g.drawLine(30,220-mi,130,220-mi);
        String direccion=(String)comboBox.getSelectedItem();
        if (direccion.equals("Horizontal"))
            g.drawRect(320,120,200,100    );
        else
            g.drawRect(320,120,100,200    );            
    }
}
