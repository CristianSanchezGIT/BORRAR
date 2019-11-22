package PelotaRaqueta;

import org.newdawn.slick.Image;
import org.newdawn.slick.SlickException;
import org.newdawn.slick.geom.Rectangle;
import org.newdawn.slick.Graphics;

public class Raqueta {

	private Image Raqueta;//Contendra laimagen
	private Rectangle areaColision;
	protected byte tamañoX;
	protected int tamañoY;
	protected int X;//Posicion en el eje X
	protected int Y;//Posicione en el eje Y
	

	public Raqueta(int x, int y){

		this.tamañoX = 40;
		this.tamañoY = 180;
		this.X = x;
		this.Y = y;
		this.areaColision = new Rectangle(this.X, this.Y, this.tamañoX, this.tamañoY);


		try {
			this.Raqueta = new Image("Imagenes/Raqueta.png");
		} catch (SlickException e) {
			e.printStackTrace();
		}
	}





	//Bloque de encapsulamiento 
	//dentro de los metodes setX(); y setY(), se invoca almetodo setLocation, del aradecolison
	//para que esta se mueevame al mismo lugar del area de colision
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
		this.areaColision.setLocation(this.X, this.Y);
	}

	public int getTamañoY() {
		return tamañoY;
	}

	public void setTamañoY(int tamañoY) {
		this.tamañoY = tamañoY;
	}

	public int getY() {
		return Y;
	}

	public void setY(int y) {
		Y = y;
		this.areaColision.setLocation(this.X, this.Y);
	}

	public Rectangle getAreaColision() {
		return areaColision;
	}

	public void setAreaColision(Rectangle areaColision) {
		this.areaColision = areaColision;
	}

	public Image getRaqueta() {
		return Raqueta;
	}

	public void setRaqueta(Image raqueta) {
		Raqueta = raqueta;
	}
}
