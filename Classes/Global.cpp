#include "Global.h"

DECLARE_SINGLETON_MEMBER(Global);
Global::Global()
{}
Global::~Global()
{
	CC_SAFE_DELETE(GdefenderGameLayer);
	GdefenderGameLayer = NULL;
	CC_SAFE_DELETE(GcityBloodSprite);
	GcityBloodSprite = NULL;
	CC_SAFE_DELETE(GgameTipsSprite);
	GgameTipsSprite = NULL;
	Gscene = NULL;
	Gmatrix = NULL;
	Genemy = NULL;
	GtoDeleteBullet = NULL;
}
