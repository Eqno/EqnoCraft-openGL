#ifndef BEDROCK_H
#define BEDROCK_H

#include "base.h"
#include "block.h"

class Bedrock: public Block
{
public:
    Bedrock();
    Bedrock(double x, double y, double z);
    Bedrock(double x, double y, double z, double r);
};

void addBedrock();
void addBedrock(double x, double y, double z);
void addBedrock(double x, double y, double z, double r);
void renderBedrock();

#endif