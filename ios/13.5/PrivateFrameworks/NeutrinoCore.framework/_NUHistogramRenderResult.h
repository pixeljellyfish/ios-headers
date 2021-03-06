//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NUHistogramRenderResult-Protocol.h>

@class NSString, NUImageHistogram;
@protocol NURenderStatistics;

@interface _NUHistogramRenderResult : _NURenderResult <NUHistogramRenderResult>
{
    NUImageHistogram *_histogram;
}

- (void).cxx_destruct;
@property(readonly) NUImageHistogram *histogram; // @synthesize histogram=_histogram;
- (id)initWithHistogram:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

