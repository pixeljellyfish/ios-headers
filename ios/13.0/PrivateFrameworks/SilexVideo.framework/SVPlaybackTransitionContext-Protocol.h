//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo;

@protocol SVPlaybackTransitionContext <NSObject>
@property(readonly, nonatomic) id <SVVideo> toVideo;
@property(readonly, nonatomic) id <SVVideo> fromVideo;
- (void)completeTransition:(_Bool)arg1;
@end

