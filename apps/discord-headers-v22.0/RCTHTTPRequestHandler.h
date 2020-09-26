//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "RCTInvalidating-Protocol.h"
#import "RCTTurboModule-Protocol.h"
#import "RCTURLRequestHandler-Protocol.h"

@class NSMapTable, NSString, NSURLSession, RCTBridge;
@protocol OS_dispatch_queue, RCTTurboModuleLookupDelegate;

@interface RCTHTTPRequestHandler : NSObject <NSURLSessionDataDelegate, RCTTurboModule, RCTURLRequestHandler, RCTInvalidating>
{
    NSMapTable *_delegates;
    NSURLSession *_session;
    struct mutex _mutex;
    RCTBridge *_bridge;
    NSObject<OS_dispatch_queue> *_methodQueue;
}

+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue; // @synthesize methodQueue=_methodQueue;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)cancelRequest:(id)arg1;
- (id)sendRequest:(id)arg1 withDelegate:(id)arg2;
- (_Bool)canHandleRequest:(id)arg1;
- (_Bool)isValid;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) __weak id <RCTTurboModuleLookupDelegate> turboModuleLookupDelegate;

@end

