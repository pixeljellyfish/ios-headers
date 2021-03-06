/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:24 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMotionContextProvider <NSObject>
@property (assign,nonatomic,__weak) id<GEOMotionContextProviderDelegate> motionDelegate; 
@required
-(void)stopMotionUpdates;
-(void)setMotionDelegate:(id)arg1;
-(void)startMotionUpdates;
-(id<GEOMotionContextProviderDelegate>)motionDelegate;

@end

