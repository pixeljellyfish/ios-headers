//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GNSBroadcasterDetectionSession : NSObject
{
    double _timeout;
    CDUnknownBlockType _noActiveBroadcasterBlock;
    CDUnknownBlockType _activeBroadcasterBlock;
}

@property(copy, nonatomic) CDUnknownBlockType activeBroadcasterBlock; // @synthesize activeBroadcasterBlock=_activeBroadcasterBlock;
@property(copy, nonatomic) CDUnknownBlockType noActiveBroadcasterBlock; // @synthesize noActiveBroadcasterBlock=_noActiveBroadcasterBlock;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void).cxx_destruct;

@end

