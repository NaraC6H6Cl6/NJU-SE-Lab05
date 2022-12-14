/**
 * @file InputType.hpp
 * @author Lingzhou Ai (https://github.com/NaraC6H6Cl6/)
 * @brief 
 * @version 0.2
 * @date 2022-11-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _InputType_H
#define _InputType_H


#include <string>
#include <vector>
#include <random>


namespace Mercury
{


class InputType
{
protected:
  explicit InputType() = default;

public:
  virtual std::string GenerateRandomInput() const = 0;
};


class InputIntType : public InputType
{
public:
  explicit InputIntType() noexcept;
  explicit InputIntType(int MinLimit, int MaxLimit) noexcept;

  virtual std::string GenerateRandomInput() const override;

private:
  constexpr static int SpecialValues[] = {
      0, 1, 2, -1, -2,
      int(0x7fffffff), int(0x80000000), int(0x80000001),
      int(0x3fffffff), int(0x40000000), int(0x40000001),
      int(0xbfffffff), int(0xc0000000), int(0xc0000001)};

  static std::uniform_int_distribution<size_t> SpecialDistribution;

private:
  int MinLimit, MaxLimit;
};


class InputCharType : public InputType
{
public:
  InputCharType() = default;

  virtual std::string GenerateRandomInput() const override;

protected:
  static std::uniform_int_distribution<char> AsciiDistribution;
};


class InputStringType : public InputCharType
{
public:
  explicit InputStringType(std::size_t MinLength, std::size_t MaxLength) noexcept;

  virtual std::string GenerateRandomInput() const override;

private:
  int MinLength, MaxLength;
};


}


#endif
