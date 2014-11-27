#include "image2rgb.h"
#include <string>
#include <fstream>
#include <iostream>


Image2DRGB::Image2DRGB()
{}

void Image2DRGB::save_PPM(const std::string &filename) const
{
	std::ofstream file(filename.c_str(), std::ios::out | std::ios::trunc);
	if(file)
	{
		file << "P3" << std::endl;  // p3 ppm ascii
		file << "File by Brunnemer Nicolas" << std::endl;
		file << get_width() << " " << get_height() << std::endl; //sizes
		file << "255" << std::endl; //set max value


		//Now write datas
		for (int y=0;y <get_height();y++)
		{
			for (int x=0;x<get_width();x++)
			{
				if (x) file << "\t";
				const v3uc& currPixel = get_pixel(x,y);
				file << (int) currPixel[0] << " " << (int) currPixel[1] << " " << (int) currPixel[2];
			}
			file << std::endl;
		}
		file.close();
	}
}




void Image2DRGB::load_PPM( const std::string& filename)
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
				unsigned int pixelR;
				unsigned int pixelG;
				unsigned int pixelB;

				file >> pixelR >> pixelG >> pixelB;
				set_pixel(x,y, v3uc(pixelR * 255 / max,
							 pixelG * 255 / max,
							 pixelB * 255 / max));
			}
		}
	file.close();

}
