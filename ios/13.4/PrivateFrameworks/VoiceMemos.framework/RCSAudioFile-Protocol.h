//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class AVAudioFormat, NSDictionary, NSURL;

@protocol RCSAudioFile <NSObject>
@property(readonly, nonatomic) NSDictionary *settings;
@property(readonly, nonatomic) AVAudioFormat *processingFormat;
@property(readonly, nonatomic) AVAudioFormat *fileFormat;
@property(readonly, nonatomic) NSURL *url;
@end

