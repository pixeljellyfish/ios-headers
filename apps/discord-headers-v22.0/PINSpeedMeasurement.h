//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PINSpeedMeasurement : NSObject
{
    float _bytesPerSecond;
    float _startAdjustedBytesPerSecond;
    unsigned long long _count;
    double _timeToFirstByte;
}

@property(nonatomic) double timeToFirstByte; // @synthesize timeToFirstByte=_timeToFirstByte;
@property(nonatomic) float startAdjustedBytesPerSecond; // @synthesize startAdjustedBytesPerSecond=_startAdjustedBytesPerSecond;
@property(nonatomic) float bytesPerSecond; // @synthesize bytesPerSecond=_bytesPerSecond;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;

@end

