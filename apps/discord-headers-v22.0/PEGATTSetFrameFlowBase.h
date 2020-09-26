//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PEGATTStateMachineBase.h"

@class NSDictionary;

@interface PEGATTSetFrameFlowBase : PEGATTStateMachineBase
{
    int _currentSlot;
    NSDictionary *_GATTCapabilities;
    _Bool _shouldHaveFrame;
    unsigned char _frameType;
    unsigned char _maxBeaconSlots;
    int _useThisSlot;
    BOOL _txPower;
    unsigned short _advertisingInterval;
}

- (void).cxx_destruct;
- (_Bool)isFrameOfMyType:(id)arg1;
- (void)didWriteAdvInterval;
- (void)didWriteTxPower;
- (void)didReadSlotForVerify:(id)arg1;
- (void)didWriteSlotValue;
- (void)didSetSlotForWrite;
- (void)didScanSlot:(id)arg1;
- (void)didSetSlotForScan;
- (long long)statusCodeForWrite;
- (int)verifyFrameWrite:(id)arg1;
- (id)frameDataToWrite;
- (void)finishedUnlockingBeacon;
- (id)stateMachineTransitionTable;
- (id)initWithPeripheral:(id)arg1 passKey:(id)arg2 frameType:(unsigned char)arg3 shouldHaveFrame:(_Bool)arg4 beaconMaxSlots:(unsigned char)arg5 userInfo:(id)arg6 logs:(id)arg7 callback:(CDUnknownBlockType)arg8 statusCallback:(CDUnknownBlockType)arg9 dispatchQueue:(id)arg10;

@end

