//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMapTable, NSMutableDictionary;

@interface PKAsyncCache : NSObject
{
    struct os_unfair_lock_s _lock;
    NSCache *_itemByKey;
    NSMapTable *_weakItemByKey;
    NSMutableDictionary *_outstandingRetrievals;
}

- (void).cxx_destruct;
- (void)_executeRetrievalBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)retrieveItemForKey:(id)arg1 synchronous:(_Bool)arg2 retrievalBlock:(CDUnknownBlockType)arg3 deliveryBlock:(CDUnknownBlockType)arg4;
- (id)initWithCache:(id)arg1;
- (id)init;

@end

