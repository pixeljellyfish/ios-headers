//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "SDImageLoader-Protocol.h"

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration, SDWebImageDownloaderConfig;
@protocol OS_dispatch_semaphore, SDWebImageDownloaderDecryptor, SDWebImageDownloaderRequestModifier, SDWebImageDownloaderResponseModifier;

@interface SDWebImageDownloader : NSObject <SDImageLoader, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    SDWebImageDownloaderConfig *_config;
    id <SDWebImageDownloaderRequestModifier> _requestModifier;
    id <SDWebImageDownloaderResponseModifier> _responseModifier;
    id <SDWebImageDownloaderDecryptor> _decryptor;
    NSOperationQueue *_downloadQueue;
    NSMutableDictionary *_URLOperations;
    NSMutableDictionary *_HTTPHeaders;
    NSObject<OS_dispatch_semaphore> *_HTTPHeadersLock;
    NSObject<OS_dispatch_semaphore> *_operationsLock;
    NSURLSession *_session;
}

+ (id)sharedDownloader;
+ (void)initialize;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *operationsLock; // @synthesize operationsLock=_operationsLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *HTTPHeadersLock; // @synthesize HTTPHeadersLock=_HTTPHeadersLock;
@property(retain, nonatomic) NSMutableDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSMutableDictionary *URLOperations; // @synthesize URLOperations=_URLOperations;
@property(retain, nonatomic) NSOperationQueue *downloadQueue; // @synthesize downloadQueue=_downloadQueue;
@property(retain, nonatomic) id <SDWebImageDownloaderDecryptor> decryptor; // @synthesize decryptor=_decryptor;
@property(retain, nonatomic) id <SDWebImageDownloaderResponseModifier> responseModifier; // @synthesize responseModifier=_responseModifier;
@property(retain, nonatomic) id <SDWebImageDownloaderRequestModifier> requestModifier; // @synthesize requestModifier=_requestModifier;
@property(readonly, copy, nonatomic) SDWebImageDownloaderConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)operationWithTask:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) NSURLSessionConfiguration *sessionConfiguration;
@property(readonly, nonatomic) unsigned long long currentDownloadCount;
@property(nonatomic, getter=isSuspended) _Bool suspended;
- (void)cancelAllDownloads;
- (id)createDownloaderOperationWithUrl:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (id)downloadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)downloadImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (id)valueForHTTPHeaderField:(id)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)invalidateSessionAndCancel:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;
- (id)init;
- (_Bool)shouldBlockFailedURLWithURL:(id)arg1 error:(id)arg2;
- (id)requestImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (_Bool)canRequestImageForURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

