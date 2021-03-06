/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKTableViewCell.h>

@class UILabel, PKTransactionMapView, UIImageView, PKPaymentTransaction;

@interface PKPaymentTransactionLocationTableViewCell : PKTableViewCell {

	UILabel* _titleLabel;
	PKTransactionMapView* _mapView;
	UIImageView* _disclosureView;
	PKPaymentTransaction* _transaction;

}

@property (nonatomic,retain) PKPaymentTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
@property (assign,nonatomic) BOOL usesDarkMapAppearance; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)_shouldShowDisclosureIndicator;
-(BOOL)usesDarkMapAppearance;
-(void)setUsesDarkMapAppearance:(BOOL)arg1 ;
-(id)_disclosureView;
-(PKPaymentTransaction *)transaction;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTitleLabelColor:(id)arg1 ;
-(void)setTransaction:(PKPaymentTransaction *)arg1 ;
@end

