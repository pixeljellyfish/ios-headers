//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBInteger, _INPBIntentMetadata, _INPBString;

@protocol _INPBSetProfileInCarIntent <NSObject>
@property(readonly, nonatomic) _Bool hasProfileNumber;
@property(retain, nonatomic) _INPBInteger *profileNumber;
@property(readonly, nonatomic) _Bool hasProfileName;
@property(retain, nonatomic) _INPBString *profileName;
@property(readonly, nonatomic) _Bool hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) _Bool hasDefaultProfile;
@property(nonatomic) _Bool defaultProfile;
@property(readonly, nonatomic) _Bool hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@end

