//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell
{
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end

