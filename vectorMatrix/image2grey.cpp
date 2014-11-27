#include "image2grey.h"
#include <string>
#include <fstream>
#include <iostream>
Image2DGrey::Image2DGrey() : Image2D<unsigned char>(){
}

void Image2DGrey::save_PGM(const std::string& filename) const
{
	//set
	std::ofstream file(filename.c_str(), std::ios::out | std::ios::trunc);
	if(file)
	{
		int ppl = 17;
		file << "P2" << std::endl;  //p2 = pgm ascii
		file << "File by Brunnemer Nicolas" << std::endl;
		file << get_width() << " " << get_height() << std::endl; //sizes
		file << "255"; // set max value

		//write
		for (int i=0;i<get_height()*get_width();i++)
		{
			if(i%ppl == 0)
			{
				file << std::endl;
			}
			file << " " << (int) m_buff[i];
		}
		file.close();
	}
	else
		std::cout << "ERREUR LORS DE LA SAUVEGARDE DU FICHIER PGM." << std::endl;
}



void Image2DGrey::load_PGM(const std::string &filename)
{
	std::ifstream file(filename.c_str(), std::ios::in);
	std::string magic_number, line;
	getline(file,magic_number);

	while(file.peek() == '#' && !file.eof())
	{
		getline( file, line);
	}

	int width, height;
	file >> width >> height ;
	resize(width, height);

	int max;
	file >> max;

	for (int y=0;y<get_height();y++)
	{
			for (int x=0;x<get_width();x++)
			{
				int pixel;
				file >> pixel;
				set_pixel(x,y, pixel * 255 / max);
			}
		}
	file.close();
}


Image2D<unsigned char> Image2DGrey::down_sample() const
{
	Image2D newImage (get_width() / 2, get_height() / 2);
	for (int y=0; y < newImage.get_height();y++)
	{
		int oldY = y * 2;
		for (int x=0; x<newImage.get_width();x++)
		{
			int oldX = x * 2;

			int sample1 = get_pixel(oldX, oldY);
			int sample2 = get_pixel(oldX + 1, oldY);
			int sample3 = get_pixel(oldX, oldY + 1);
			int sample4 = get_pixel(oldX + 1, oldY + 1);

			newImage.set_pixel(x,y, (sample1 + sample2 + sample3 + sample4) / 4);
		}

	}
	return newImage;
}


Image2DGrey Image2DGrey::blur(unsigned int n ) const
{
	Image2DGrey newImage(*this);

	for (int y=0;y<get_height();y++)
	{
		for (int x=0;x<get_width();x++)
		{
			int new_pixel(0);

			int min_x = std::max<int>(0,x - n);
			int max_x = std::min<int>(get_width()-1, x+n);

			int min_y = std::max<unsigned int>(0, y-n);
			int max_y = std::min<unsigned int>(get_height() - 1, y + n);

			int size = (max_x - min_x + 1) * (max_y - min_y + 1);

			for (int yInside = min_y; yInside <= max_y; yInside++)
			{
				for (int xInside = min_x; xInside <= max_x; xInside++)
				{
					new_pixel += get_pixel(xInside, yInside);
				}
			}
			newImage.set_pixel(x,y, new_pixel / size);
		}
	}
	return newImage;
}


