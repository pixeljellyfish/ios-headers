/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:34 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NUGLVariable : NSObject {

	unsigned _type;
	int _size;
	int _location;

}

@property (readonly) unsigned type;                   //@synthesize type=_type - In the implementation block
@property (readonly) int size;                        //@synthesize size=_size - In the implementation block
@property (readonly) int location;                    //@synthesize location=_location - In the implementation block
@property (readonly) unsigned valueType; 
-(unsigned)valueType;
-(int)location;
-(id)init;
-(unsigned)type;
-(BOOL)isEqual:(id)arg1 ;
-(int)size;
-(unsigned long long)hash;
-(id)initWithType:(unsigned)arg1 ;
-(id)description;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 ;
-(id)initWithType:(unsigned)arg1 size:(int)arg2 location:(int)arg3 ;
-(BOOL)isEqualToVariable:(id)arg1 ;
@end

