//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CNChangeHistoryEventVisitor-Protocol.h>

@class NSString;

@interface IMContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>
{
}

- (void)postNotificationForCNContact:(id)arg1 eventType:(unsigned long long)arg2 handleIDsToProcess:(id)arg3;
- (void)processChangeEventForContact:(id)arg1 contactFromCache:(id)arg2 eventType:(unsigned long long)arg3 handleID:(id)arg4;
- (void)processContactChangeEventForContact:(id)arg1 ofEventType:(unsigned long long)arg2;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

