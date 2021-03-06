//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSDate, NSNumber, NSString;

@interface MCCertificatePayload : MCPayload
{
    NSData *_certificatePersistentID;
    NSString *_installedOnDeviceID;
    NSNumber *_isIdentity;
    NSNumber *_isRoot;
    NSNumber *_expiryInterval;
    NSString *_certSubject;
    NSString *_certIssuer;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *installedOnDeviceID; // @synthesize installedOnDeviceID=_installedOnDeviceID;
@property(retain, nonatomic) NSData *certificatePersistentID; // @synthesize certificatePersistentID=_certificatePersistentID;
- (id)issuer;
- (id)certificateSubject;
@property(readonly, retain, nonatomic) NSDate *expiry;
- (id)description;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)title;
@property(readonly, nonatomic) _Bool isIdentity;
@property(readonly, nonatomic) _Bool isFullyTrustedRootCert;
@property(readonly, nonatomic) _Bool isRoot;
- (struct __SecIdentity *)copyIdentityFromKeychain;
- (struct __SecCertificate *)copyCertificate;
- (id)stubDictionary;
@property(readonly, nonatomic) _Bool isSigned;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

