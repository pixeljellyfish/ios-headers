//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;
    struct CLConnectionClient *fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary *fAlarms;
    NSObject<OS_dispatch_queue> *fReplyQueue;
    _Bool fAlarmAvailable;
}

+ (id)sharedInstance;
- (void)stopListeningForActivityAlarm:(id)arg1;
- (void)listenForActivityAlarm:(id)arg1;
- (_Bool)activityAlarmAvailable;
- (void)dealloc;
- (id)init;

@end

