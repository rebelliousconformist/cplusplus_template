#ifndef EB9241BD_7B1F_4272_9B98_B5CEE1B34E57
#define EB9241BD_7B1F_4272_9B98_B5CEE1B34E57

#include <vector>
#include <numeric>

class Meaner
{
private:
  std::vector<float> mNumbers;
public:
  Meaner();
  void addNumbers(std::vector<float>&);
  float meanOfFloats();
  ~Meaner();
};




#endif /* EB9241BD_7B1F_4272_9B98_B5CEE1B34E57 */
