//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class _RCTTypedModuleConstants;

@protocol NativeI18nManagerSpec <RCTBridgeModule, RCTTurboModule>
- (_RCTTypedModuleConstants *)getConstants;
- (_RCTTypedModuleConstants *)constantsToExport;
- (void)swapLeftAndRightInRTL:(_Bool)arg1;
- (void)forceRTL:(_Bool)arg1;
- (void)allowRTL:(_Bool)arg1;
@end

