/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:20 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HMIVideoFrameSamplerDelegate <NSObject>
@optional
-(void)frameSampler:(id)arg1 didDropFrame:(opaqueCMSampleBufferRef)arg2;

@required
-(void)frameSampler:(id)arg1 didSampleFrame:(opaqueCMSampleBufferRef)arg2;

@end

