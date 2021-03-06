//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BOXContentClient;
@protocol BOXSharedLinkStorageProtocol;

@interface BOXSharedLinkHeadersHelper : NSObject
{
    id <BOXSharedLinkStorageProtocol> _delegate;
    BOXContentClient *_client;
}

@property(retain, nonatomic) BOXContentClient *client; // @synthesize client=_client;
@property(retain, nonatomic) id <BOXSharedLinkStorageProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)passwordForItemForItemWithID:(id)arg1 itemType:(id)arg2;
- (id)sharedLinkForItemID:(id)arg1 itemType:(id)arg2;
- (void)removeStoredInformationForUserWithID:(id)arg1;
- (void)removeStoredInformationForItemWithID:(id)arg1 itemType:(id)arg2;
- (void)storeHeadersFromAncestorsIfNecessaryForItemWithID:(id)arg1 itemType:(id)arg2 ancestors:(id)arg3;
- (void)storeHeadersForItemWithID:(id)arg1 itemType:(id)arg2 sharedLink:(id)arg3 password:(id)arg4;
- (id)userID;
- (id)init;
- (id)initWithClient:(id)arg1;

@end

