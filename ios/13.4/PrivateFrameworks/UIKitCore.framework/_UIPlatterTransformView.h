//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView;

__attribute__((visibility("hidden")))
@interface _UIPlatterTransformView : UIView
{
    _Bool _hidesSourceView;
    _Bool _forwardsHitTestingToSourceView;
    _Bool _matchesAlpha;
    _Bool _appliesMinificationFilter;
    _Bool _allowsUserInteraction;
    _Bool _shouldTakeOwnershipOfSourceView;
    UIView *_sourceView;
    UITargetedPreview *_sourcePreview;
    _UIPortalView *_portalView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldTakeOwnershipOfSourceView; // @synthesize shouldTakeOwnershipOfSourceView=_shouldTakeOwnershipOfSourceView;
@property(retain, nonatomic) _UIPortalView *portalView; // @synthesize portalView=_portalView;
@property(retain, nonatomic) UITargetedPreview *sourcePreview; // @synthesize sourcePreview=_sourcePreview;
@property(nonatomic) _Bool allowsUserInteraction; // @synthesize allowsUserInteraction=_allowsUserInteraction;
@property(nonatomic) _Bool appliesMinificationFilter; // @synthesize appliesMinificationFilter=_appliesMinificationFilter;
@property(nonatomic) _Bool matchesAlpha; // @synthesize matchesAlpha=_matchesAlpha;
@property(nonatomic) _Bool forwardsHitTestingToSourceView; // @synthesize forwardsHitTestingToSourceView=_forwardsHitTestingToSourceView;
@property(nonatomic) _Bool hidesSourceView; // @synthesize hidesSourceView=_hidesSourceView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateMinificationFilter;
- (void)didMoveToWindow;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

