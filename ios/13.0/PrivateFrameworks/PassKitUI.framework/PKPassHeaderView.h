//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPass, PKPassFaceViewRendererState, PKPassView, PKPeerPaymentAccount, PKRemoteDataAccessor, PKTransitBalanceModel, UIColor, UIImageView, UILabel;
@protocol PKPassHeaderViewDelegate, PKPassLibraryDataProvider;

@interface PKPassHeaderView : UIView
{
    PKRemoteDataAccessor *_remoteDataAccessor;
    UIView *_passMaskView;
    UIImageView *_maskShadow;
    UILabel *_title;
    UILabel *_subtitle;
    double passImageHeight;
    _Bool _small;
    _Bool _showModificationDate;
    _Bool _expiredPass;
    PKPass *_pass;
    PKPassView *_passView;
    PKTransitBalanceModel *_transitBalanceModel;
    PKPeerPaymentAccount *_peerPaymentAccount;
    PKPassFaceViewRendererState *_rendererState;
    unsigned long long _suppressedContent;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
    id <PKPassHeaderViewDelegate> _delegate;
    id <PKPassLibraryDataProvider> _passLibraryOverride;
}

@property(retain, nonatomic) id <PKPassLibraryDataProvider> passLibraryOverride; // @synthesize passLibraryOverride=_passLibraryOverride;
@property(nonatomic) __weak id <PKPassHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(nonatomic) _Bool expiredPass; // @synthesize expiredPass=_expiredPass;
@property(nonatomic) _Bool showModificationDate; // @synthesize showModificationDate=_showModificationDate;
@property(nonatomic) unsigned long long suppressedContent; // @synthesize suppressedContent=_suppressedContent;
@property(retain, nonatomic) PKPassFaceViewRendererState *rendererState; // @synthesize rendererState=_rendererState;
@property(retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount; // @synthesize peerPaymentAccount=_peerPaymentAccount;
@property(retain, nonatomic) PKTransitBalanceModel *transitBalanceModel; // @synthesize transitBalanceModel=_transitBalanceModel;
@property(nonatomic, getter=isSmall) _Bool small; // @synthesize small=_small;
@property(readonly, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (id)_secondaryTextColor;
- (id)_primaryTextColor;
- (void)_passLibraryDidChange:(id)arg1;
- (void)updateModifiedDate;
- (struct CGSize)passViewSizeForHeight:(double)arg1;
- (void)_resetFonts;
- (void)_updateTextContent;
- (void)_updateContent;
- (CDStruct_bc00259c)passSizeInfoForHeight:(double)arg1;
- (void)updateShadow:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithPass:(id)arg1 rendererState:(id)arg2;
- (id)initWithPass:(id)arg1;

@end

