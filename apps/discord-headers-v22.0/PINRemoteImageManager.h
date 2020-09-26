//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PINURLSessionManagerDelegate-Protocol.h"

@class NSArray, NSHashTable, NSMutableDictionary, NSString, NSURLSessionConfiguration, PINAlternateRepresentationProvider, PINCache, PINOperationQueue, PINRemoteImageDownloadQueue, PINRemoteLock, PINURLSessionManager;
@protocol OS_dispatch_queue, PINRemoteImageCaching;

@interface PINRemoteImageManager : NSObject <PINURLSessionManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    PINRemoteLock *_lock;
    PINOperationQueue *_concurrentOperationQueue;
    PINRemoteImageDownloadQueue *_urlSessionTaskQueue;
    PINAlternateRepresentationProvider *_defaultAlternateRepresentationProvider;
    PINAlternateRepresentationProvider *_alternateRepProvider;
    NSURLSessionConfiguration *_sessionConfiguration;
    _Bool _shouldBlurProgressive;
    _Bool _shouldUpgradeLowQualityImages;
    float _highQualityBPSThreshold;
    float _lowQualityBPSThreshold;
    id <PINRemoteImageCaching> _cache;
    CDUnknownBlockType _retryStrategyCreationBlock;
    PINURLSessionManager *_sessionManager;
    NSMutableDictionary *_tasks;
    NSHashTable *_canceledTasks;
    NSArray *_progressThresholds;
    double _estimatedRemainingTimeThreshold;
    CDUnknownBlockType _authenticationChallengeHandler;
    CDUnknownBlockType _requestConfigurationHandler;
    NSMutableDictionary *_httpHeaderFields;
    struct CGSize _maxProgressiveRenderSize;
}

