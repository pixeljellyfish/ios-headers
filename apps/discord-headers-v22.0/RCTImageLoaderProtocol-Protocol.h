//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTURLRequestHandler-Protocol.h"

@class NSArray, NSData, NSDictionary, NSURLRequest;
@protocol RCTImageCache;

@protocol RCTImageLoaderProtocol <RCTURLRequestHandler>
@property(nonatomic) unsigned long long maxConcurrentDecodingBytes;
@property(nonatomic) unsigned long long maxConcurrentDecodingTasks;
@property(nonatomic) unsigned long long maxConcurrentLoadingTasks;
- (void)setImageCache:(id <RCTImageCache>)arg1;
- (NSDictionary *)getImageCacheStatus:(NSArray *)arg1;
- (void (^)(void))getImageSizeForURLRequest:(NSURLRequest *)arg1 block:(void (^)(NSError *, struct CGSize))arg2;
- (void (^)(void))decodeImageData:(NSData *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 completionBlock:(void (^)(NSError *, UIImage *))arg6;
- (void (^)(void))loadImageWithURLRequest:(NSURLRequest *)arg1 size:(struct CGSize)arg2 scale:(double)arg3 clipped:(_Bool)arg4 resizeMode:(long long)arg5 progressBlock:(void (^)(long long, long long))arg6 partialLoadBlock:(void (^)(UIImage *))arg7 completionBlock:(void (^)(NSError *, UIImage *))arg8;
- (void (^)(void))loadImageWithURLRequest:(NSURLRequest *)arg1 callback:(void (^)(NSError *, UIImage *))arg2;
@end

