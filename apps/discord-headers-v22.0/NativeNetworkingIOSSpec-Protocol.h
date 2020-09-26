//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTBridgeModule-Protocol.h"
#import "RCTTurboModule-Protocol.h"

@class NSString;

@protocol NativeNetworkingIOSSpec <RCTBridgeModule, RCTTurboModule>
- (void)removeListeners:(double)arg1;
- (void)addListener:(NSString *)arg1;
- (void)clearCookies:(void (^)(NSArray *))arg1;
- (void)abortRequest:(double)arg1;
- (void)sendRequest:(struct SpecSendRequestQuery *)arg1 callback:(void (^)(NSArray *))arg2;
@end

