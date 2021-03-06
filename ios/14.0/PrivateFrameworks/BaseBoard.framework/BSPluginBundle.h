/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:27 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSBundle, NSString;

@interface BSPluginBundle : NSObject <BSDescriptionProviding> {

	NSBundle* _bundle;
	NSString* _specifiedClassName;
	NSString* _requiredClassOrProtocolName;
	NSString* _identifier;
	NSString* _name;
	NSString* _type;
	Class _principalClass;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,copy,readonly) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                     //@synthesize type=_type - In the implementation block
@property (getter=isLoaded,nonatomic,readonly) BOOL loaded; 
@property (nonatomic,readonly) Class principalClass;                     //@synthesize principalClass=_principalClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLoaded;
-(NSString *)identifier;
-(BOOL)loadPlugin;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)type;
-(BOOL)isValid;
-(id)succinctDescriptionBuilder;
-(BOOL)loadPlugin:(/*^block*/id)arg1 ;
-(NSString *)name;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(Class)principalClass;
@end

