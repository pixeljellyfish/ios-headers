//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "RCTBridgeModule-Protocol.h"

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface RCTModalManager : RCTEventEmitter <RCTBridgeModule>
{
    _Bool _shouldEmit;
}

+ (void)load;
+ (id)moduleName;
@property _Bool shouldEmit; // @synthesize shouldEmit=_shouldEmit;
- (void)modalDismissed:(id)arg1;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