+ (void)setSharedImageManagerWithConfiguration:(id)arg1;
+ (id)sharedImageManager;
@property(retain, nonatomic) NSMutableDictionary *httpHeaderFields; // @synthesize httpHeaderFields=_httpHeaderFields;
@property(copy, nonatomic) CDUnknownBlockType requestConfigurationHandler; // @synthesize requestConfigurationHandler=_requestConfigurationHandler;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallengeHandler; // @synthesize authenticationChallengeHandler=_authenticationChallengeHandler;
@property(nonatomic) _Bool shouldUpgradeLowQualityImages; // @synthesize shouldUpgradeLowQualityImages=_shouldUpgradeLowQualityImages;
@property(nonatomic) float lowQualityBPSThreshold; // @synthesize lowQualityBPSThreshold=_lowQualityBPSThreshold;
@property(nonatomic) float highQualityBPSThreshold; // @synthesize highQualityBPSThreshold=_highQualityBPSThreshold;
@property(retain, nonatomic) PINRemoteImageDownloadQueue *urlSessionTaskQueue; // @synthesize urlSessionTaskQueue=_urlSessionTaskQueue;
@property(retain, nonatomic) PINOperationQueue *concurrentOperationQueue; // @synthesize concurrentOperationQueue=_concurrentOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) double estimatedRemainingTimeThreshold; // @synthesize estimatedRemainingTimeThreshold=_estimatedRemainingTimeThreshold;
@property(nonatomic) struct CGSize maxProgressiveRenderSize; // @synthesize maxProgressiveRenderSize=_maxProgressiveRenderSize;
@property(nonatomic) _Bool shouldBlurProgressive; // @synthesize shouldBlurProgressive=_shouldBlurProgressive;
@property(retain, nonatomic) NSArray *progressThresholds; // @synthesize progressThresholds=_progressThresholds;
@property(retain, nonatomic) NSHashTable *canceledTasks; // @synthesize canceledTasks=_canceledTasks;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) PINURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(copy, nonatomic) CDUnknownBlockType retryStrategyCreationBlock; // @synthesize retryStrategyCreationBlock=_retryStrategyCreationBlock;
@property(retain, nonatomic) id <PINRemoteImageCaching> cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (id)_locked_taskForUUID:(id)arg1 key:(id *)arg2;
- (void)storeResumeData:(id)arg1 forURL:(id)arg2;
- (id)resumeCacheKeyForURL:(id)arg1;
- (void)objectForURL:(id)arg1 processorKey:(id)arg2 key:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)objectForKey:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)cacheKeyForURL:(id)arg1 processorKey:(id)arg2 resume:(_Bool)arg3;
- (id)cacheKeyForURL:(id)arg1 processorKey:(id)arg2;
- (_Bool)materializeAndCacheObject:(id)arg1 cacheInDisk:(id)arg2 additionalCost:(unsigned long long)arg3 url:(id)arg4 key:(id)arg5 options:(unsigned long long)arg6 outImage:(id *)arg7 outAltRep:(id *)arg8;
- (_Bool)materializeAndCacheObject:(id)arg1 url:(id)arg2 key:(id)arg3 options:(unsigned long long)arg4 outImage:(id *)arg5 outAltRep:(id *)arg6;
- (id)downloadImageWithURLs:(id)arg1 options:(unsigned long long)arg2 progressImage:(CDUnknownBlockType)arg3 progressDownload:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURLs:(id)arg1 options:(unsigned long long)arg2 progressImage:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)didReceiveData:(id)arg1 forTask:(id)arg2;
- (void)didReceiveResponse:(id)arg1 forTask:(id)arg2;
- (void)didReceiveAuthenticationChallenge:(id)arg1 forTask:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)synchronousImageFromCacheWithURL:(id)arg1 processorKey:(id)arg2 cacheKey:(id)arg3 options:(unsigned long long)arg4;
- (id)synchronousImageFromCacheWithURL:(id)arg1 processorKey:(id)arg2 options:(unsigned long long)arg3;
- (id)synchronousImageFromCacheWithCacheKey:(id)arg1 options:(unsigned long long)arg2;
- (void)imageFromCacheWithURL:(id)arg1 processorKey:(id)arg2 cacheKey:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)imageFromCacheWithURL:(id)arg1 processorKey:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)imageFromCacheWithCacheKey:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)imageFromCacheWithCacheKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setProgressImageCallback:(CDUnknownBlockType)arg1 ofTaskWithUUID:(id)arg2;
- (void)setPriority:(unsigned long long)arg1 ofTaskWithUUID:(id)arg2;
- (void)cancelTaskWithUUID:(id)arg1 storeResumeData:(_Bool)arg2;
- (void)cancelTaskWithUUID:(id)arg1;
- (id)prefetchImageWithURL:(id)arg1 options:(unsigned long long)arg2;
- (id)prefetchImageWithURL:(id)arg1;
- (id)prefetchImagesWithURLs:(id)arg1 options:(unsigned long long)arg2;
- (id)prefetchImagesWithURLs:(id)arg1;
- (void)callCompletionsWithKey:(id)arg1 image:(id)arg2 alternativeRepresentation:(id)arg3 cached:(_Bool)arg4 response:(id)arg5 error:(id)arg6 finalized:(_Bool)arg7;
- (id)requestWithURL:(id)arg1 key:(id)arg2;
- (_Bool)earlyReturnWithOptions:(unsigned long long)arg1 url:(id)arg2 key:(id)arg3 object:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)insertImageDataIntoCache:(id)arg1 withURL:(id)arg2 processorKey:(id)arg3 additionalCost:(unsigned long long)arg4;
- (void)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 priority:(unsigned long long)arg3 key:(id)arg4 progressImage:(CDUnknownBlockType)arg5 UUID:(id)arg6;
- (void)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 priority:(unsigned long long)arg3 key:(id)arg4 processor:(CDUnknownBlockType)arg5 UUID:(id)arg6;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 priority:(unsigned long long)arg3 processorKey:(id)arg4 processor:(CDUnknownBlockType)arg5 progressImage:(CDUnknownBlockType)arg6 progressDownload:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8 inputUUID:(id)arg9;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 progressDownload:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 processorKey:(id)arg3 processor:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progressImage:(CDUnknownBlockType)arg3 progressDownload:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progressDownload:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progressImage:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)downloadImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShouldUpgradeLowQualityImages:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setLowQualityBPSThreshold:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setHighQualityBPSThreshold:(float)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setProgressiveRendersMaxProgressiveRenderSize:(struct CGSize)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setProgressiveRendersShouldBlur:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setProgressThresholds:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setEstimatedRemainingTimeThresholdForProgressiveDownloads:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMaxNumberOfConcurrentDownloads:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setMaxNumberOfConcurrentOperations:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAuthenticationChallenge:(CDUnknownBlockType)arg1;
- (void)setRequestConfiguration:(CDUnknownBlockType)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)lockOnMainThread;
- (id)defaultImageCache;
- (id)defaultRetryStrategy;
- (id)initWithSessionConfiguration:(id)arg1 alternativeRepresentationProvider:(id)arg2 imageCache:(id)arg3;
- (id)initWithSessionConfiguration:(id)arg1 alternativeRepresentationProvider:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)init;
@property(readonly, nonatomic) PINCache<PINRemoteImageCaching> *pinCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

