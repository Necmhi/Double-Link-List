/*	================== retrieveNode ================	This algorithm retrieves data in the list without	changing the list contents.	   Pre    pList pointer to initialized list.	          pArgu pointer to key to be retrieved	   Post   Data (pointer) passed back to caller	   Return boolean true success; false underflow*/ bool retrieveNode (LIST*  pList,                          void*  pArgu,                          void** dataOutPtr){//	Local Definitions	bool  found;	NODE* pPre;	NODE* pLoc;//	Statements	found = _search (pList, &pPre, &pLoc, pArgu);	if (found)	   {	    *dataOutPtr = pLoc->dataPtr;	    return true;	   } // if	*dataOutPtr = NULL;	return false;}	// retrieveNode