//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifier.h>

@interface SBLowEndHardwareSwitcherModifier : SBSwitcherModifier
{
    unsigned long long _options;
    _Bool _floatingAppVisibleOverSplitView;
    _Bool _floatingAppVisibleOverExclusiveForegroundApp;
}

- (_Bool)_shouldSimplifyForTodayViewOrSpotlight;
- (_Bool)_shouldSimplifyForOpenFolder;
- (_Bool)_shouldResignActiveAppsUnderFloatingApp;
- (long long)keyboardSuppressionMode;
- (long long)sceneDeactivationReason;
- (_Bool)wantsResignActiveAssertion;
- (id)handleMainTransitionEvent:(id)arg1;
- (double)wallpaperScale;
- (double)homeScreenScale;
- (double)homeScreenAlpha;
- (id)initWithSimplificationOptions:(unsigned long long)arg1;

@end

