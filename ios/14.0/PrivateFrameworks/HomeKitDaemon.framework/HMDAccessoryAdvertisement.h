/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, HMAccessoryCategory;

@interface HMDAccessoryAdvertisement : NSObject {

	NSString* _identifier;
	NSString* _name;
	HMAccessoryCategory* _category;

}

@property (nonatomic,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (readonly) long long associationOptions; 
@property (nonatomic,readonly) HMAccessoryCategory * category;              //@synthesize category=_category - In the implementation block
-(NSString *)identifier;
-(HMAccessoryCategory *)category;
-(BOOL)isEqual:(id)arg1 ;
-(long long)associationOptions;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 ;
@end

