//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBMutableArray, NSString;

@interface SCODebugInfo : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasRequestTimeMillis; // @dynamic hasRequestTimeMillis;
@property(nonatomic) _Bool hasServedByTask; // @dynamic hasServedByTask;
@property(nonatomic) _Bool hasServerBuildVersion; // @dynamic hasServerBuildVersion;
@property(nonatomic) _Bool hasTokenIdArray; // @dynamic hasTokenIdArray;
@property(nonatomic) long long requestTimeMillis; // @dynamic requestTimeMillis;
@property(retain, nonatomic) NSString *servedByTask; // @dynamic servedByTask;
@property(retain, nonatomic) NSString *serverBuildVersion; // @dynamic serverBuildVersion;
@property(retain, nonatomic) GSDK_PBMutableArray *tokenIdArray; // @dynamic tokenIdArray;

@end

