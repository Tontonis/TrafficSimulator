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

#ifndef VEHICLE_H
#define VEHICLE_H

class Position{
private:
  Street &street;
  unsigned int lane;
  double distance;
  
public:
  Position(Street &street, unsigned int lane, double distance);
  Street *getStreet() const;
  unsigned int getLane() const;
  double getDistance() const;
};



class Vehicle
{
  
public:
  Vehicle();
  Vehicle(const Vehicle& other);
  ~Vehicle();
  Vehicle& operator=(const Vehicle& other);
  bool operator==(const Vehicle& other) const;
  Position position;
  
 // getter functions for parameters
  
  uint_16 getVehicleId();
  double getTargetVelocity();
  double getMaxAcceleration();
  double getTargetDeceleration();
  Position getPosition();
  Position getStartingPosition();
  double getPoliteness();
  double getMinDistance();
  
private:
  const uint_16 vehicleID;
  const double targetVelocity;
  const double maxAcceleration;
  const Position startingPosition;
  const double targetDeceleration;
  const double politeness;
  const double minDistance;
};

#endif // VEHICLE_H
