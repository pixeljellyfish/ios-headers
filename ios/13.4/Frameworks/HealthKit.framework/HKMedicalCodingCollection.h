//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet;

@interface HKMedicalCodingCollection : NSObject <NSSecureCoding, NSCopying>
{
    NSArray *_codings;
}

+ (_Bool)supportsSecureCoding;
+ (id)collectionWithCoding:(id)arg1;
+ (id)collectionWithCodings:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *codings; // @synthesize codings=_codings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSDictionary *codingsBySystem;
- (id)codingsForCodingSystem:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *uniqueCodings;
- (id)description;
- (id)initWithCodings:(id)arg1;
- (id)init;

@end

