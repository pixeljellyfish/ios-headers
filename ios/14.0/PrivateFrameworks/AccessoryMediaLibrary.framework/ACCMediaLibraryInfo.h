/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AccessoryMediaLibrary.framework/AccessoryMediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, ACCMediaLibraryUpdateLibraryInfo;

@interface ACCMediaLibraryInfo : NSObject {

	BOOL _state[2];
	BOOL _stateInit[2];
	NSString* _libraryUID;
	ACCMediaLibraryUpdateLibraryInfo* _info;

}

@property (nonatomic,readonly) NSString * libraryUID;                                //@synthesize libraryUID=_libraryUID - In the implementation block
@property (nonatomic,readonly) ACCMediaLibraryUpdateLibraryInfo * info;              //@synthesize info=_info - In the implementation block
-(ACCMediaLibraryUpdateLibraryInfo *)info;
-(NSString *)libraryUID;
-(BOOL)getState:(int)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(id)description;
-(BOOL)setState:(int)arg1 value:(BOOL)arg2 ;
@end

