//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerBaseCircularView.h>

@class NTKRichComplicationImageView;

@interface NTKRichComplicationCornerCircularImageView : NTKRichComplicationCornerBaseCircularView
{
    NTKRichComplicationImageView *_imageView;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
- (void).cxx_destruct;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_handleTemplate:(id)arg1 reason:(long long)arg2;
- (void)setPaused:(_Bool)arg1;
- (id)_circularView;

@end

