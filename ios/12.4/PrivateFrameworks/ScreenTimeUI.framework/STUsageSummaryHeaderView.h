//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STTableViewHeaderFooterView.h>

#import <ScreenTimeUI/PSHeaderFooterView-Protocol.h>

@class PSSpecifier, STSingleLineDetailTextHeaderView, UILabel, UISegmentedControl;

@interface STUsageSummaryHeaderView : STTableViewHeaderFooterView <PSHeaderFooterView>
{
    UISegmentedControl *_segmentedControl;
    PSSpecifier *_specifier;
    UILabel *_deviceNameLabel;
    STSingleLineDetailTextHeaderView *_singleLineHeaderView;
}

@property(readonly, nonatomic) STSingleLineDetailTextHeaderView *singleLineHeaderView; // @synthesize singleLineHeaderView=_singleLineHeaderView;
@property(readonly, nonatomic) UILabel *deviceNameLabel; // @synthesize deviceNameLabel=_deviceNameLabel;
@property(nonatomic) __weak PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)stopAnimatingSpinner;
- (void)startAnimatingSpinner;
- (void)selectedSegmentIndexChanged:(id)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (id)initWithSpecifier:(id)arg1;

@end

