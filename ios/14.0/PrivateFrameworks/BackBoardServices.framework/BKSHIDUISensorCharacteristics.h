/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionStreamable.h>
#import <libobjc.A.dylib/BSProtobufSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDUISensorCharacteristics : NSObject <NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying> {

	BOOL _hasDiscreteProximitySensor;

}

@property (nonatomic,readonly) BOOL hasDiscreteProximitySensor; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)protobufSchema;
-(id)initForProtobufDecoding;
-(void)appendDescriptionToFormatter:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasDiscreteProximitySensor;
-(id)_init;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopy;
-(unsigned long long)hash;
-(NSString *)description;
@end

