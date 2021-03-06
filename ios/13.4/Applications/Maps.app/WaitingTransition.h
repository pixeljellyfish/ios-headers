//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol ContaineeProtocol;

__attribute__((visibility("hidden")))
@interface WaitingTransition : NSObject
{
    _Bool _animated;
    _Bool _switchContext;
    UIViewController<ContaineeProtocol> *_viewController;
    UIViewController<ContaineeProtocol> *_oldViewController;
    unsigned long long _layout;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(nonatomic) _Bool switchContext; // @synthesize switchContext=_switchContext;
@property(nonatomic) unsigned long long layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) __weak UIViewController<ContaineeProtocol> *oldViewController; // @synthesize oldViewController=_oldViewController;
@property(retain, nonatomic) UIViewController<ContaineeProtocol> *viewController; // @synthesize viewController=_viewController;

@end

