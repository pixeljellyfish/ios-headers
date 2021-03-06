//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEFilterProviderConfiguration;

@interface NEContentFilter : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    _Bool _enabled;
    _Bool _enableManualMode;
    NEFilterProviderConfiguration *_provider;
    long long _grade;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool enableManualMode; // @synthesize enableManualMode=_enableManualMode;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
@property(copy) NEFilterProviderConfiguration *provider; // @synthesize provider=_provider;
@property(getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

