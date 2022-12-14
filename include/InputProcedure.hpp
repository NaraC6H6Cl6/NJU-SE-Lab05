/**
 * @file InputProcedure.hpp
 * @author Lingzhou Ai (https://github.com/NaraC6H6Cl6/)
 * @brief 
 * @version 0.2
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _InputProcedure_H
#define _InputProcedure_H


#include <memory>
#include <filesystem>
#include <vector>
#include <unordered_set>
#include <regex>


namespace Mercury {
  class InputType;
}


namespace Plum {
  class InputGroup;
}


namespace Phoenix
{

std::shared_ptr<Mercury::InputType> MakeInputByToken(std::string Token);

std::vector<std::shared_ptr<Plum::InputGroup>> GetInputGroups();

}


#endif
