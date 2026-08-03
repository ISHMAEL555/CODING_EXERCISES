#include "raindrops.h"

namespace raindrops {
  std::string convert(int number){
      std::string result;
      if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0)
        return "PlingPlangPlong";
     // combined
      if (number % 3 == 0 && number % 5 ==0)
          return "PlingPlang";
      if (number % 3 == 0 && number % 7 ==0)
          return "PlingPlong";
      if (number % 5 ==0 && number % 7 ==0)
          return "PlangPlong";
      
      // normal cases
      if (number % 3 == 0)
          return "Pling";
      if (number % 5 == 0)
          return  "Plang";
      if (number % 7 == 0)
          return  "Plong";
     
      if (result.empty())
          return std::to_string(number);
      return result;
  }
    


}  // namespace raindrops
