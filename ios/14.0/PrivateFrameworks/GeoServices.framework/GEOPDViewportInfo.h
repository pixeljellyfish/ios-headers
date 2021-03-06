/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOMapRegion;

@interface GEOPDViewportInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOMapRegion* _mapRegion;
	int _mapType;
	unsigned _timeSinceMapViewportChanged;
	struct {
		unsigned has_mapType : 1;
		unsigned has_timeSinceMapViewportChanged : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion; 
@property (assign,nonatomic) BOOL hasTimeSinceMapViewportChanged; 
@property (assign,nonatomic) unsigned timeSinceMapViewportChanged; 
@property (assign,nonatomic) BOOL hasMapType; 
@property (assign,nonatomic) int mapType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)viewportInfoForTraits:(id)arg1 ;
+(BOOL)isValid:(id)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(int)mapType;
-(unsigned)timeSinceMapViewportChanged;
-(void)setTimeSinceMapViewportChanged:(unsigned)arg1 ;
-(void)setHasTimeSinceMapViewportChanged:(BOOL)arg1 ;
-(BOOL)hasTimeSinceMapViewportChanged;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMapType:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasMapRegion;
-(id)jsonRepresentation;
-(BOOL)hasMapType;
-(GEOMapRegion *)mapRegion;
-(id)mapTypeAsString:(int)arg1 ;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)readAll:(BOOL)arg1 ;
-(int)StringAsMapType:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)hash;
-(void)setHasMapType:(BOOL)arg1 ;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
@end

