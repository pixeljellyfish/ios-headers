//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@class UIActivityIndicatorView;

@interface DCDBundleUpdaterManager : RCTEventEmitter
{
    UIActivityIndicatorView *_spinner;
}

+ (const struct RCTMethodInfo *)__rct_export__1093;
+ (const struct RCTMethodInfo *)__rct_export__982;
+ (const struct RCTMethodInfo *)__rct_export__931;
+ (const struct RCTMethodInfo *)__rct_export__800;
+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)reload;
- (void)checkForUpdateAndReload;
- (void)setCurrentBuildOverrideCookie:(id)arg1;
- (void)getInitialBundleDownloaded:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)hideSpinner;
- (void)showSpinner;
- (void)handleBundleDownloaded:(id)arg1;
- (id)supportedEvents;
- (void)stopObserving;
- (void)startObserving;
- (id)methodQueue;

@end

