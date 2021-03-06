//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, UIView;
@protocol CKAcknowledgmentVotingViewAnimatorDelegate;

@interface CKAcknowledgmentVotingViewAnimator : NSObject
{
    UIView *_animationContainerView;
    id <CKAcknowledgmentVotingViewAnimatorDelegate> _delegate;
    NSArray *_sectionAnimators;
    NSArray *_animatorModelItems;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *animatorModelItems; // @synthesize animatorModelItems=_animatorModelItems;
@property(copy, nonatomic) NSArray *sectionAnimators; // @synthesize sectionAnimators=_sectionAnimators;
@property(nonatomic) __weak id <CKAcknowledgmentVotingViewAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *animationContainerView; // @synthesize animationContainerView=_animationContainerView;
- (void)startAnimationWithDelay:(double)arg1;
- (id)initWithCollectionView:(id)arg1 animatorModelItems:(id)arg2 acknowledgmentTypes:(id)arg3;

@end

