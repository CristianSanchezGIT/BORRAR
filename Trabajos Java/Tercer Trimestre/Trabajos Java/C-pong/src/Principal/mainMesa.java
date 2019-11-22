package Principal;

import java.awt.event.ActionEvent;

import java.awt.event.ActionListener;

import javax.swing.JOptionPane;
import javax.swing.Timer;

import org.newdawn.slick.AppGameContainer;
import org.newdawn.slick.BasicGame;
import org.newdawn.slick.GameContainer;
import org.newdawn.slick.Graphics;
import org.newdawn.slick.Input;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Rectangle;

import PelotaRaqueta.*;
import javax.swing.Timer;
import Jugador.Jugador;
import Audio.AudioJuego;

public class mainMesa extends BasicGame {

	private Pelota pelota;
	private Raqueta raqueta1;//
	private Raqueta raqueta2;
	private javax.swing.Timer tiempo;// Mepermite manejar la velocidad de la pelota, y los tiempos de Pausa deljuego
	private Input tecla;// vamos a detectar las teclas,para mover las raquetas y pausar el juego y despausarlo
	private Rectangle areaColisionArriba;//Area de colision para que la pelota tenga un movimiento positivo sies negativo
	private Rectangle areaColisionAabajo;//Area de colision para que la pelota tenga un movimiento //negativo sies psitivo
	static Jugador jugador1;
	static Jugador jugador2;
	private boolean juegoPausad;
	

	static AppGameContainer contenedor;

	public mainMesa(String title) {
		super(title);
		this.juegoPausad = false;
		// TODO Auto-generated constructor stub



	}

	@Override
	public void render(GameContainer arg0, Graphics g) throws SlickException {
		// TODO Auto-generated method stub	
		
		// estas tres lineas dibujan las lineas que dividen el tablero
		g.drawLine(600, 100, 600, 600);
		g.drawLine(0, 100, 1200, 100);
		g.drawRect(0, 599, 1200, 599);
		
		
		
		this.pelota.getPelota().draw(this.pelota.getX(), this.pelota.getY());
		this.raqueta1.getRaqueta().draw(this.raqueta1.getX(), this.raqueta1.getY());
		this.raqueta2.getRaqueta().draw(this.raqueta2.getX(), this.raqueta2.getY());
		this.tecla = arg0.getInput();
		
		if(this.juegoPausad){
			g.drawString("      Juego pausado\n\npresione Enter para comenzar", 475, 180);
		}
		
		actualizarPuntaje(g);
		
	}

	@Override
	public void init(GameContainer container) throws SlickException {
		
		this.juegoPausad = true;
		this.pelota = new Pelota();
		this.raqueta1 = new Raqueta(0, 250);//raqueta derecha
		this.raqueta2 = new Raqueta(1160, 250);//raqueta izquierda
		this.areaColisionArriba = new Rectangle (0, 0, 1200, 100); 
		this.areaColisionAabajo = new Rectangle (0, 599, 1200, 599);
		tiempo = new Timer(12, new ClaseTimer());//imstancia de laclaset tiempo para manejar la velocidad de la pelota
		
	}

