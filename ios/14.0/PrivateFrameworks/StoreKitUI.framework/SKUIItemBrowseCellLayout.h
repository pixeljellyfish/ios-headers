/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIItemCellLayout.h>

@class _SKUIItemBrowseCellContentView, UIColor, NSString;

@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout {

	_SKUIItemBrowseCellContentView* _cellContentView;
	CGSize _imageBoundingSize;
	BOOL _largeSpacing;
	long long _numberOfUserRatings;
	UIColor* _primaryTextColor;
	UIColor* _secondaryTextColor;
	double _userRating;

}

@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * indexNumberString; 
@property (assign,nonatomic) long long numberOfUserRatings;                        //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (assign,nonatomic) double userRating;                                    //@synthesize userRating=_userRating - In the implementation block
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isLargeSpacing,nonatomic) BOOL largeSpacing;              //@synthesize largeSpacing=_largeSpacing - In the implementation block
@property (assign,nonatomic) CGSize imageBoundingSize;                             //@synthesize imageBoundingSize=_imageBoundingSize - In the implementation block
-(NSString *)subtitle;
-(void)setUserRating:(double)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
-(double)userRating;
-(void)layoutSubviews;
-(long long)numberOfUserRatings;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(id)initWithTableViewCell:(id)arg1 ;
-(id)initWithParentView:(id)arg1 ;
-(void)setIconImage:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setNumberOfUserRatings:(long long)arg1 ;
-(void)setColoringWithColorScheme:(id)arg1 ;
-(void)_reloadUserRatingViews;
-(id)_decimalNumberFormatter;
-(void)setImageBoundingSize:(CGSize)arg1 ;
-(id)initWithCollectionViewCell:(id)arg1 ;
-(void)layoutForItemOfferChange;
-(CGSize)imageBoundingSize;
-(void)_initSKUIItemBrowseCellLayout;
-(NSString *)indexNumberString;
-(void)setIndexNumberString:(NSString *)arg1 ;
-(void)setLargeSpacing:(BOOL)arg1 ;
-(BOOL)isLargeSpacing;
@end

