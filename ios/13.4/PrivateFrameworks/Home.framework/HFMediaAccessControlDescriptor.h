//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class NSString;

@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>
{
    _Bool _accessRequiresPassword;
    unsigned long long _access;
    NSString *_accessPassword;
}

+ (id)na_identity;
+ (_Bool)accessClassificationSupportsPassword:(unsigned long long)arg1;
+ (id)descriptorWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;
+ (id)defaultAccessControl;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *accessPassword; // @synthesize accessPassword=_accessPassword;
@property(readonly, nonatomic) _Bool accessRequiresPassword; // @synthesize accessRequiresPassword=_accessRequiresPassword;
@property(readonly, nonatomic) unsigned long long access; // @synthesize access=_access;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool accessSupportsPassword;
- (id)init;
- (id)initWithAccess:(unsigned long long)arg1 requiresPassword:(_Bool)arg2 password:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

