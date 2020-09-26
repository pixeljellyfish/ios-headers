//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISlider.h>

@class UIImage;

@interface RNCSlider : UISlider
{
    float _unclippedValue;
    float _step;
    float _lastValue;
    CDUnknownBlockType _onRNCSliderValueChange;
    CDUnknownBlockType _onRNCSliderSlidingStart;
    CDUnknownBlockType _onRNCSliderSlidingComplete;
    UIImage *_trackImage;
}

@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;
@property(nonatomic) float lastValue; // @synthesize lastValue=_lastValue;
@property(nonatomic) float step; // @synthesize step=_step;
@property(copy, nonatomic) CDUnknownBlockType onRNCSliderSlidingComplete; // @synthesize onRNCSliderSlidingComplete=_onRNCSliderSlidingComplete;
@property(copy, nonatomic) CDUnknownBlockType onRNCSliderSlidingStart; // @synthesize onRNCSliderSlidingStart=_onRNCSliderSlidingStart;
@property(copy, nonatomic) CDUnknownBlockType onRNCSliderValueChange; // @synthesize onRNCSliderValueChange=_onRNCSliderValueChange;
- (void).cxx_destruct;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setInverted:(_Bool)arg1;
@property(retain, nonatomic) UIImage *thumbImage;
@property(retain, nonatomic) UIImage *maximumTrackImage;
@property(retain, nonatomic) UIImage *minimumTrackImage;
- (void)setMaximumValue:(float)arg1;
- (void)setMinimumValue:(float)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)setValue:(float)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

