//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "REATransition.h"

@interface REAVisibilityTransition : REATransition
{
    long long _animationType;
}

@property(nonatomic) long long animationType; // @synthesize animationType=_animationType;
- (id)animationForTransitioning:(id)arg1 endValues:(id)arg2 forRoot:(id)arg3;
- (id)disappearView:(id)arg1 fromParent:(id)arg2 forRoot:(id)arg3;
- (id)appearView:(id)arg1 inParent:(id)arg2 forRoot:(id)arg3;
- (id)initWithConfig:(id)arg1;

@end

