//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SBWallpaperEffectView, _UIDirectionalRotationView;

@interface SBTransientOverlayWallpaperEffectView : UIView
{
    SBWallpaperEffectView *_wallpaperEffectView;
    _UIDirectionalRotationView *_wallpaperRotationView;
    long long _containerOrientation;
}

- (void).cxx_destruct;
@property(nonatomic) long long containerOrientation; // @synthesize containerOrientation=_containerOrientation;
- (void)_updateWallpaperGeometry;
- (struct CATransform3D)_currentWallpaperTransform;
@property(nonatomic) long long wallpaperStyle;
- (void)setTransitionState:(CDStruct_059c2b36)arg1;
- (_Bool)prepareToAnimateToTransitionState:(inout CDStruct_059c2b36 *)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 wallpaperVariant:(long long)arg2;

@end

