//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface NTKSiderealColorManager : NSObject
{
    NSMutableArray *_updateHandlers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)solarDiskGlowColorCurve;
- (id)outerComplicationColorCurve;
- (id)innerComplicationColorCurve;
- (id)astronomicalTwilightColorCurve;
- (id)nauticalTwilightColorCurve;
- (id)civilTwilightColorCurve;
- (id)dayGradientColorCurves;
- (id)dialBackgroundColorCurve;
- (void)_notifyHandlers;
- (void)addColorUpdateHandler:(CDUnknownBlockType)arg1;
- (void)setSunAltitude:(double)arg1;
- (void)dealloc;
- (id)_init;

@end

