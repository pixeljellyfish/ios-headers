//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class CADisplayLink, NSArray, NSDate, NSIndexSet, NSMutableDictionary, NSMutableIndexSet;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout
{
    _Bool _holdingBoundsInvalidation;
    _Bool _useInitialLayoutAttributesForRotation;
    _Bool _isResting;
    _Bool _easingUp;
    _Bool _hasLoadMore;
    _Bool _useFastQuanta;
    _Bool _coalesceInvalidations;
    _Bool _sizeCategoryIsAccessibilitySizeCategory;
    double _anchorYPosition;
    NSIndexSet *_indicesOfChatItemsToBeRemovedWithoutFading;
    NSIndexSet *_indicesOfChatItemsToBeInsertedWithoutFading;
    NSArray *_layoutAttributes;
    NSArray *_associatedLayoutAttributes;
    NSArray *_decorationLayoutAttributes;
    NSArray *_oldAssociatedLayoutAttributes;
    NSMutableIndexSet *_insertedAssociatedLayoutAttributes;
    CADisplayLink *_displayLink;
    double _prevTimestamp;
    NSDate *_lastTouchTime;
    NSMutableDictionary *_initialParentLayoutAttributes;
    NSMutableDictionary *_finalParentVerticalOffsets;
    struct CGPoint _targetContentOffset;
    struct CGSize _sizeForRotation;
    struct CGSize _contentSize;
    struct CGRect _visibleBounds;
}

+ (Class)layoutAttributesClass;
+ (long long)translateLayoutIndexToEffectIndex:(long long)arg1;
@property(nonatomic) _Bool sizeCategoryIsAccessibilitySizeCategory; // @synthesize sizeCategoryIsAccessibilitySizeCategory=_sizeCategoryIsAccessibilitySizeCategory;
@property(nonatomic) _Bool coalesceInvalidations; // @synthesize coalesceInvalidations=_coalesceInvalidations;
@property(nonatomic) _Bool useFastQuanta; // @synthesize useFastQuanta=_useFastQuanta;
@property(retain, nonatomic) NSMutableDictionary *finalParentVerticalOffsets; // @synthesize finalParentVerticalOffsets=_finalParentVerticalOffsets;
@property(retain, nonatomic) NSMutableDictionary *initialParentLayoutAttributes; // @synthesize initialParentLayoutAttributes=_initialParentLayoutAttributes;
@property(nonatomic) _Bool hasLoadMore; // @synthesize hasLoadMore=_hasLoadMore;
@property(retain, nonatomic) NSDate *lastTouchTime; // @synthesize lastTouchTime=_lastTouchTime;
@property(nonatomic) _Bool easingUp; // @synthesize easingUp=_easingUp;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double prevTimestamp; // @synthesize prevTimestamp=_prevTimestamp;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSMutableIndexSet *insertedAssociatedLayoutAttributes; // @synthesize insertedAssociatedLayoutAttributes=_insertedAssociatedLayoutAttributes;
@property(copy, nonatomic) NSArray *oldAssociatedLayoutAttributes; // @synthesize oldAssociatedLayoutAttributes=_oldAssociatedLayoutAttributes;
@property(copy, nonatomic) NSArray *decorationLayoutAttributes; // @synthesize decorationLayoutAttributes=_decorationLayoutAttributes;
@property(copy, nonatomic) NSArray *associatedLayoutAttributes; // @synthesize associatedLayoutAttributes=_associatedLayoutAttributes;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeInsertedWithoutFading; // @synthesize indicesOfChatItemsToBeInsertedWithoutFading=_indicesOfChatItemsToBeInsertedWithoutFading;
@property(retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeRemovedWithoutFading; // @synthesize indicesOfChatItemsToBeRemovedWithoutFading=_indicesOfChatItemsToBeRemovedWithoutFading;
@property(nonatomic) struct CGSize sizeForRotation; // @synthesize sizeForRotation=_sizeForRotation;
@property(nonatomic) _Bool isResting; // @synthesize isResting=_isResting;
@property(nonatomic, getter=isUsingInitialLayoutAttributesForRotation) _Bool useInitialLayoutAttributesForRotation; // @synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation;
@property(nonatomic, getter=isHoldingBoundsInvalidation) _Bool holdingBoundsInvalidation; // @synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) double anchorYPosition; // @synthesize anchorYPosition=_anchorYPosition;
- (void).cxx_destruct;
- (void)reduceMotionSettingChanged:(id)arg1;
- (void)sizeCategoryDidChange:(id)arg1;
- (void)updateFrames;
- (void)displayLinkFired:(id)arg1;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg1;
- (void)updateAttributesForAnchorYChangeWithAttributes:(id)arg1;
- (void)updateContentSize;
- (void)clearParentInitialIndexesAndFinalOffsets;
- (void)setVerticalOffset:(double)arg1 forParentOfAssociatedItemDeletedAtIndex:(unsigned long long)arg2;
- (void)setInitialIndex:(unsigned long long)arg1 forParentOfAssociatedItemInsertedAtIndex:(unsigned long long)arg2;
- (void)invalidateDisplayLink;
- (void)updateAssociatedLayoutAttributesIfNecessary;
- (void)reloadData;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)prepareLayoutForRotisserieScrolling;
- (void)_dealloc;
- (void)dealloc;
- (id)init;
- (long long)effectIndexForDecorationViewAtIndex:(long long)arg1;

@end

