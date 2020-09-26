//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface RTCCertificate : NSObject <NSCopying>
{
    NSString *_private_key;
    NSString *_certificate;
}

+ (id)generateCertificateWithParams:(id)arg1;
@property(readonly, copy, nonatomic) NSString *certificate; // @synthesize certificate=_certificate;
@property(readonly, copy, nonatomic) NSString *private_key; // @synthesize private_key=_private_key;
- (void).cxx_destruct;
- (id)initWithPrivateKey:(id)arg1 certificate:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

