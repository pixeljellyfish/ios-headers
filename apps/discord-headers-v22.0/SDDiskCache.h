//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDDiskCache-Protocol.h"

@class NSFileManager, NSString, SDImageCacheConfig;

@interface SDDiskCache : NSObject <SDDiskCache>
{
    SDImageCacheConfig *_config;
    NSString *_diskCachePath;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(readonly, nonatomic) SDImageCacheConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)moveCacheDirectoryFromPath:(id)arg1 toPath:(id)arg2;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (unsigned long long)totalCount;
- (unsigned long long)totalSize;
- (id)cachePathForKey:(id)arg1;
- (void)removeExpiredData;
- (void)removeAllData;
- (void)removeDataForKey:(id)arg1;
- (void)setExtendedData:(id)arg1 forKey:(id)arg2;
- (id)extendedDataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (id)dataForKey:(id)arg1;
- (_Bool)containsDataForKey:(id)arg1;
- (void)commonInit;
- (id)initWithCachePath:(id)arg1 config:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

