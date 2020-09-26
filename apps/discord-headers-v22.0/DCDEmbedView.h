//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DCDSpoilerOverlay, UITapGestureRecognizer;

@interface DCDEmbedView : UIView
{
    DCDSpoilerOverlay *_spoilerOverlay;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) DCDSpoilerOverlay *spoilerOverlay; // @synthesize spoilerOverlay=_spoilerOverlay;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1;
- (_Bool)isInlineEmbed:(id)arg1;
- (id)textViewWithEmbed:(id)arg1 text:(id)arg2 attributes:(id)arg3;
- (id)footerViewWithEmbed:(id)arg1;
- (id)videoViewWithEmbed:(id)arg1 context:(id)arg2;
- (id)imageViewWithEmbed:(id)arg1 image:(id)arg2 context:(id)arg3;
- (id)mediaViewWithEmbed:(id)arg1 context:(id)arg2;
- (id)thumbnailViewWithEmbed:(id)arg1 context:(id)arg2;
- (id)fieldsViewWithEmbed:(id)arg1;
- (id)descriptionViewWithEmbed:(id)arg1;
- (id)titleViewWithEmbed:(id)arg1;
- (id)authorViewWithEmbed:(id)arg1;
- (id)providerViewWithEmbed:(id)arg1;
- (id)activityFeedCardWithEmbed:(id)arg1;
- (_Bool)isActivityFeedType:(id)arg1;
- (void)configureSpoilerOverlay:(id)arg1 toView:(id)arg2;
- (void)configure:(id)arg1 context:(id)arg2;
- (id)initWithEmbed:(id)arg1 context:(id)arg2;

@end

