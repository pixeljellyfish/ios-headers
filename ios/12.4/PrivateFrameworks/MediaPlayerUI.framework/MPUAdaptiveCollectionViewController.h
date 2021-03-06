//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUDataSourceViewController.h>

@class NSMutableDictionary;

@interface MPUAdaptiveCollectionViewController : MPUDataSourceViewController
{
    struct UIEdgeInsets _contentInsetAdditions;
    struct UIEdgeInsets _scrollIndicatorInsetsAdditions;
    NSMutableDictionary *_sizeClassToClassMap;
}

@property(retain, nonatomic) NSMutableDictionary *sizeClassToClassMap; // @synthesize sizeClassToClassMap=_sizeClassToClassMap;
- (void).cxx_destruct;
- (void)_updateViewControllerIfNecessary;
- (void)_restoreTopVisibleIndexPath:(id)arg1;
- (id)_indexPathOfTopVisibleItem;
- (id)_childDataSourceViewController;
- (void)_applyNewScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg1 withExistingScrollIndicatorInsetsAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)_applyNewContentInsetAdditions:(struct UIEdgeInsets)arg1 withExistingContentInsetAdditions:(struct UIEdgeInsets)arg2 toScrollView:(id)arg3;
- (void)dataSourceDidInvalidate;
- (void)reloadData;
- (void)setViewControllerClass:(Class)arg1 forHorizontalSizeClass:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void)viewDidLayoutSubviews;

@end

