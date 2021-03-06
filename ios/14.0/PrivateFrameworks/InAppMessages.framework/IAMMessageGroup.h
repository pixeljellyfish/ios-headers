/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IAMMessageGroupInternalDelegate;
@class NSString, IAMMessageCoordinator;

@interface IAMMessageGroup : NSObject {

	NSString* _groupIdentifier;
	IAMMessageCoordinator* _messageCoordinator;
	id<IAMMessageGroupInternalDelegate> _internalDelegate;

}

@property (assign,nonatomic,__weak) IAMMessageCoordinator * messageCoordinator;                        //@synthesize messageCoordinator=_messageCoordinator - In the implementation block
@property (assign,nonatomic,__weak) id<IAMMessageGroupInternalDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                                             //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
-(NSString *)groupIdentifier;
-(BOOL)shouldPerformModalMessagePresentation;
-(void)setMessageCoordinator:(IAMMessageCoordinator *)arg1 ;
-(void)reportModalMessageWithIdentifier:(id)arg1 actionWasPerformedWithIdentifier:(id)arg2 ;
-(void)reportContextPropertiesDidChange:(id)arg1 ;
-(IAMMessageCoordinator *)messageCoordinator;
-(void)reportModalMessagePresentationFailedWithIdentifier:(id)arg1 ;
-(void)reportModalMessageWasPresentedWithIdentifier:(id)arg1 ;
-(void)reportModalMessageWasDismissedWithIdentifier:(id)arg1 ;
-(id)contextPropertyWithName:(id)arg1 ;
-(void)performModalMessagePresentation:(id)arg1 fromViewController:(id)arg2 ;
-(id)initWithGroupIdentifier:(id)arg1 ;
-(void)receiveEvent:(id)arg1 ;
-(void)setInternalDelegate:(id<IAMMessageGroupInternalDelegate>)arg1 ;
-(void)viewControllerForModalMessagePresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id<IAMMessageGroupInternalDelegate>)internalDelegate;
@end

