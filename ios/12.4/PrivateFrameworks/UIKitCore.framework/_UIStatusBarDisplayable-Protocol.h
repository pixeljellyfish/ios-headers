//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIAccessibilityHUDItem, _UIStatusBarStyleAttributes;

@protocol _UIStatusBarDisplayable <NSObject>

@optional
@property(readonly, nonatomic) UIAccessibilityHUDItem *accessibilityHUDRepresentation;
@property(readonly, nonatomic) long long overriddenVerticalAlignment;
@property(readonly, nonatomic) _Bool wantsCrossfade;
- (void)applyStyleAttributes:(_UIStatusBarStyleAttributes *)arg1;
@end

