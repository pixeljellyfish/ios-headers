//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBMutableArray;

@interface SCOAudioRawRichMediaPayload : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMainLoopInstanceArray; // @dynamic hasMainLoopInstanceArray;
@property(nonatomic) _Bool hasNumChannels; // @dynamic hasNumChannels;
@property(nonatomic) _Bool hasSampleRate; // @dynamic hasSampleRate;
@property(nonatomic) _Bool hasStartTransitionArray; // @dynamic hasStartTransitionArray;
@property(nonatomic) _Bool hasStopTransitionArray; // @dynamic hasStopTransitionArray;
@property(retain, nonatomic) GSDK_PBMutableArray *mainLoopInstanceArray; // @dynamic mainLoopInstanceArray;
@property(nonatomic) int numChannels; // @dynamic numChannels;
@property(nonatomic) float sampleRate; // @dynamic sampleRate;
@property(retain, nonatomic) GSDK_PBMutableArray *startTransitionArray; // @dynamic startTransitionArray;
@property(retain, nonatomic) GSDK_PBMutableArray *stopTransitionArray; // @dynamic stopTransitionArray;

@end

