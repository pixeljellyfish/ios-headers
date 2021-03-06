//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface NavigationAudioFeedbackCollector : NSObject <MNNavigationServiceObserver>
{
    struct GEONavigationAudioFeedback *_audioFeedback;
    _Bool _viewingAudioSettings;
    _Bool _sessionDidStart;
}

- (void)_updateRoutesPropertiesAtEndOfSession;
- (void)_updateAvailableRoutesProperties;
- (void)navigationService:(id)arg1 didUpdateAudioOutputSettings:(id)arg2;
- (void)navigationService:(id)arg1 didStartSpeakingPrompt:(id)arg2;
- (struct GEONavigationAudioFeedback *)audioFeedback;
- (void)updateHFPPreferenceChanged:(_Bool)arg1;
- (void)updateCurrentAudioRouteChanged;
- (void)updateViewingAudioSettings:(_Bool)arg1;
- (void)endSession;
- (void)startSession;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

