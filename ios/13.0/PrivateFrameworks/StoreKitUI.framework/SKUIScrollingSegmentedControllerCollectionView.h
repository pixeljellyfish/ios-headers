//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewControllerContainerCollectionView.h>

@protocol SKUIScrollingSegmentedControllerCollectionViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIScrollingSegmentedControllerCollectionView : SKUIViewControllerContainerCollectionView
{
    _Bool _performingLayout;
}

@property(readonly, nonatomic, getter=isPerformingLayout) _Bool performingLayout; // @synthesize performingLayout=_performingLayout;
- (void)layoutSubviews;

// Remaining properties
@property(nonatomic) id <SKUIScrollingSegmentedControllerCollectionViewDelegate> delegate; // @dynamic delegate;

@end

