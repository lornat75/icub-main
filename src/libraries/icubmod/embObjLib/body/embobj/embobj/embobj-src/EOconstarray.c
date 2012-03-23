
/* @file       EOconstarray.c
    @brief      This file implements internal implementation of a array object.
    @author     marco.accame@iit.it
    @date       08/03/2011
**/


// --------------------------------------------------------------------------------------------------------------------
// - external dependencies
// --------------------------------------------------------------------------------------------------------------------

#include "stdlib.h"
#include "EoCommon.h"
#include "string.h"
#include "EOtheMemoryPool.h"



// --------------------------------------------------------------------------------------------------------------------
// - declaration of extern public interface
// --------------------------------------------------------------------------------------------------------------------

#include "EOconstarray.h"


// --------------------------------------------------------------------------------------------------------------------
// - declaration of extern hidden interface 
// --------------------------------------------------------------------------------------------------------------------

#include "EOconstarray_hid.h" 


// --------------------------------------------------------------------------------------------------------------------
// - #define with internal scope
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition (and initialisation) of extern variables, but better using _get(), _set() 
// --------------------------------------------------------------------------------------------------------------------
// empty-section



// --------------------------------------------------------------------------------------------------------------------
// - typedef with internal scope
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - declaration of static functions
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition (and initialisation) of static variables
// --------------------------------------------------------------------------------------------------------------------

//static const char s_eobj_ownname[] = "EOconstarray";


// --------------------------------------------------------------------------------------------------------------------
// - definition of extern public functions
// --------------------------------------------------------------------------------------------------------------------

extern EOconstarray* eo_constarray_New(eOsizecntnr_t size, eOsizeitem_t itemsize)
{
    return(NULL);
    // dont create it. just bring from a static const variable
}

extern eOsizecntnr_t eo_constarray_Size(EOconstarray *p)
{
    if(NULL == p)
    {
        return(0);
    }
    
    return(p->size);
}

extern eOsizecntnr_t eo_constarray_SizeOfItem(EOconstarray *p)
{
    if(NULL == p)
    {
        return(0);
    }
    
    return(p->sizeofitem);
}

extern const void * eo_constarray_At(EOconstarray *p, eOsizecntnr_t pos)
{
    if((NULL == p) || (pos >= p->size))
    {
        return(NULL);
    }
    
    return(&p->data[pos*p->sizeofitem]);
}


// --------------------------------------------------------------------------------------------------------------------
// - definition of extern hidden functions 
// --------------------------------------------------------------------------------------------------------------------
// empty-section


// --------------------------------------------------------------------------------------------------------------------
// - definition of static functions 
// --------------------------------------------------------------------------------------------------------------------
// empty-section




// --------------------------------------------------------------------------------------------------------------------
// - end-of-file (leave a blank line after)
// --------------------------------------------------------------------------------------------------------------------



