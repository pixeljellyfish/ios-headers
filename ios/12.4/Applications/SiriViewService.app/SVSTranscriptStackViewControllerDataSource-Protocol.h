//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AFConversation, NSSet, SVSTranscriptStackViewController;
@protocol AFUIDomainObjectStore;

@protocol SVSTranscriptStackViewControllerDataSource <NSObject>
- (CDStruct_a82615c4)keyboardInfoForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (NSSet *)siriEnabledAppListForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (id <AFUIDomainObjectStore>)domainObjectStoreForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (AFConversation *)conversationForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
- (long long)siriStateForTranscriptStackViewController:(SVSTranscriptStackViewController *)arg1;
@end

