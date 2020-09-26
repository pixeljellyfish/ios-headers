//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NativeImageEditorSpec-Protocol.h"
#import "RCTBridgeModule-Protocol.h"

@class NSString, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTImageEditingManager : NSObject <NativeImageEditorSpec, RCTBridgeModule>
{
    RCTBridge *_bridge;
}

+ (const struct RCTMethodInfo *)__rct_export__440;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (shared_ptr_3725e3cd)getTurboModuleWithJsInvoker:(shared_ptr_cb283e74)arg1;
- (void)cropImage:(id)arg1 cropData:(Options_ba5fdc6f *)arg2 successCallback:(CDUnknownBlockType)arg3 errorCallback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

