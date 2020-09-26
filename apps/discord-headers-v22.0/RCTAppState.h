//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

#import "NativeAppStateSpec-Protocol.h"

@class NSObject, NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTAppState : RCTEventEmitter <NativeAppStateSpec>
{
    NSString *_lastKnownState;
}

+ (const struct RCTMethodInfo *)__rct_export__1320;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_cb283e74)arg1;
- (void)getCurrentAppState:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)handleAppStateDidChange:(id)arg1;
- (void)handleMemoryWarning;
- (void)stopObserving;
- (void)startObserving;
- (id)supportedEvents;
- (id)getConstants;
- (id)constantsToExport;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;

// Remaining properties
@property(readonly, nonatomic) __weak RCTBridge *bridge;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

