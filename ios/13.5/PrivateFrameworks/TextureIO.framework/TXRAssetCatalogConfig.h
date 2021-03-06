//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, TXRAssetCatalogFileAttributes, TXRTexture;

@interface TXRAssetCatalogConfig : NSObject
{
    TXRTexture *_texture;
    TXRAssetCatalogFileAttributes *_baseFileAttributes;
    NSMutableSet *_fileAttributesList;
    unsigned long long _pixelFormat;
    unsigned long long _mipmapOption;
    unsigned long long _memory;
    unsigned long long _graphicsFeatureSet;
    unsigned long long _idiom;
    unsigned long long _displayColorSpace;
    unsigned long long _scaleFactor;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) unsigned long long displayColorSpace; // @synthesize displayColorSpace=_displayColorSpace;
@property(nonatomic) unsigned long long idiom; // @synthesize idiom=_idiom;
@property(nonatomic) unsigned long long graphicsFeatureSet; // @synthesize graphicsFeatureSet=_graphicsFeatureSet;
@property(nonatomic) unsigned long long memory; // @synthesize memory=_memory;
@property(readonly, nonatomic) TXRTexture *texture; // @synthesize texture=_texture;
@property(nonatomic) unsigned long long mipmapOption; // @synthesize mipmapOption=_mipmapOption;
@property(nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(readonly, nonatomic) NSSet *fileAttributesList; // @synthesize fileAttributesList=_fileAttributesList;
@property(retain, nonatomic) TXRAssetCatalogFileAttributes *baseFileAttributes; // @synthesize baseFileAttributes=_baseFileAttributes;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2 fileFormat:(unsigned long long)arg3 colorSpace:(struct CGColorSpace *)arg4 exifOrientation:(unsigned char)arg5;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 fileFormat:(unsigned long long)arg2 colorSpace:(struct CGColorSpace *)arg3 exifOrientation:(unsigned char)arg4;
- (void)addFileAttributesForLevel:(unsigned long long)arg1 face:(unsigned long long)arg2;
- (void)addFileAttributesForLevel:(unsigned long long)arg1;
- (id)initWithTexture:(id)arg1;

@end

