//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface RTStateModelAggOutOfStateSelection : NSObject
{
    NSMutableArray *_selectOOStStates;
    double _weeklyDensityCorrection;
    double _dailyDensityCorrection;
}

- (void).cxx_destruct;
@property(nonatomic) double dailyDensityCorrection; // @synthesize dailyDensityCorrection=_dailyDensityCorrection;
@property(nonatomic) double weeklyDensityCorrection; // @synthesize weeklyDensityCorrection=_weeklyDensityCorrection;
@property(retain, nonatomic) NSMutableArray *selectOOStStates; // @synthesize selectOOStStates=_selectOOStStates;
- (id)initWithSelectOOStStates:(id)arg1 dailyDensityCorrection:(double)arg2 weeklyDensityCorrection:(double)arg3;
- (id)init;

@end

