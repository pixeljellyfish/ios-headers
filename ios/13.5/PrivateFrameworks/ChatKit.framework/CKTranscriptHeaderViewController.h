//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CKConversation;

__attribute__((visibility("hidden")))
@interface CKTranscriptHeaderViewController : UIViewController
{
    _Bool _shouldInvalidateOnAddressBookChange;
    CKConversation *_conversation;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldInvalidateOnAddressBookChange; // @synthesize shouldInvalidateOnAddressBookChange=_shouldInvalidateOnAddressBookChange;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
- (id)initWithConversation:(id)arg1;

@end

