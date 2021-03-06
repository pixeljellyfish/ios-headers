/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SBLeafIconDataSource.h>

@class NSString;

@interface SBHCustomIconElement : NSObject <SBLeafIconDataSource> {

	BOOL _suggestion;
	NSString* _uniqueIdentifier;
	NSString* _containerBundleIdentifier;

}

@property (nonatomic,copy,readonly) NSString * containerBundleIdentifier;                   //@synthesize containerBundleIdentifier=_containerBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (assign,getter=isSuggestion,nonatomic) BOOL suggestion;                           //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * configurationStorageIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)elementIdentifier;
-(unsigned long long)priorityForIcon:(id)arg1 ;
-(NSString *)displayName;
-(id)icon:(id)arg1 displayNameForLocation:(id)arg2 ;
-(BOOL)isSuggestion;
-(id)copyWithUniqueIdentifier;
-(NSString *)containerBundleIdentifier;
-(void)setSuggestion:(BOOL)arg1 ;
-(id)init;
-(NSString *)uniqueIdentifier;
-(id)initWithUniqueIdentifier:(id)arg1 ;
@end

