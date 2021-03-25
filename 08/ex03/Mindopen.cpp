#include "Mindopen.hpp"
#include "Dec.hpp"
#include "Inc.hpp"
#include "StartLoop.hpp"
#include "EndLoop.hpp"
#include "MoveNext.hpp"
#include "MovePrevious.hpp"
#include "Read.hpp"
#include "Write.hpp"
#include <iostream>

namespace Mindopen
{
    Mindopen::Mindopen():memory(std::string(2048, 0)){}
    
    Mindopen::Mindopen(const Mindopen & mind) 
    {
        *this = mind;
    }

    Mindopen& Mindopen::operator=(const Mindopen & mind) 
    {
        for (size_t i = 0; i < commands.size(); i++)
            delete commands[i];
        for (size_t i = 0; i < mind.commands.size(); i++)
            commands.push_back(mind.commands[i]);
        memory = mind.memory;
        return (*this);
    }
    
    Mindopen::~Mindopen() 
    {
        for (size_t i = 0; i < commands.size(); i++)
            delete commands[i];
    }
    
    void Mindopen::read(std::ifstream & file) 
    {
        char c;
        while (file >> c)
        {
            switch (c)
            {
            case 'k':
                commands.push_back(new MoveNext());
                break;
            case 'y':
                commands.push_back(new MovePrevious());
                break;
            case 'f':
                commands.push_back(new Inc());
                break;
            case 'u':
                commands.push_back(new Dec());
                break;
            case 'c':
                commands.push_back(new Write());
                break;
            case 'o':
                commands.push_back(new Read());
                break;
            case '[':
                commands.push_back(new StartLoop());
                break;
            case ']':
                commands.push_back(new EndLoop());
                break;
            default:
                break;
            }
        }
    }
    
    void Mindopen::execute(void) 
    {
        std::string::iterator it = memory.begin();
        std::vector<Instruction*>::iterator itIn = commands.begin();
        while (itIn != commands.end())
        {
            (*itIn)->execute(it, itIn);
        }
        
    }
}