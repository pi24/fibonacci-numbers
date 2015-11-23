/* Copyright (C) 2015 pi24
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#include <iostream>
using namespace std;

int main()
{
	long x;	
	int array[3];
	array[0] = 0;
	array[1] = 1;
	array[2] = 1;	
	while(array[2] <= 4000000)
	{
		array[0] = array[1];
		array[1] = array[2];		
		array[2] = array[0] + array[1];
		if(array[2] % 2 == 0)
		{
			x += array[2];
		}
	}  
cout <<x<< endl;
}
