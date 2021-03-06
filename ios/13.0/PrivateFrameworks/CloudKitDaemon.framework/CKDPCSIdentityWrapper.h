//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPCSIdentityWrapper : NSObject
{
    NSString *_identityString;
    struct _PCSIdentitySetData *_identitySet;
    NSString *_primaryServiceName;
}

@property(readonly, nonatomic) NSString *primaryServiceName; // @synthesize primaryServiceName=_primaryServiceName;
@property(readonly, nonatomic) struct _PCSIdentitySetData *identitySet; // @synthesize identitySet=_identitySet;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *identityString; // @synthesize identityString=_identityString;
- (void)dealloc;
- (id)initWithIdentitySet:(struct _PCSIdentitySetData *)arg1 withPrimaryServiceName:(id)arg2;

@end

