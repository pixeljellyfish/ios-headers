//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomePiPSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_appLayout;
    struct CGPoint _finalCenter;
    double _finalScale;
    double _sourceAlpha;
    SBCoplanarSwitcherModifier *_coplanarModifier;
}

- (void).cxx_destruct;
- (_Bool)_isIndexSelectedAppLayout:(unsigned long long)arg1;
- (_Bool)_shouldApplyMorphToPipToIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfAppLayoutsToCacheSnapshots;
- (id)topMostAppLayouts;
- (id)layoutSettings;
- (_Bool)isSwitcherWindowUserInteractionEnabled;
- (_Bool)isSwitcherWindowVisible;
- (_Bool)isHomeScreenContentRequired;
- (long long)wallpaperStyle;
- (_Bool)isWallpaperRequiredForSwitcher;
- (long long)backdropBlurType;
- (double)opacityForIndex:(unsigned long long)arg1;
- (struct UIRectCornerRadii)cardCornerRadiiForIndex:(unsigned long long)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)scaleForIndex:(unsigned long long)arg1;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (id)transitionWillBegin;
- (void)didMoveToParentModifier:(id)arg1;
- (id)initWithTransitionID:(id)arg1 appLayout:(id)arg2;

@end

