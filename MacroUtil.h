//
//  MacroUtil.h
//  LyingDragon
//
//  Created by YaoJie on 12-2-29.
//  Copyright (c) 2012年 www.uqee.com. All rights reserved.
//

#ifndef LyingDragon_MacroUtil_h
#define LyingDragon_MacroUtil_h

#define LOG_RECT(rect) CCLOG(@"rect: position(%f,%f) size(%f,%f)",rect.origin.x,rect.origin.y,rect.size.width,rect.size.height)

#define LOG_POINT(point) CCLOG(@"point(%f,%f)",point.x,point.y)

#define LOG_ENTER CCLOG(@"%@:%@ enter",self,NSStringFromSelector(_cmd))
#define LOG_EXIT CCLOG(@"%@:%@ exit",self,NSStringFromSelector(_cmd))

#define SHOULD_NO_BE_HERE CCLOG(@"******should not be here******")

//#define LOCALSTRING(key) [CommonFunction localString:key]
//#define LOCALSTRING(key) NSLocalizedString(key, nil)
#define LOCALSTRING(key) ([NSLocalizedString(key, nil) isEqualToString:key] ? @"" : NSLocalizedString(key, nil))

#endif

AAAAA000
BBBBBBB000
  CCCCC000
  DDDDDDD00
  bbbbbb000
