package PelotaRaqueta;

import org.newdawn.slick.Image;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Rectangle;

public class Pelota {

	protected Image pelota;//contendra la imagen de la pelota
	private Rectangle areaColision;
	protected byte tamañoX;
	protected byte tamañoY;
	protected int X;//Posicion en el eje (X)
	protected int Y;//Posicion en el eje (Y)
	private byte esteNorte;
	private byte esteSur;
	private byte oesteNorte;
	private byte oesteSur;
	private char movimientoHorizotal;//Movimiento actualque lleva la pelota E este, O ostes
	private char movimientoVertical;//Movimiento actualque lleva la pelota N este, S ostes	
	
	public Pelota(){
		
		this.movimientoHorizotal = 'E';
		this.movimientoVertical = 'N';
		this.tamañoX = 40;
		this.tamañoY = 40;
		this.esteNorte = 1;
		this.esteSur = 1;
		this.oesteNorte = 1;
		this.oesteSur = 1;
		this.X = 580;
		this.Y = 320;
		this.areaColision = new Rectangle(this.X, this.Y, this.tamañoX, this.tamañoY);
		
		
		try {
			this.pelota = new Image("Imagenes/Pelota.png");
		} catch (SlickException e) {
			e.printStackTrace();
		}
		
	}
	
	
	
	/*Esta grupo de metodo que son 4 y contienen una estrcutuira de casos que serian 
     24 opciones de movimiento e inclinacion que tendra la pelota
	 * la la inclinacion en (Y) que debe llevar la pelota segun el parametro que reciban
	 * (X) simpre sera connstante*/
	public void movimientoEsteNorte(byte caso){
		switch(caso){
		case 1:
			this.setX(this.getX()+10);
			this.setY(this.getY()-1);
			break;
		case 2:
			this.setX(this.getX()+10);
			this.setY(this.getY()-2);
			break;
		case 3:	
			this.setX(this.getX()+10);
			this.setY(this.getY()-3);
			break;
		case 4:
			this.setX(this.getX()+10);
			this.setY(this.getY()-4);
			break;
		case 5:
			this.setX(this.getX()+10);
			this.setY(this.getY()-5);
			break;
		case 6:
			this.setX(this.getX()+10);
			this.setY(this.getY()-6);
			break;
		
		}
	}

	public void movimientoEsteSur(byte caso){
		switch(caso){
		case 1:
			this.setX(this.getX()+10);
			this.setY(this.getY()+1);
			break;
		case 2:
			this.setX(this.getX()+10);
			this.setY(this.getY()+2);
			break;
		case 3:	
			this.setX(this.getX()+10);
			this.setY(this.getY()+3);
			break;
		case 4:
			this.setX(this.getX()+10);
			this.setY(this.getY()+4);
			break;
		case 5:
			this.setX(this.getX()+10);
			this.setY(this.getY()+5);
			break;
		case 6:
			this.setX(this.getX()+10);
			this.setY(this.getY()+6);
			break;	
		}
	}

	public void movimientoOesteSur(byte caso){
		switch(caso){
		case 1:
			this.setX(this.getX()-10);
			this.setY(this.getY()+1);
			break;	
		case 2:
			this.setX(this.getX()-10);
			this.setY(this.getY()+2);
			break;	
		case 3:	
			this.setX(this.getX()-10);
			this.setY(this.getY()+3);
			break;
		case 4:
			this.setX(this.getX()-10);
			this.setY(this.getY()+4);
			break;
		case 5:
			this.setX(this.getX()-10);
			this.setY(this.getY()+5);
			break;	
		case 6:
			this.setX(this.getX()-10);
			this.setY(this.getY()+6);
			break;
		}
	}

	public void movimientoOesteNorte(byte caso){
		switch(caso){
		case 1:
			this.setX(this.getX()-10);
			this.setY(this.getY()-1);
			break;
		case 2:
			this.setX(this.getX()-10);
			this.setY(this.getY()-2);
			break;
		case 3:	
			this.setX(this.getX()-10);
			this.setY(this.getY()-3);
			break;
		case 4:
			this.setX(this.getX()-10);
			this.setY(this.getY()-4);
			break;
		case 5:
			this.setX(this.getX()-10);
			this.setY(this.getY()-5);
			break;
		case 6:
			this.setX(this.getX()-10);
			this.setY(this.getY()-6);
			break;
		
		}
	}

	
	

	//Bloque de encapsulamiento
	public Image getPelota() {
		return pelota;
	}

	public void setPelota(Image pelota) {
		this.pelota = pelota;
	}

	public byte getTamañoX() {
		return tamañoX;
	}

	public void setTamañoX(byte tamañoX) {
		this.tamañoX = tamañoX;
	}

	public int getX() {
		return X;
	}

	public void setX(int x) {
		X = x;
		this.actualizarAreaColision();
	}

	public byte getTamañoY() {
		return tamañoY;
	}

	public void setTamañoY(byte tamañoY) {
		this.tamañoY = tamañoY;
	}

	public int getY() {
		return Y;
	}

	public void setY(int y) {
		Y = y;
		this.actualizarAreaColision();
	}

	public Rectangle getAreaColision() {
		return areaColision;
	}

	public void setAreaColision(Rectangle areaColision) {
		this.areaColision = areaColision;
	}

	public char getMovimientoHorizotal() {
		return movimientoHorizotal;
	}

	public void setMovimientoHorizotal(char movimientoHorizotal) {
		this.movimientoHorizotal = movimientoHorizotal;
	}

	public char getMovimientoVertical() {
		return movimientoVertical;
	}

	public void setMovimientoVertical(char movimientoVertical) {
		this.movimientoVertical = movimientoVertical;
	}
	
	private void actualizarAreaColision(){
		this.areaColision.setLocation(this.X, this.Y);
	}

	public byte getEsteNorte() {
		return esteNorte;
	}

	public void setEsteNorte(byte esteNorte) {
		this.esteNorte = esteNorte;
	}

	public byte getEsteSur() {
		return esteSur;
	}

	public void setEsteSur(byte esteSur) {
		this.esteSur = esteSur;
	}

	public byte getOesteNorte() {
		return oesteNorte;
	}

	public void setOesteNorte(byte oesteNorte) {
		this.oesteNorte = oesteNorte;
	}

	public byte getOesteSur() {
		return oesteSur;
	}

	public void setOesteSur(byte oesteSur) {
		this.oesteSur = oesteSur;
	}
	
}
