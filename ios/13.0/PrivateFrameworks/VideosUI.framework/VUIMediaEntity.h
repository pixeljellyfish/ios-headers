//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableDictionary, NSNumber, NSSet, NSString, VUIMediaEntityKind, VUIMediaEntityType, VUIMediaLibrary, _TVContentRating;
@protocol VUIMediaEntityIdentifier, VUIMediaEntityIdentifierInternal;

@interface VUIMediaEntity : NSObject
{
    _Bool _localChanges;
    _Bool _cachesPropertiesOnFirstAccess;
    VUIMediaLibrary *_mediaLibrary;
    NSObject<VUIMediaEntityIdentifierInternal> *_identifierInternal;
    NSMutableDictionary *_firstAccessPropertiesCache;
    VUIMediaEntityKind *_kind;
    NSSet *_requestedProperties;
}

@property(readonly, nonatomic) NSSet *requestedProperties; // @synthesize requestedProperties=_requestedProperties;
@property(readonly, nonatomic) VUIMediaEntityKind *kind; // @synthesize kind=_kind;
@property(nonatomic) _Bool cachesPropertiesOnFirstAccess; // @synthesize cachesPropertiesOnFirstAccess=_cachesPropertiesOnFirstAccess;
@property(retain, nonatomic) NSMutableDictionary *firstAccessPropertiesCache; // @synthesize firstAccessPropertiesCache=_firstAccessPropertiesCache;
@property(copy, nonatomic) NSObject<VUIMediaEntityIdentifierInternal> *identifierInternal; // @synthesize identifierInternal=_identifierInternal;
@property(nonatomic, getter=hasLocalChanges) _Bool localChanges; // @synthesize localChanges=_localChanges;
@property(retain, nonatomic) VUIMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void).cxx_destruct;
- (id)_defaultValueForPropertyDescriptor:(id)arg1;
- (id)_valueForPropertyDescriptor:(id)arg1;
- (id)_propertyValueForKey:(id)arg1;
- (id)_propertyValueWithBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (_Bool)_didRequestPropertyWithKey:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)assetController;
- (_Bool)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg1;
- (void)populateMetadata;
@property(readonly, copy, nonatomic) NSNumber *seasonNumber;
@property(readonly, copy, nonatomic) NSString *showTitle;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property(copy, nonatomic) NSNumber *playedState;
@property(readonly, copy, nonatomic) NSString *canonicalID;
@property(readonly, copy, nonatomic) NSNumber *purchaseHistoryID;
@property(readonly, copy, nonatomic) NSNumber *storeID;
@property(readonly, copy, nonatomic) NSString *coverArtImageIdentifier;
@property(readonly, copy, nonatomic) _TVContentRating *contentRating;
@property(readonly, copy, nonatomic) NSNumber *releaseYear;
@property(readonly, copy, nonatomic) NSDate *releaseDate;
@property(readonly, copy, nonatomic) NSDate *addedDate;
@property(readonly, copy, nonatomic) NSString *contentDescription;
@property(readonly, copy, nonatomic) NSString *genreTitle;
@property(readonly, copy, nonatomic) NSString *sortTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSNumber *HLSAudioCapability;
@property(readonly, copy, nonatomic) NSNumber *HLSColorCapability;
@property(readonly, copy, nonatomic) NSNumber *HLSResolution;
@property(readonly, copy, nonatomic) NSNumber *audioCapability;
@property(readonly, copy, nonatomic) NSNumber *colorCapability;
@property(readonly, copy, nonatomic) NSNumber *resolution;
@property(readonly, copy, nonatomic) NSNumber *isLocal;
@property(readonly, copy, nonatomic) VUIMediaEntityType *type;
@property(readonly, copy, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;
- (id)init;

@end

