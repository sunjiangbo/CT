#ifndef MDSC_H
#define MDSC_H

#include "DSC.h"

class CMDSC : public CDSC
{
public:
	static CMDSC *Create(const DSCCONTROLATTRIBUTES &attrs, const UPDATEFRAME pUpdateFrame);
	virtual void Destroy(void);
	virtual bool GetUSBDatas(const unsigned char *pDatas);
	virtual void SetLocalZoomState(unsigned int scanLStart, unsigned int scanLEnd, unsigned int sampStart,
		unsigned int sampEnd, float zoomScale);
	virtual void UpdateMDisplayFormat(void);
	virtual void ClearMLine(void);
};

#endif //MDSC_H