	@Override
	public void update(GameContainer container, int delta)
			throws SlickException {	
		this.detectarTecla();
		this.actualizarPuntos();

		
	}
	
	
	//Vamos a darle la direccion a la pelota segun donde golpee son 24 direcciones, y estan definifos en la clase Pelota
	//pero este metodo establese el movimiento segun la direccion que traiga la pelota donde golpee
	//inclinacion en (Y) que tenga, el movimiento que tenga N,S,O,E
	private void movimientoPelota(){

		byte caso = 0;

		if(this.pelota.getAreaColision().intersects(this.raqueta1.getAreaColision())){
			this.pelota.setMovimientoHorizotal('E');

			if(this.pelota.getMovimientoVertical() == 'N'){

				if(this.pelota.getEsteNorte() == 1){
					caso = 2;
					this.pelota.setEsteNorte(caso);
				}else if(this.pelota.getEsteNorte() == 2){
					caso = 3;
					this.pelota.setEsteNorte(caso);
				} else if(this.pelota.getEsteNorte() == 3){
					caso = 4;
					this.pelota.setEsteNorte(caso);
				} else if(this.pelota.getEsteNorte() == 4){
					caso = 5;
					this.pelota.setEsteNorte(caso);
				} else if(this.pelota.getEsteNorte() == 5){
					caso = 6;
					this.pelota.setEsteNorte(caso);
				} else if(this.pelota.getEsteNorte() == 6){
					caso = 1;
					this.pelota.setEsteNorte(caso);
				}
				
				

			}else{

				if(this.pelota.getEsteSur() == 1){
					caso = 2;
					this.pelota.setEsteSur(caso);
				}else if(this.pelota.getEsteSur() == 2){
					caso = 3;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 3){
					caso = 4;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 4){
					caso = 5;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 5){
					caso = 6;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 6){
					caso = 1;
					this.pelota.setEsteSur(caso);
				}

			}
			
			AudioJuego.sonidoBeepMenu();// simpre que golpe una raqueta se llame el metodo estatico de la clase AudioJuego que 
			//genera un beep

		}


		if(this.pelota.getAreaColision().intersects(this.raqueta2.getAreaColision())){
			this.pelota.setMovimientoHorizotal('O');

			if(this.pelota.getMovimientoVertical() == 'N'){

				if(this.pelota.getOesteNorte() == 1){
					caso = 2;
					this.pelota.setOesteNorte(caso);
				}else if(this.pelota.getOesteNorte() == 2){
					caso = 3;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 3){
					caso = 4;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 4){
					caso = 5;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 5){
					caso = 6;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 6){
					caso = 1;
					this.pelota.setOesteNorte(caso);
				}

			}else{

				if(this.pelota.getOesteSur() == 1){
					caso = 2;
					this.pelota.setOesteSur(caso);
				}else if(this.pelota.getOesteSur() == 2){
					caso = 3;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 3){
					caso = 4;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 4){
					caso = 5;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 5){
					caso = 6;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 6){
					caso = 1;
					this.pelota.setOesteSur(caso);
				}

			}
			
			AudioJuego.sonidoBeepMenu();
		}



		if(this.pelota.getAreaColision().intersects(this.areaColisionArriba)){
			this.pelota.setMovimientoVertical('S');

			if(this.pelota.getMovimientoHorizotal()== 'E'){		

				if(this.pelota.getEsteSur() == 1){
					caso = 2;
					this.pelota.setEsteSur(caso);
				}else if(this.pelota.getEsteSur() == 2){
					caso = 3;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 3){
					caso = 4;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 4){
					caso = 5;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 5){
					caso = 6;
					this.pelota.setEsteSur(caso);
				}else  if(this.pelota.getEsteSur() == 6){
					caso = 1;
					this.pelota.setEsteSur(caso);
				}
			}else{

				if(this.pelota.getOesteSur() == 1){
					caso = 2;
					this.pelota.setOesteSur(caso);
				}else if(this.pelota.getOesteSur() == 2){
					caso = 3;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 3){
					caso = 4;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 4){
					caso = 5;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 5){
					caso = 6;
					this.pelota.setOesteSur(caso);
				}else  if(this.pelota.getOesteSur() == 6){
					caso = 1;
					this.pelota.setOesteSur(caso);
				}
			}
		}
		if(this.pelota.getAreaColision().intersects(this.areaColisionAabajo)){
			this.pelota.setMovimientoVertical('N');

			if(this.pelota.getMovimientoHorizotal()== 'E'){		

				if(this.pelota.getEsteNorte() == 1){
					caso = 2;
					this.pelota.setEsteNorte(caso);
				}else if(this.pelota.getEsteNorte() == 2){
					caso = 3;
					this.pelota.setEsteNorte(caso);
				}else  if(this.pelota.getEsteNorte() == 3){
					caso = 4;
					this.pelota.setEsteNorte(caso);
				}else  if(this.pelota.getEsteNorte() == 4){
					caso = 5;
					this.pelota.setEsteNorte(caso);
				}else  if(this.pelota.getEsteNorte() == 5){
					caso = 6;
					this.pelota.setEsteNorte(caso);
				}else  if(this.pelota.getEsteNorte() == 6){
					caso = 1;
					this.pelota.setEsteNorte(caso);
				}

			}else{

				if(this.pelota.getOesteNorte() == 1){
					caso = 2;
					this.pelota.setOesteNorte(caso);
				}else if(this.pelota.getOesteNorte() == 2){
					caso = 3;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 3){
					caso = 4;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 4){
					caso = 5;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 5){
					caso = 6;
					this.pelota.setOesteNorte(caso);
				}else  if(this.pelota.getOesteNorte() == 6){
					caso = 1;
					this.pelota.setOesteNorte(caso);
				}
			}
		}

	}

	
	//leemos la teclas presionadss en el trabajo y las clasificamos
	//A y Z, para arriba y abajo de laraqueta izquierda y solose mueven si el jeugo no esta pausado
	//Up, Down, para arriba y abajo de la raqueta derecha y solose mueven si el jeugo no esta pausado
	//Espace pausa el juegio
	//Enter despausa el juego
	//
	private void detectarTecla(){
		if(tecla.isKeyDown(Input.KEY_UP) && !this.juegoPausad){
			if(this.raqueta2.getY() > 100){
				this.raqueta2.setY(this.raqueta2.getY()-1);
			}
		}

		if(tecla.isKeyDown(Input.KEY_DOWN) && !this.juegoPausad){
			if(this.raqueta2.getY() < 420){
				this.raqueta2.setY(this.raqueta2.getY()+1);
			}
		}

		if(tecla.isKeyDown(Input.KEY_A) && !this.juegoPausad){
			if(this.raqueta1.getY() > 100){
				this.raqueta1.setY(this.raqueta1.getY()-1);
			}
		}

		if(tecla.isKeyDown(Input.KEY_Z) && !this.juegoPausad){
			if(this.raqueta1.getY() < 420){
				this.raqueta1.setY(this.raqueta1.getY()+1);
			}
		}
		
		
		if(tecla.isKeyDown(Input.KEY_SPACE) && !this.juegoPausad){
			this.tiempo.stop();
			this.juegoPausad = true;
		}
		if(tecla.isKeyDown(Input.KEY_ENTER) && this.juegoPausad){
			this.tiempo.start();
			this.juegoPausad = false;
		}
	}


	
	private void actualizarPuntaje(Graphics g){//diujamos el contenedor elresultado
		
         g.drawString(this.jugador1.getNombre()+":  "+this.jugador1.getPuntos()+"  Vs  "+
        		 this.jugador2.getPuntos()+":  "+this.jugador2.getNombre() , 470, 50);
         
	}
	
	
	//Segun la posicion X de la pelota se estable elpuntaje
	//si la posicion X de pelota es negativa es punto para el jugador dos
	//si la posicion X de la pelota es mayor a 1200 el punto es para eljugador 1
	//se para el tiempo se pausa el juego se crean intancias, de los obejtos raqueta y pelota
	//Y los objetos anteriores se igualan a a las nuevas intancias
	private void actualizarPuntos(){
		if(this.pelota.getX()< 0 ){
			
			this.tiempo.stop();
			Pelota nueva = new Pelota();
			Raqueta r1 = new Raqueta(0, 250);
			Raqueta r2 = new Raqueta(1160, 250);
			this.raqueta1 = r1;
			this.raqueta2 = r2;
			this.pelota = nueva;
			this.juegoPausad = true;
			
			this.jugador2.setPuntos(this.jugador2.getPuntos()+1);
		}else if(this.pelota.getX()> 1200){
			
			this.tiempo.stop();
			Pelota nueva = new Pelota();
			Raqueta r1 = new Raqueta(0, 250);
			Raqueta r2 = new Raqueta(1160, 250);
			this.raqueta1 = r1;
			this.raqueta2 = r2;
			this.pelota = nueva;
			this.jugador1.setPuntos(this.jugador1.getPuntos()+1);
			this.juegoPausad = true;
		}	
	}




