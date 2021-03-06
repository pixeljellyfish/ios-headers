/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:58 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMBModel, NSData;

@interface HMBLocalSQLContextRecord : HMFObject {

	HMBModel* _model;
	NSData* _externalID;

}

@property (nonatomic,readonly) HMBModel * model;                 //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSData * externalID;              //@synthesize externalID=_externalID - In the implementation block
-(id)attributeDescriptions;
-(HMBModel *)model;
-(NSData *)externalID;
-(id)initWithModel:(id)arg1 externalID:(id)arg2 ;
@end

