//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions
{
    _Bool _increaseBitRateIfNecessary;
    _Bool _bypassOutputSettingsIfNoComposition;
    CDUnknownBlockType _metadataProcessor;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bypassOutputSettingsIfNoComposition; // @synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition;
@property(nonatomic) _Bool increaseBitRateIfNecessary; // @synthesize increaseBitRateIfNecessary=_increaseBitRateIfNecessary;
@property(copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;

@end

