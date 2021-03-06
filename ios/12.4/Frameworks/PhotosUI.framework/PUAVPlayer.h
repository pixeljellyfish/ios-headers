//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVPlayer.h>

@protocol PUAVPlayerDelegate;

__attribute__((visibility("hidden")))
@interface PUAVPlayer : AVPlayer
{
    struct {
        _Bool respondsToRateDidChange;
        _Bool respondsToStatusDidChange;
        _Bool respondsToDidDeallocate;
    } _delegateFlags;
    id <PUAVPlayerDelegate> _delegate;
}

@property(nonatomic) __weak id <PUAVPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

