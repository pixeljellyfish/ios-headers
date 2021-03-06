//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUICachedLayout-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SKUIEditorialLinkLayout : NSObject <SKUICachedLayout>
{
    struct CGSize *_sizes;
    struct CGSize _totalSize;
    NSArray *_links;
}

@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, nonatomic) struct CGSize totalSize; // @synthesize totalSize=_totalSize;
- (void).cxx_destruct;
- (struct CGSize)sizeForLinkAtIndex:(long long)arg1;
- (void)enumerateLinesUsingBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLayoutRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

