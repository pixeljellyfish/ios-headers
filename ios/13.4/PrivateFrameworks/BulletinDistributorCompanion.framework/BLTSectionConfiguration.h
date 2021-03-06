//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinDistributorCompanion/BLTSectionConfigurationInternal.h>

#import <BulletinDistributorCompanion/BLTWatchKitAppListDelegate-Protocol.h>

@class BLTWatchKitAppList, NSCondition, NSString;
@protocol BLTSectionConfigurationDelegate;

@interface BLTSectionConfiguration : BLTSectionConfigurationInternal <BLTWatchKitAppListDelegate>
{
    BLTWatchKitAppList *_watchKitAppList;
    NSCondition *_watchKitAppListLoadedCondition;
    _Bool _watchKitAppListLoaded;
    id <BLTSectionConfigurationDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <BLTSectionConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)override:(id)arg1 appliesToConfigurationForSectionID:(id)arg2;
- (_Bool)shouldSectionIDSettingsAlwaysSync:(id)arg1;
- (void)watchKitAppList:(id)arg1 added:(id)arg2 removed:(id)arg3;
- (void)_waitForWatchKitAppListLoaded;
- (id)initWithWatchKitAppList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

