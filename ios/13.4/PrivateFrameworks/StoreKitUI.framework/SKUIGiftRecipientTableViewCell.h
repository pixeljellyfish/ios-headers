//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <StoreKitUI/CNContactPickerDelegate-Protocol.h>
#import <StoreKitUI/MFComposeRecipientViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIGiftContactSearchDelegate-Protocol.h>

@class CNContactPickerViewController, CNContactStore, MFComposeRecipientView, NSArray, NSAttributedString, NSString, SKUIGiftContactSearchController, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface SKUIGiftRecipientTableViewCell : UITableViewCell <CNContactPickerDelegate, MFComposeRecipientViewDelegate, SKUIGiftContactSearchDelegate>
{
    CNContactStore *_contactStore;
    CNContactPickerViewController *_contactPickerController;
    UILabel *_placeholderLabel;
    MFComposeRecipientView *_recipientView;
    SKUIGiftContactSearchController *_searchController;
    UIView *_topBorderView;
    _Bool _didLayoutSubviews;
    _Bool _leftToRight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool leftToRight; // @synthesize leftToRight=_leftToRight;
@property(nonatomic) _Bool didLayoutSubviews; // @synthesize didLayoutSubviews=_didLayoutSubviews;
- (void)_sendDismissContactPicker;
- (void)_sendDidUpdateSearchController;
- (void)_sendDidChangeRecipients;
- (void)_resetSearchController;
- (id)_contactStore;
- (void)searchControllerDidFinishSearch:(id)arg1;
- (void)searchController:(id)arg1 didSelectRecipient:(id)arg2;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) NSArray *recipientAddresses;
@property(copy, nonatomic) NSString *label;
@property(copy, nonatomic) NSAttributedString *attributedPlaceholder;
- (void)presentSearchResultsPopover:(id)arg1 animated:(_Bool)arg2;
- (void)presentPeoplePickerPopover:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

