/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBAWDMetricData.h>

@class NSString, NSArray, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData {

	BOOL _didTriggerSOS;
	NSString* _pressName;
	NSArray* _pressSequence;
	unsigned long long _clickMax;
	NSUUID* _sosTriggerUUID;

}

@property (nonatomic,copy) NSString * pressName;                       //@synthesize pressName=_pressName - In the implementation block
@property (nonatomic,copy) NSArray * pressSequence;                    //@synthesize pressSequence=_pressSequence - In the implementation block
@property (assign,nonatomic) BOOL didTriggerSOS;                       //@synthesize didTriggerSOS=_didTriggerSOS - In the implementation block
@property (assign,nonatomic) unsigned long long clickMax;              //@synthesize clickMax=_clickMax - In the implementation block
@property (nonatomic,copy) NSUUID * sosTriggerUUID;                    //@synthesize sosTriggerUUID=_sosTriggerUUID - In the implementation block
-(unsigned long long)clickMax;
-(void)setDidTriggerSOS:(BOOL)arg1 ;
-(NSArray *)pressSequence;
-(NSString *)pressName;
-(BOOL)didTriggerSOS;
-(void)setClickMax:(unsigned long long)arg1 ;
-(NSUUID *)sosTriggerUUID;
-(void)setPressName:(NSString *)arg1 ;
-(void)setPressSequence:(NSArray *)arg1 ;
-(void)setSosTriggerUUID:(NSUUID *)arg1 ;
@end

