//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

__attribute__((visibility("hidden")))
@interface MediaControlsSeparatorView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    UIView *_separatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

