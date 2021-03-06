// // Play Selector class definitions

#ifndef PS_H
#define PS_H

#include "playBook.h"
 #include "play.hpp"  
#include <krssg_ssl_msgs/BeliefState.h>

using krssg_ssl_msgs::BeliefState;

namespace Strategy
{
  //class BeliefState;
  class PExec;

  class PS : protected PlayBook
  {
    friend class PExec;

  protected:
    PlayID       playID;
      float        pProb[PlayBook::MAX_PLAYS];
      bool         appl[PlayBook::MAX_PLAYS];

  	 void         select(int *playid=NULL);
  	//void		selectfromStr_Gui(int pID);
  //  virtual void updateWeights(Play::Result termResult) const = 0;
    
  public:
    PS(const BeliefState* state);
    ~PS();
  }; // class PS
} // namespace Strategy

#endif // PS_H

