//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCPMessage, GCPStrategy, GCPTimeToLive, NSString;

@interface GCPPublicationParams : NSObject
{
    GCPMessage *_message;
    GCPTimeToLive *_timeToLive;
    long long _distanceType;
    CDUnknownBlockType _statusHandler;
    GCPStrategy *_strategy;
    NSString *_identifier;
}

+ (id)paramsWithMessage:(id)arg1 strategy:(id)arg2 optionalParamsBlock:(CDUnknownBlockType)arg3;
+ (id)paramsWithMessage:(id)arg1 strategy:(id)arg2;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) GCPStrategy *strategy; // @synthesize strategy=_strategy;
@property(readonly, copy, nonatomic) CDUnknownBlockType statusHandler; // @synthesize statusHandler=_statusHandler;
@property(readonly, nonatomic) long long distanceType; // @synthesize distanceType=_distanceType;
@property(readonly, nonatomic) GCPTimeToLive *timeToLive; // @synthesize timeToLive=_timeToLive;
@property(readonly, nonatomic) GCPMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMessage:(id)arg1 strategy:(id)arg2 optionalParams:(id)arg3;

@end

