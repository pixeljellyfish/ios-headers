//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LLVideoPlayerOperationDelegate-Protocol.h"

@class AVAssetResourceLoadingRequest, LLVideoPlayerCacheFile, NSMutableArray, NSOperationQueue, NSRecursiveLock, NSString, NSURLResponse;
@protocol LLVideoPlayerLoadingRequestDelegate;

@interface LLVideoPlayerLoadingRequest : NSObject <LLVideoPlayerOperationDelegate>
{
    AVAssetResourceLoadingRequest *_loadingRequest;
    id <LLVideoPlayerLoadingRequestDelegate> _delegate;
    LLVideoPlayerCacheFile *_cacheFile;
    NSMutableArray *_taskQueue;
    NSOperationQueue *_operationQueue;
    NSRecursiveLock *_lock;
    NSURLResponse *_response;
    long long _cancels;
}

@property(nonatomic) long long cancels; // @synthesize cancels=_cancels;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableArray *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(retain, nonatomic) LLVideoPlayerCacheFile *cacheFile; // @synthesize cacheFile=_cacheFile;
@property(nonatomic) __weak id <LLVideoPlayerLoadingRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *loadingRequest; // @synthesize loadingRequest=_loadingRequest;
- (void).cxx_destruct;
- (void)mapOperationToTasksWithRange:(struct _NSRange)arg1;
- (void)addTaskWithRange:(struct _NSRange)arg1 fromCache:(_Bool)arg2;
- (void)startOperation;
- (void)tryResponse:(id)arg1;
- (void)operation:(id)arg1 didReceiveData:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 didCompleteWithError:(id)arg2;
- (void)cancel;
- (void)resume;
- (id)initWithLoadingRequest:(id)arg1 cacheFile:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

