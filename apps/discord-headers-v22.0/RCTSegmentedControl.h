//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@class NSArray;

@interface RCTSegmentedControl : UISegmentedControl
{
    NSArray *_values;
    long long _selectedIndex;
    CDUnknownBlockType _onChange;
}

@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(copy, nonatomic) NSArray *values; // @synthesize values=_values;
- (void).cxx_destruct;
- (void)didChange;
- (void)setTintColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

