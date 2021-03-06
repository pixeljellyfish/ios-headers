//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUI/CUIStructuredThemeStorage-Protocol.h>
#import <CoreUI/CUIStructuredThemeStorage2-Protocol.h>

@class CUICommonAssetStorage, NSCache, NSMutableDictionary, NSString;

@interface CUIStructuredThemeStore : NSObject <CUIStructuredThemeStorage, CUIStructuredThemeStorage2>
{
    NSMutableDictionary *_cache;
    CUICommonAssetStorage *_store;
    struct os_unfair_lock_s _cacheLock;
    struct os_unfair_lock_s _storeLock;
    unsigned long long _themeIndex;
    NSString *_bundleID;
    NSCache *_namedRenditionKeyCache;
    CDUnknownFunctionPointerType _attributePresent;
}

- (void)clearRenditionCache;
- (id)renditionInfoForIdentifier:(unsigned short)arg1;
- (unsigned short)localizationIdentifierForName:(id)arg1;
- (id)localizations;
- (id)appearances;
- (id)nameForAppearanceIdentifier:(unsigned short)arg1;
- (unsigned short)appearanceIdentifierForName:(id)arg1;
- (id)catalogGlobals;
- (id)imagesWithName:(id)arg1;
- (id)allImageNames;
- (id)renditionNameForKeyList:(struct _renditionkeytoken *)arg1;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1 cursorHotSpot:(struct CGPoint *)arg2;
- (const struct _renditionkeytoken *)renditionKeyForName:(id)arg1;
- (_Bool)_canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2 lookForSubstitutions:(_Bool)arg3;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1 isFPO:(_Bool *)arg2;
- (_Bool)canGetRenditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1 usingKeySignature:(id)arg2;
- (id)renditionWithKey:(const struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (id)debugDescriptionForKeyList:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (void)_getKeyForAssetClosestToKey:(struct _renditionkeytoken *)arg1 foundAsset:(_Bool *)arg2;
- (id)convertRenditionKeyToKeyData:(struct _renditionkeytoken *)arg1;
- (id)_newRenditionKeyDataFromKey:(struct _renditionkeytoken *)arg1;
- (_Bool)_formatStorageKeyArrayBytes:(void *)arg1 length:(unsigned long long)arg2 fromKey:(struct _renditionkeytoken *)arg3;
- (void)_updateKeyWithCompatibilityMapping:(struct _renditionkeytoken *)arg1;
- (double)fontSizeForFontSizeType:(id)arg1;
- (_Bool)getFontName:(id *)arg1 baselineOffset:(double *)arg2 forFontType:(id)arg3;
- (_Bool)hasPhysicalColorWithName:(id)arg1;
- (_Bool)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;
- (id)defaultAppearanceName;
- (unsigned int)authoredWithSchemaVersion;
- (unsigned int)distilledInCoreUIVersion;
- (unsigned int)documentFormatVersion;
- (id)themeStore;
- (void)dealloc;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (void)_commonInit;
- (_Bool)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)keySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)copyLookupKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (id)copyKeySignatureForKey:(const struct _renditionkeytoken *)arg1 withBytesNoCopy:(char *)arg2 length:(unsigned long long)arg3;
- (id)baseGradationKeySignatureForKey:(const struct _renditionkeytoken *)arg1;
- (const struct _renditionkeyattributeindex *)keyAttributeIndex;
- (const struct _renditionkeyfmt *)keyFormat;
- (_Bool)usesCUISystemThemeRenditionKey;
- (long long)maximumRenditionKeyTokenCount;
- (unsigned long long)colorSpaceID;
@property(readonly, copy) NSString *debugDescription;
- (id)store;
@property(nonatomic) unsigned long long themeIndex;
- (id)bundleID;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

