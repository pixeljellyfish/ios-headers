//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RTCVideoFrameBuffer-Protocol.h"

@protocol RTCYUVPlanarBuffer <RTCVideoFrameBuffer>
@property(readonly, nonatomic) int strideV;
@property(readonly, nonatomic) int strideU;
@property(readonly, nonatomic) int strideY;
@property(readonly, nonatomic) const char *dataV;
@property(readonly, nonatomic) const char *dataU;
@property(readonly, nonatomic) const char *dataY;
@property(readonly, nonatomic) int chromaHeight;
@property(readonly, nonatomic) int chromaWidth;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char *)arg3 dataU:(const char *)arg4 dataV:(const char *)arg5;
@end

