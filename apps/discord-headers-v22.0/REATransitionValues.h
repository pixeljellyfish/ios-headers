//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

@interface REATransitionValues : NSObject
{
    UIView *_view;
    UIView *_parent;
    UIView *_reactParent;
    struct CGPoint _center;
    struct CGPoint _centerRelativeToRoot;
    struct CGPoint _centerInReactParent;
    struct CGRect _bounds;
}

@property(nonatomic) struct CGPoint centerInReactParent; // @synthesize centerInReactParent=_centerInReactParent;
@property(retain, nonatomic) UIView *reactParent; // @synthesize reactParent=_reactParent;
@property(retain, nonatomic) UIView *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) struct CGPoint centerRelativeToRoot; // @synthesize centerRelativeToRoot=_centerRelativeToRoot;
@property(nonatomic) struct CGRect bounds; // @synthesize bounds=_bounds;
@property(nonatomic) struct CGPoint center; // @synthesize center=_center;
- (void).cxx_destruct;
- (id)initWithView:(id)arg1 forRoot:(id)arg2;

@end

