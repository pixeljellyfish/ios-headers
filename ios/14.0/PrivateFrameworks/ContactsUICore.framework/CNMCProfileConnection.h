/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:41 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNMCProfileConnection.h>

@protocol CNMCProfileConnection <NSObject>
@required
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2;
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2;
-(id)observableForManagedConfigChanged;

@end


@class NSString;

@interface CNMCProfileConnection : NSObject <CNMCProfileConnection>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 ;
-(BOOL)communicationServiceRulesExistForBundleID:(id)arg1 forCommunicationServiceType:(id)arg2 ;
-(id)observableForManagedConfigChanged;
@end

