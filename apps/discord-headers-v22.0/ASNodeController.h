//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASInterfaceStateDelegate-Protocol.h"
#import "ASLocking-Protocol.h"

@class ASDisplayNode, NSString;

@interface ASNodeController : NSObject <ASInterfaceStateDelegate, ASLocking>
{
    ASDisplayNode *_strongNode;
    ASDisplayNode *_weakNode;
    // Error parsing type: {Mutex="_type"i""(?="_unfair"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_runfair"{?="_lock"{os_unfair_lock_s="_os_unfair_lock_opaque"I}"_thread"A^{_opaque_pthread_t}"_count"i}"_plain"{mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}}"_recursive"{recursive_mutex="__m_"{_opaque_pthread_mutex_t="__sig"q"__opaque"[56c]}})}, name: _nodeLock
    _Bool _shouldInvertStrongReference;
}

@property(nonatomic) _Bool shouldInvertStrongReference; // @synthesize shouldInvertStrongReference=_shouldInvertStrongReference;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)tryLock;
- (void)unlock;
- (void)lock;
- (void)hierarchyDisplayDidFinish;
- (void)interfaceStateDidChange:(unsigned long long)arg1 fromState:(unsigned long long)arg2;
- (void)didExitPreloadState;
- (void)didEnterPreloadState;
- (void)didExitDisplayState;
- (void)didEnterDisplayState;
- (void)didExitVisibleState;
- (void)didEnterVisibleState;
- (void)nodeWillCalculateLayout:(CDStruct_42a63532)arg1;
- (void)nodeDidLayout;
- (void)nodeDidLoad;
- (void)setupReferencesWithNode:(id)arg1;
@property(readonly) ASDisplayNode *node;
- (id)createNode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

