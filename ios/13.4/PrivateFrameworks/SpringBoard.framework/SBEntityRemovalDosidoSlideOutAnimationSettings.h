//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBFFluidBehaviorSettings;

@interface SBEntityRemovalDosidoSlideOutAnimationSettings : PTSettings
{
    double _fromViewSlideOutAnimationDelay;
    double _fromViewSlideOutHeightOffsetMultiplier;
    SBFFluidBehaviorSettings *_fromViewSlideOutAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_defaultAnimationSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *defaultAnimationSettings; // @synthesize defaultAnimationSettings=_defaultAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *fromViewSlideOutAnimationSettings; // @synthesize fromViewSlideOutAnimationSettings=_fromViewSlideOutAnimationSettings;
@property(nonatomic) double fromViewSlideOutHeightOffsetMultiplier; // @synthesize fromViewSlideOutHeightOffsetMultiplier=_fromViewSlideOutHeightOffsetMultiplier;
@property(nonatomic) double fromViewSlideOutAnimationDelay; // @synthesize fromViewSlideOutAnimationDelay=_fromViewSlideOutAnimationDelay;
- (void)setDefaultValues;

@end

