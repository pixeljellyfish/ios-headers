//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMapTable, NSMutableArray, NSMutableDictionary, NSSet, RCTUIManager, REAModule, REAUpdateContext;

@interface REANodesManager : NSObject
{
    NSMutableDictionary *_nodes;
    NSMapTable *_eventMapping;
    NSMutableArray *_eventQueue;
    CADisplayLink *_displayLink;
    REAUpdateContext *_updateContext;
    _Bool _wantRunUpdates;
    _Bool _processingDirectEvent;
    NSMutableArray *_onAnimationCallbacks;
    NSMutableArray *_operationsInBatch;
    RCTUIManager *_uiManager;
    REAModule *_reanimatedModule;
    double _currentAnimationTimestamp;
    NSSet *_uiProps;
    NSSet *_nativeProps;
}

@property(retain, nonatomic) NSSet *nativeProps; // @synthesize nativeProps=_nativeProps;
@property(retain, nonatomic) NSSet *uiProps; // @synthesize uiProps=_uiProps;
@property(readonly, nonatomic) double currentAnimationTimestamp; // @synthesize currentAnimationTimestamp=_currentAnimationTimestamp;
@property(nonatomic) __weak REAModule *reanimatedModule; // @synthesize reanimatedModule=_reanimatedModule;
@property(nonatomic) __weak RCTUIManager *uiManager; // @synthesize uiManager=_uiManager;
- (void).cxx_destruct;
- (void)configureProps:(id)arg1 uiProps:(id)arg2;
- (void)dispatchEvent:(id)arg1;
- (_Bool)isDirectEvent:(id)arg1;
- (void)processDirectEvent:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)detachEvent:(id)arg1 eventName:(id)arg2 eventNodeID:(id)arg3;
- (void)attachEvent:(id)arg1 eventName:(id)arg2 eventNodeID:(id)arg3;
- (void)disconnectNodeFromView:(id)arg1 viewTag:(id)arg2;
- (void)connectNodeToView:(id)arg1 viewTag:(id)arg2 viewName:(id)arg3;
- (void)disconnectNodes:(id)arg1 childID:(id)arg2;
- (void)connectNodes:(id)arg1 childID:(id)arg2;
- (void)dropNode:(id)arg1;
- (void)createNode:(id)arg1 config:(id)arg2;
- (void)getValue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enqueueUpdateViewOnNativeThread:(id)arg1 viewName:(id)arg2 nativeProps:(id)arg3;
- (void)performOperations;
- (void)onAnimationFrame:(id)arg1;
- (void)stopUpdatingOnAnimationFrame;
- (void)startUpdatingOnAnimationFrame;
- (void)postRunUpdatesAfterAnimation;
- (void)postOnAnimation:(CDUnknownBlockType)arg1;
- (id)findNodeByID:(id)arg1;
- (void)operationsBatchDidComplete;
- (void)invalidate;
- (id)initWithModule:(id)arg1 uiManager:(id)arg2;

@end

