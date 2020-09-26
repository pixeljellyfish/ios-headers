//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASDisplayNode.h"

#import "ASRangeControllerUpdateRangeProtocol-Protocol.h"
#import "ASRangeManagingNode-Protocol.h"

@class ASCollectionView, ASRangeController, NSArray, NSString, UICollectionViewLayout, _ASCollectionPendingState;
@protocol ASBatchFetchingDelegate, ASCollectionDataSource, ASCollectionDelegate, ASCollectionViewLayoutInspecting;

@interface ASCollectionNode : ASDisplayNode <ASRangeControllerUpdateRangeProtocol, ASRangeManagingNode>
{
    // Error parsing type: {RecursiveMutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _environmentStateLock
    Class _collectionViewClass;
    id <ASBatchFetchingDelegate> _batchFetchingDelegate;
    _ASCollectionPendingState *_pendingState;
    ASRangeController *_rangeController;
}

@property(nonatomic) __weak ASRangeController *rangeController; // @synthesize rangeController=_rangeController;
@property(retain, nonatomic) _ASCollectionPendingState *pendingState; // @synthesize pendingState=_pendingState;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureCollectionViewLayout:(id)arg1;
- (id)propertiesForDebugDescription;
- (void)setPrimitiveTraitCollection:(CDStruct_104667ad)arg1;
- (void)updateCurrentRangeWithMode:(long long)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)invalidateFlowLayoutDelegateMetrics;
- (void)endUpdatesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)endUpdatesAnimated:(_Bool)arg1;
- (void)beginUpdates;
- (void)relayoutItems;
- (void)reloadData;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)waitUntilAllUpdatesAreCommitted;
- (void)waitUntilAllUpdatesAreProcessed;
- (void)onDidFinishSynchronizing:(CDUnknownBlockType)arg1;
- (_Bool)isSynchronized;
- (void)onDidFinishProcessingUpdates:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isProcessingUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerSupplementaryNodeOfKind:(id)arg1;
- (id)contextForSection:(long long)arg1;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) NSArray *indexPathsForVisibleItems;
- (id)indexPathForNode:(id)arg1;
- (id)nodeModelForItemAtIndexPath:(id)arg1;
- (id)nodeForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSArray *visibleNodes;
@property(readonly, nonatomic) long long numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)reloadDataInitiallyIfNeeded;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
@property(readonly, copy, nonatomic) NSArray *indexPathsForSelectedItems;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeMode:(long long)arg2 rangeType:(long long)arg3;
- (CDStruct_c3b9c2ee)tuningParametersForRangeMode:(long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_c3b9c2ee)arg1 forRangeType:(long long)arg2;
- (CDStruct_c3b9c2ee)tuningParametersForRangeType:(long long)arg1;
- (void)setCellLayoutMode:(unsigned long long)arg1;
- (unsigned long long)cellLayoutMode;
- (id)batchFetchingDelegate;
- (void)setBatchFetchingDelegate:(id)arg1;
- (id)layoutDelegate;
- (id)visibleElements;
@property(readonly, nonatomic) long long scrollableDirections;
@property(readonly, nonatomic) long long scrollDirection;
@property(nonatomic) struct CGPoint contentOffset;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct UIEdgeInsets contentInset;
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout;
@property(nonatomic) _Bool showsHorizontalScrollIndicator;
@property(nonatomic) _Bool showsVerticalScrollIndicator;
@property(nonatomic) _Bool alwaysBounceHorizontal;
@property(nonatomic) _Bool alwaysBounceVertical;
@property(nonatomic) _Bool allowsMultipleSelection;
@property(nonatomic) _Bool allowsSelection;
@property __weak id <ASCollectionDataSource> dataSource;
@property __weak id <ASCollectionDelegate> delegate;
@property(nonatomic) double leadingScreensForBatching;
@property(nonatomic) __weak id <ASCollectionViewLayoutInspecting> layoutInspector;
@property(nonatomic) _Bool inverted;
- (id)dataController;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)interfaceStateDidChange:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)clearContents;
@property(readonly) ASCollectionView *view;
- (void)didLoad;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 layoutFacilitator:(id)arg3;
- (id)initWithLayoutDelegate:(id)arg1 layoutFacilitator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;
- (void)setCollectionViewClass:(Class)arg1;
- (Class)collectionViewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