	public static void main(String []args) throws SlickException{
		/*Es totalmente obligatorio que los jugadores coloquen su nombre para poder iniziar el juegi
		 * si los judores no pponen sus nombres no se lespermite seguir*/
		
		String j1, j2;
		j1 = JOptionPane.showInputDialog("ingrese el nombre del\njugador 1");
		while (j1.equals("")) {
			j1 = JOptionPane.showInputDialog("debe ingresar un nombre\ningrese el nombre del\njugador 1");
		}

		j2 = JOptionPane.showInputDialog("ingrese el nombre del\njugador 2");
		while (j2.equals("")) {
			j2 = JOptionPane.showInputDialog("debe ingresar un nombre\ningrese el nombre del\njugador 2");
		}

		jugador1 = new Jugador(j1);
		jugador2 = new Jugador(j2);

		contenedor = new AppGameContainer(new mainMesa(""));//creamos un conteenedor que llevara este juego como parametro
		contenedor.setDisplayMode(1200, 600, false);//el parametro con la propiedad false, es para evitar que ocupe toda la panttalla
		contenedor.start();
	}





	public class ClaseTimer implements ActionListener {

		public void actionPerformed(ActionEvent e) {

			movimientoPelota();

			if(pelota.getMovimientoHorizotal() == 'E' && pelota.getMovimientoVertical() == 'N'){ 
				pelota.movimientoEsteNorte(pelota.getEsteNorte());

			}

			if(pelota.getMovimientoHorizotal() == 'E' && pelota.getMovimientoVertical() == 'S'){
				pelota.movimientoEsteSur(pelota.getEsteSur());

			}

			if(pelota.getMovimientoHorizotal() == 'O' && pelota.getMovimientoVertical() == 'N'){
				pelota.movimientoOesteNorte(pelota.getOesteNorte());
			}

			if(pelota.getMovimientoHorizotal() == 'O' && pelota.getMovimientoVertical() == 'S'){
				pelota.movimientoOesteSur(pelota.getOesteSur());
			}

		}
	}

}
