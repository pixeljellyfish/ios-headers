//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class GSDK_PBMutableArray, SCOResponseHeader;

@interface SCOGetTokensResponse : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(nonatomic) _Bool hasReservedTokenArray; // @dynamic hasReservedTokenArray;
@property(retain, nonatomic) SCOResponseHeader *header; // @dynamic header;
@property(retain, nonatomic) GSDK_PBMutableArray *reservedTokenArray; // @dynamic reservedTokenArray;

@end

