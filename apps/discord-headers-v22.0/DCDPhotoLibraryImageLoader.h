//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTImageURLLoader-Protocol.h"

@class NSCache, NSString, RCTBridge;
@protocol OS_dispatch_queue;

@interface DCDPhotoLibraryImageLoader : NSObject <RCTImageURLLoader>
{
    NSCache *_imageCache;
    RCTBridge *_bridge;
}

+ (_Bool)requiresMainQueueSetup;
+ (void)load;
+ (id)moduleName;
@property(readonly, nonatomic) __weak RCTBridge *bridge; // @synthesize bridge=_bridge;
- (void).cxx_destruct;
- (CDUnknownBlockType)loadImageForURL:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 resizeMode:(long long)arg4 progressHandler:(CDUnknownBlockType)arg5 partialLoadHandler:(CDUnknownBlockType)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (_Bool)canLoadImageURL:(id)arg1;
- (float)loaderPriority;
- (void)clearCache;
- (void)dealloc;
- (id)init;
- (id)sharedImageCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *methodQueue;
@property(readonly) Class superclass;

@end

