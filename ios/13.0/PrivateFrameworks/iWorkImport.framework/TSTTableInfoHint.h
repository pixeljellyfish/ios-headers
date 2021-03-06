//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTTableInfoHint : NSObject
{
    NSMutableSet *_tableStyleSet;
    TSTCellUIDList *_cellFillList;
}

@property(readonly, nonatomic) TSTCellUIDList *cellFillList; // @synthesize cellFillList=_cellFillList;
@property(readonly, nonatomic) NSMutableSet *tableStyleSet; // @synthesize tableStyleSet=_tableStyleSet;
- (void)setTableStyleImageForStyleArea:(unsigned long long)arg1;
- (void)addCellUIDToFillList:(struct TSTCellUID)arg1;
- (void)dealloc;
- (id)init;

@end

