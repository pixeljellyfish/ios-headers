//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSData, SCOBeaconId;

@interface SCOBeaconObservation : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;
- (id)initWithBeaconID:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SCOBeaconId *beaconId; // @dynamic beaconId;
@property(nonatomic) _Bool hasBeaconId; // @dynamic hasBeaconId;
@property(nonatomic) _Bool hasTelemetry; // @dynamic hasTelemetry;
@property(retain, nonatomic) NSData *telemetry; // @dynamic telemetry;

@end

