//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBHardwareButtonGestureParametersProviderBase.h>

#import <SpringBoard/SBHardwareButtonInteraction-Protocol.h>

@class NSString, SBSiriHardwareButtonInteraction;

@interface SBSiriHardwareButtonEventsOnlyButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>
{
    long long _siriButtonIdentifier;
    SBSiriHardwareButtonInteraction *_parentSiriInteraction;
}

+ (id)hardwareButtonInteractionForHomeButtonForwardingToInteraction:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak SBSiriHardwareButtonInteraction *parentSiriInteraction; // @synthesize parentSiriInteraction=_parentSiriInteraction;
@property(nonatomic) long long siriButtonIdentifier; // @synthesize siriButtonIdentifier=_siriButtonIdentifier;
- (_Bool)consumeSinglePressUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

