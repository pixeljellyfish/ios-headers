/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class HAPTLVFloatNumberValue, HAPTLVUnsignedNumberValue, NSString;

@interface HAPCharacteristicValueLinearDerivedTransitionPoint : NSObject <NSCopying, HAPTLVProtocol> {

	HAPTLVFloatNumberValue* _scale;
	HAPTLVFloatNumberValue* _offset;
	HAPTLVUnsignedNumberValue* _targetCompletionDuration;
	HAPTLVUnsignedNumberValue* _startDelayDuration;

}

@property (nonatomic,retain) HAPTLVFloatNumberValue * scale;                                    //@synthesize scale=_scale - In the implementation block
@property (nonatomic,retain) HAPTLVFloatNumberValue * offset;                                   //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * targetCompletionDuration;              //@synthesize targetCompletionDuration=_targetCompletionDuration - In the implementation block
@property (nonatomic,retain) HAPTLVUnsignedNumberValue * startDelayDuration;                    //@synthesize startDelayDuration=_startDelayDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HAPTLVFloatNumberValue *)scale;
-(void)setScale:(HAPTLVFloatNumberValue *)arg1 ;
-(void)setOffset:(HAPTLVFloatNumberValue *)arg1 ;
-(HAPTLVFloatNumberValue *)offset;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)serializeWithError:(id*)arg1 ;
-(HAPTLVUnsignedNumberValue *)targetCompletionDuration;
-(id)initWithScale:(id)arg1 offset:(id)arg2 targetCompletionDuration:(id)arg3 startDelayDuration:(id)arg4 ;
-(void)setTargetCompletionDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(void)setStartDelayDuration:(HAPTLVUnsignedNumberValue *)arg1 ;
-(HAPTLVUnsignedNumberValue *)startDelayDuration;
@end

