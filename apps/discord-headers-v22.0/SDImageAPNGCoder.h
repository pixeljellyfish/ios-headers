//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SDImageIOAnimatedCoder.h"

#import "SDAnimatedImageCoder-Protocol.h"
#import "SDProgressiveImageCoder-Protocol.h"

@class NSData, NSString;

@interface SDImageAPNGCoder : SDImageIOAnimatedCoder <SDProgressiveImageCoder, SDAnimatedImageCoder>
{
}

+ (unsigned long long)defaultLoopCount;
+ (id)loopCountProperty;
+ (id)delayTimeProperty;
+ (id)unclampedDelayTimeProperty;
+ (id)dictionaryProperty;
+ (id)imageUTType;
+ (long long)imageFormat;
+ (id)sharedCoder;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *animatedImageData;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

