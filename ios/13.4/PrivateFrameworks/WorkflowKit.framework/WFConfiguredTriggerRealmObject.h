//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/RLMObject.h>

#import <WorkflowKit/WFRecordStorage-Protocol.h>

@class NSData, NSString;

@interface WFConfiguredTriggerRealmObject : RLMObject <WFRecordStorage>
{
    _Bool _shouldPrompt;
    _Bool _enabled;
    NSString *_triggerID;
    NSString *_workflowID;
    NSData *_triggerData;
}

+ (id)defaultPropertyValues;
+ (id)requiredProperties;
+ (id)primaryKey;
- (void).cxx_destruct;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool shouldPrompt; // @synthesize shouldPrompt=_shouldPrompt;
@property(copy, nonatomic) NSData *triggerData; // @synthesize triggerData=_triggerData;
@property(copy, nonatomic) NSString *workflowID; // @synthesize workflowID=_workflowID;
@property(copy, nonatomic) NSString *triggerID; // @synthesize triggerID=_triggerID;
- (id)trigger;
- (void)coordinatePropertyUpdatesForRecord:(id)arg1 duringBlock:(CDUnknownBlockType)arg2;
- (id)descriptor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

