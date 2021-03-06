/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject {

	NSArray* _staticProperties;
	NSArray* _liveProperties;

}

@property (nonatomic,retain) NSArray * staticProperties;              //@synthesize staticProperties=_staticProperties - In the implementation block
@property (nonatomic,retain) NSArray * liveProperties;                //@synthesize liveProperties=_liveProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)staticProperties;
-(NSArray *)liveProperties;
-(void)setStaticProperties:(NSArray *)arg1 ;
-(void)setLiveProperties:(NSArray *)arg1 ;
@end

