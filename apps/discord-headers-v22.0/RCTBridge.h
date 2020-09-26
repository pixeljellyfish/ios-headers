//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTInvalidating-Protocol.h"
#import "RCTReloadListener-Protocol.h"

@class NSArray, NSDictionary, NSLock, NSString, NSURL, RCTAccessibilityManager, RCTDevMenu, RCTDevSettings, RCTImageLoader, RCTImageStoreManager, RCTNetworking, RCTPerformanceLogger, RCTRedBox, RCTUIManager;
@protocol RCTBridgeDelegate;

@interface RCTBridge : NSObject <RCTReloadListener, RCTInvalidating>
{
    NSURL *_delegateBundleURL;
    NSURL *_bundleURL;
    Class _executorClass;
    id <RCTBridgeDelegate> _delegate;
    NSDictionary *_launchOptions;
    RCTPerformanceLogger *_performanceLogger;
    long long _flowID;
    struct __CFDictionary *_flowIDMap;
    NSLock *_flowIDMapLock;
    NSString *_bridgeDescription;
    RCTBridge *_batchedBridge;
    CDUnknownBlockType _moduleProvider;
}

+ (void)setCurrentBridge:(id)arg1;
+ (id)currentBridge;
+ (void)initialize;
@property(readonly, copy, nonatomic) CDUnknownBlockType moduleProvider; // @synthesize moduleProvider=_moduleProvider;
@property(retain) RCTBridge *batchedBridge; // @synthesize batchedBridge=_batchedBridge;
@property(copy, nonatomic) NSString *bridgeDescription; // @synthesize bridgeDescription=_bridgeDescription;
@property(retain, nonatomic) NSLock *flowIDMapLock; // @synthesize flowIDMapLock=_flowIDMapLock;
@property(nonatomic) struct __CFDictionary *flowIDMap; // @synthesize flowIDMap=_flowIDMap;
@property(nonatomic) long long flowID; // @synthesize flowID=_flowID;
@property(readonly, nonatomic) RCTPerformanceLogger *performanceLogger; // @synthesize performanceLogger=_performanceLogger;
@property(readonly, copy, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(readonly, nonatomic) __weak id <RCTBridgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) Class executorClass; // @synthesize executorClass=_executorClass;
@property(retain, nonatomic) NSURL *bundleURL; // @synthesize bundleURL=_bundleURL;
- (void).cxx_destruct;
- (void)registerSegmentWithId:(unsigned long long)arg1 path:(id)arg2;
- (void)enqueueCallback:(id)arg1 args:(id)arg2;
- (void)enqueueJSCall:(id)arg1 method:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)enqueueJSCall:(id)arg1 args:(id)arg2;
- (void)registerAdditionalModuleClasses:(id)arg1;
- (void)updateModuleWithInstance:(id)arg1;
- (void)invalidate;
- (_Bool)isBatchActive;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)setUp;
- (Class)bridgeClass;
- (void)requestReload;
- (void)onFastRefresh;
- (void)reloadWithReason:(id)arg1;
- (void)reload;
- (_Bool)moduleIsInitialized:(Class)arg1;
- (id)modulesConformingToProtocol:(id)arg1;
- (id)moduleForClass:(Class)arg1;
- (id)moduleForName:(id)arg1 lazilyLoadIfNecessary:(_Bool)arg2;
- (id)moduleForName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *moduleClasses;
- (void)didReceiveReloadCommand;
- (void)setRCTTurboModuleLookupDelegate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDelegate:(id)arg1 bundleURL:(id)arg2 moduleProvider:(CDUnknownBlockType)arg3 launchOptions:(id)arg4;
- (id)initWithBundleURL:(id)arg1 moduleProvider:(CDUnknownBlockType)arg2 launchOptions:(id)arg3;
- (id)initWithDelegate:(id)arg1 launchOptions:(id)arg2;
@property(readonly, nonatomic) RCTAccessibilityManager *accessibilityManager;
@property(readonly, nonatomic) RCTDevSettings *devSettings;
@property(readonly, nonatomic) RCTDevMenu *devMenu;
@property(readonly, nonatomic) RCTRedBox *redBox;
- (id)webSocketModule;
@property(readonly, nonatomic) RCTImageLoader *imageLoader;
@property(readonly, nonatomic) RCTImageStoreManager *imageStoreManager;
@property(readonly, nonatomic) RCTNetworking *networking;
- (id)eventDispatcher;
@property(readonly, nonatomic) RCTUIManager *uiManager;
- (void)setSurfacePresenter:(id)arg1;
- (id)surfacePresenter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

