using namespace System::Drawing;
using namespace System::Windows::Forms; 


 ref class Grid{

private:

	PictureBox^ pictureBox;
	
public:

	Grid(PictureBox^ pictureBox){
		this->pictureBox = pictureBox;
	}

	void drawGrid(Graphics ^graphics) {
		for (int x = 0; x <= pictureBox->Width; x += (pictureBox->Width / 5)) {
			graphics->DrawLine(System::Drawing::Pens::Black, x, 0, x, pictureBox->Height);
		}

		for (int y = 0; y <= pictureBox->Height; y += (pictureBox->Height / 5)) {
			graphics->DrawLine(System::Drawing::Pens::Black, 0, y, pictureBox->Width, y);
		}
	}

};