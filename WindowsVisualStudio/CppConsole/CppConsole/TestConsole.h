#include "Inflator.h"

class TestConsole : public Inflator {
public:
	void ShowResult() override;

private:
	int solution(int data);

};
