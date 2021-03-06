/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:56 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPIdentifier;

@interface CKDPSubscriptionRetrieveRequest : PBRequest <NSCopying> {

	CKDPIdentifier* _identifier;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(id)options;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(CKDPIdentifier *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
@end

