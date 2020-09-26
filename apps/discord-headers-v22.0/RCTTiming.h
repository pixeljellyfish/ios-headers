//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTBridgeModule-Protocol.h"
#import "RCTFrameUpdateObserver-Protocol.h"
#import "RCTInvalidating-Protocol.h"

@class NSMutableDictionary, NSString, NSTimer, RCTBridge;
@protocol OS_dispatch_queue, RCTTimingDelegate;

@interface RCTTiming : NSObject <RCTBridgeModule, RCTInvalidating, RCTFrameUpdateObserver>
{
    NSMutableDictionary *_timers;
    NSTimer *_sleepTimer;
    _Bool _sendIdleEvents;
    _Bool _inBackground;
    id <RCTTimingDelegate> _timingDelegate;
    _Bool _paused;
    RCTBridge *_bridge;
    CDUnknownBlockType _pauseCallback;
}

+ (const struct RCTMethodInfo *)__rct_export__4022;
+ (const struct RCTMethodInfo *)__rct_export__3921;
+ (const struct RCTMethodInfo *)__rct_export__3400;
+ (void)load;
+ (id)moduleName;
@property(copy, nonatomic) CDUnknownBlockType pauseCallback; // @synthesize pauseCallback=_pauseCallback;
@property(readonly, nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (void)setSendIdleEvents:(_Bool)arg1;
- (void)deleteTimer:(double)arg1;
- (void)createTimerForNextFrame:(id)arg1 duration:(double)arg2 jsSchedulingTime:(id)arg3 repeats:(_Bool)arg4;
- (void)createTimer:(double)arg1 duration:(double)arg2 jsSchedulingTime:(double)arg3 repeats:(_Bool)arg4;
- (void)timerDidFire;
- (void)scheduleSleepTimer:(id)arg1;
- (void)didUpdateFrame:(id)arg1;
- (_Bool)hasPendingTimers;
- (void)startTimers;
- (void)stopTimers;
- (void)appDidMoveToForeground;
- (void)appDidMoveToBackground;
- (void)invalidate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
- (void)dealloc;
- (void)setup;
- (void)setBridge:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

