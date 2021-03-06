//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIDragInteraction.h>

@class NSString, UIGestureRecognizer;
@protocol SBAppPlatterDragSourceViewProviding;

@interface SBWindowDragInteraction : UIDragInteraction
{
    UIGestureRecognizer *_gestureRecognizer;
    id <SBAppPlatterDragSourceViewProviding> _sourceViewProvider;
    NSString *_sceneIdentifier;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(nonatomic) __weak id <SBAppPlatterDragSourceViewProviding> sourceViewProvider; // @synthesize sourceViewProvider=_sourceViewProvider;
@property(readonly, nonatomic) __weak UIGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
- (struct CGPoint)_locationInView:(id)arg1;
- (id)initWithDelegate:(id)arg1 gestureRecognizer:(id)arg2;

@end

