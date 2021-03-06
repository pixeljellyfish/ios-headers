/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:19 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/STSiriModelObject.h>

@class NSString, NSURL;

@interface STContactAddress : STSiriModelObject {

	long long _type;
	NSString* _stringValue;
	NSURL* _contactIdentifier;
	NSString* _contactInternalGUID;

}
+(BOOL)supportsSecureCoding;
-(id)contactIdentifier;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 ;
-(id)initWithType:(long long)arg1 stringValue:(id)arg2 contactIdentifier:(id)arg3 contactInternalGUID:(id)arg4 ;
-(id)contactInternalGUID;
-(id)_aceContextObjectValue;
-(id)stringValue;
-(long long)type;
-(id)initWithStringValue:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end

