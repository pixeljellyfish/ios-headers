//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetProvider.h>

#import <PhotosUICore/PXNavigationListDataSectionManagerObserver-Protocol.h>

@class NSString, PXExtendedTraitCollection, PXNavigationListDataSectionManager;

@interface PXNavigationListGadgetProvider : PXGadgetProvider <PXNavigationListDataSectionManagerObserver>
{
    _Bool _shouldShowNavigationListOnIpad;
    _Bool _isPresentedInPicker;
    unsigned long long _type;
    PXExtendedTraitCollection *_traitCollection;
    PXNavigationListDataSectionManager *_dataSourceManager;
}

@property(readonly, nonatomic) _Bool isPresentedInPicker; // @synthesize isPresentedInPicker=_isPresentedInPicker;
@property(retain, nonatomic) PXNavigationListDataSectionManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) _Bool shouldShowNavigationListOnIpad; // @synthesize shouldShowNavigationListOnIpad=_shouldShowNavigationListOnIpad;
- (void).cxx_destruct;
- (void)_initializeDataSourceManagerIfNeeded;
@property(readonly, nonatomic) _Bool shouldShowNavigationListForDeviceAndLayoutClass;
- (void)_updateGadgets;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)startLoadingRemainingData;
- (void)generateGadgets;
- (void)loadDataForGadgets;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 extendedTraitCollection:(id)arg2 isPresentedInPicker:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

