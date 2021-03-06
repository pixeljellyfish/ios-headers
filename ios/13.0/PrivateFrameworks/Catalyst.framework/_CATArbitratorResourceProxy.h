//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

#import <Catalyst/CATArbitratorProxy-Protocol.h>

@class NSString, _CATArbitratorRegistrationEntry;

__attribute__((visibility("hidden")))
@interface _CATArbitratorResourceProxy : NSProxy <CATArbitratorProxy>
{
    id mResource;
    _CATArbitratorRegistrationEntry *mRegistration;
    _Bool _isExclusive;
}

@property(readonly, nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)initWithResource:(id)arg1 registration:(id)arg2 exclusive:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

