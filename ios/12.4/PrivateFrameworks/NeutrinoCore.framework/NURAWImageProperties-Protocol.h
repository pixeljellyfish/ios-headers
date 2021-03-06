//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol NURAWNoiseReductionProperties;

@protocol NURAWImageProperties <NSObject>
@property(readonly) id <NURAWNoiseReductionProperties> noiseReductionProperties;
@property(readonly) double tint;
@property(readonly) double temperature;
@property(readonly) NSArray *availableDecoderVersions;
@property(readonly) NSString *decoderVersion;
@end

