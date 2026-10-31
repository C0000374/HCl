//++
//
// Copyright (C) C0000374
//
// Module:
//     CATHACK.INC
//
// Abstract:
//     This module implements constants and macros for the CatHack.
//
// Revision History:
//     31/08/26 C0000374 Initial creation.
//
//--

#ifndef $$IG$CATHACK_INC
#define $$IG$CATHACK_INC

#define VERSION	"20261031"

#define IN
#define OUT
#define OPTIONAL

#define BSE$DoesTagExist(Compound, Id, Type) ((Compound).hasKey(Id) && ((Compound).GetTag(Id) instanceof Type))
#define $$BSE$GetValue(Compound, Id, Type, Method, Result) if (BSE$DoesTagExist(Compound, Id, Type)) (Result) = (Compound).Method(Id)
#define BSE$GetBoolean(Compound, Id, Result)    $$BSE$GetValue(Compound, Id, NBTTagByte     , getBoolean    , Result)
#define BSE$GetByte(Compound, Id, Result)       $$BSE$GetValue(Compound, Id, NBTTagByte     , getByte       , Result)
#define BSE$GetShort(Compound, Id, Result)      $$BSE$GetValue(Compound, Id, NBTTagShort    , getShort      , Result)
#define BSE$GetInt(Compound, Id, Result)        $$BSE$GetValue(Compound, Id, NBTTagInt      , getInteger    , Result)
#define BSE$GetLong(Compound, Id, Result)       $$BSE$GetValue(Compound, Id, NBTTagLong     , getLong       , Result)
#define BSE$GetFloat(Compound, Id, Result)      $$BSE$GetValue(Compound, Id, NBTTagFloat    , getFloat      , Result)
#define BSE$GetDouble(Compound, Id, Result)     $$BSE$GetValue(Compound, Id, NBTTagDouble   , getDouble     , Result)
#define BSE$GetString(Compound, Id, Result)     $$BSE$GetValue(Compound, Id, NBTTagString   , getString     , Result)
#define BSE$GetByteArray(Compound, Id, Result)  $$BSE$GetValue(Compound, Id, NBTTagByteArray, getByteArray  , Result)
#define BSE$GetCompound(Compound, Id, Result)   $$BSE$GetValue(Compound, Id, NBTTagCompound , getCompoundTag, Result)
#define BSE$GetList(Compound, Id, Result)       $$BSE$GetValue(Compound, Id, NBTTagList     , getTagList    , Result)

//++
//
// FOR EVENTS
//
//--

#define ME$_BIT(EventId) (1L << (EventId))

#define ME$ENABLE   			1
// W = null
// L = null
#define ME$DISABLE  			2
// W = null
// L = null
#define ME$PLAYER_UPDATE_PRE	3
// W = null
// L = null
#define ME$PLAYER_UPDATE_POST	4
// W = null
// L = null

#endif