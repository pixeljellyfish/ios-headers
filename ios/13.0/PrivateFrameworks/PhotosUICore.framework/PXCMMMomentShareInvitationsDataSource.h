//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMInvitationsDataSource.h>

@class PXCMMMomentShareInvitationsDataSourceState;

@interface PXCMMMomentShareInvitationsDataSource : PXCMMInvitationsDataSource
{
    PXCMMMomentShareInvitationsDataSourceState *_state;
}

+ (id)new;
@property(readonly, nonatomic) PXCMMMomentShareInvitationsDataSourceState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)invitationForObjectID:(id)arg1;
- (id)objectIDAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)invitationAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)init;
- (id)initWithState:(id)arg1;

@end

