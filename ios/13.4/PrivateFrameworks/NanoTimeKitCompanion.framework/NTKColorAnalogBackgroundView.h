//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, CLKDevice, NSArray, UIColor;

@interface NTKColorAnalogBackgroundView : UIView
{
    CALayer *_tickContainerLayer;
    NSArray *_tickLayers;
    CALayer *_circleLayer;
    CALayer *_fullscreenLayer;
    CLKDevice *_device;
    UIColor *_color;
    unsigned long long _style;
}

- (void).cxx_destruct;
- (void)updateLayerVisibilityForStyles:(id)arg1;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3;
- (void)applyStyle:(unsigned long long)arg1;
- (void)cleanupAfterZoom;
- (void)applyZoomFraction:(double)arg1;
- (void)applyTransitionFraction:(double)arg1 fromScheme:(id)arg2 toScheme:(id)arg3;
- (void)applyColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 device:(id)arg2;

@end

