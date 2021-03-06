//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRKKeychainUtility : NSObject
{
}

+ (_Bool)identityExpiredWithPersistentId:(id)arg1;
+ (_Bool)certificateExpiredWithPersistentId:(id)arg1;
+ (id)certificateExpirationDateFromPersistentId:(id)arg1;
+ (id)identityExpirationDateFromPersistentId:(id)arg1;
+ (id)_validityDateIntervalForCetificateRef:(struct __SecCertificate *)arg1;
+ (id)_validityStartDateForCertificateRef:(struct __SecCertificate *)arg1;
+ (id)_validityEndDateForCertificateRef:(struct __SecCertificate *)arg1;
+ (id)validityDateIntervalForItemWithPersistentID:(id)arg1;
+ (_Bool)itemWithPersistentIDIsTemporallyValid:(id)arg1;
+ (id)certificateCommonNamesFromPersistentID:(id)arg1;
+ (id)createIdentityPersistentIdFromCommonName:(id)arg1 groupName:(id)arg2;
+ (struct __SecIdentity *)identityFromPrivateKeyData:(id)arg1 certificateData:(id)arg2;
+ (id)addCertificateData:(id)arg1 toGroup:(id)arg2;
+ (id)persistentIdFromCertificateData:(id)arg1;
+ (struct __SecKey *)privateKeyFromPersistentId:(id)arg1;
+ (id)certificateDataFromPersistentId:(id)arg1;
+ (id)privateKeyDataFromPersistentId:(id)arg1;
+ (id)persistentIdFromPrivateKeyData:(id)arg1 certificateData:(id)arg2;
+ (id)getIdentityPublicCertificateData:(struct __SecIdentity *)arg1;
+ (id)getIdentityFingerprint:(struct __SecIdentity *)arg1;
+ (id)getIdentityExpirationDate:(struct __SecIdentity *)arg1;
+ (id)getCertificateFingerprint:(struct __SecCertificate *)arg1;
+ (id)getCertificateExpirationDate:(struct __SecCertificate *)arg1;
+ (struct __SecIdentity *)createIdentityWithCommonName:(id)arg1 error:(id *)arg2;
+ (id)getCommonNamesForCertificate:(struct __SecCertificate *)arg1;
+ (struct __SecCertificate *)getLeafCertificateForTrust:(struct __SecTrust *)arg1;
+ (_Bool)itemExistsInKeychain:(void *)arg1;
+ (id)getCertificatesWithPersistentIDs:(id)arg1;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (const void *)copyItemWithPersistentID:(id)arg1;
+ (_Bool)removeItemWithPersistentID:(id)arg1;
+ (id)addPrivateKeyData:(id)arg1 certificateData:(id)arg2 toGroup:(id)arg3;
+ (id)addItem:(void *)arg1 toGroup:(id)arg2;
+ (id)baseQueryAttributes;

@end

