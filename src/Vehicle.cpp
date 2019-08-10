/*
 * Copyright (c) 2019 <copyright holder> <email>
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following
 * conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 * 
 */

#include "src/Vehicle.h"

Vehicle::Vehicle()
{

}

Vehicle::Vehicle(const Vehicle& other)
{

}

Vehicle::~Vehicle()
{

}

Vehicle& Vehicle::operator=(const Vehicle& other)
{

}

bool Vehicle::operator==(const Vehicle& other) const
{

}

uint_16 Vehicle::getVehicleId()
{
  return vehicleID;
}

double Vehicle::getTargetVelocity()
{
  return targetVelocity;
}

double Vehicle::getMaxAcceleration()
{
  return maxAcceleration;
}

double Vehicle::getTargetDeceleration()
{
  return targetDeceleration;
}

Position Vehicle::getPosition()
{
  return position;
}

Position Vehicle::getStartingPosition()
{
  return startingPosition;
}

double Vehicle::getPoliteness()
{
  return politeness;
}

double Vehicle::getMinDistance()
{
  return getMinDistance();
}
