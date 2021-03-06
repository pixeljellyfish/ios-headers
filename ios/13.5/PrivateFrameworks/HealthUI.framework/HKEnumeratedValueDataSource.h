//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKHealthQueryChartCacheDataSource.h>

@class NSArray;

@interface HKEnumeratedValueDataSource : HKHealthQueryChartCacheDataSource
{
    NSArray *_enumeratedValueOrder;
    CDUnknownBlockType _userInfoCreationBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(retain, nonatomic) NSArray *enumeratedValueOrder; // @synthesize enumeratedValueOrder=_enumeratedValueOrder;
- (id)_enumeratedValuesToIndices:(id)arg1 mapping:(id)arg2;
- (id)_enumeratedValueOrderMapping;
- (void)_handleSamples:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 intervalComponents:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

@end

