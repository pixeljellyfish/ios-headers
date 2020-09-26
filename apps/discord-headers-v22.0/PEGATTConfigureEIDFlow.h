//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PEGATTConfigureFrameFlowBase.h"

@class NSData;

@interface PEGATTConfigureEIDFlow : PEGATTConfigureFrameFlowBase
{
    NSData *_serverECDHKey;
    int _rotationExponent;
    int _eidReadRetryCount;
}

- (void).cxx_destruct;
- (void)didReadBeaconPublicECDHKey:(id)arg1;
- (_Bool)verifyFrameData:(id)arg1;
- (id)frameDataForSlot;
- (int)slotReadyDelayInSeconds;
- (long long)frameWriteStatus;
- (id)frameType;
- (id)stateMachineTransitionTable;
- (id)initWithPeripheral:(id)arg1 passKey:(id)arg2 userInfo:(id)arg3 logs:(id)arg4 callback:(CDUnknownBlockType)arg5 statusCallback:(CDUnknownBlockType)arg6 dispatchQueue:(id)arg7;

@end

