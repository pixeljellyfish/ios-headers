/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:57 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Sleep.framework/Sleep
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKSPResolvedSleepScheduleOccurrence;

@interface _HKSPSleepEventTimelineAdjustment : NSObject {

	HKSPResolvedSleepScheduleOccurrence* _originalOccurrence;
	HKSPResolvedSleepScheduleOccurrence* _adjustedOccurrence;

}

@property (nonatomic,retain) HKSPResolvedSleepScheduleOccurrence * originalOccurrence;              //@synthesize originalOccurrence=_originalOccurrence - In the implementation block
@property (nonatomic,retain) HKSPResolvedSleepScheduleOccurrence * adjustedOccurrence;              //@synthesize adjustedOccurrence=_adjustedOccurrence - In the implementation block
-(HKSPResolvedSleepScheduleOccurrence *)originalOccurrence;
-(void)setOriginalOccurrence:(HKSPResolvedSleepScheduleOccurrence *)arg1 ;
-(HKSPResolvedSleepScheduleOccurrence *)adjustedOccurrence;
-(void)setAdjustedOccurrence:(HKSPResolvedSleepScheduleOccurrence *)arg1 ;
@end

