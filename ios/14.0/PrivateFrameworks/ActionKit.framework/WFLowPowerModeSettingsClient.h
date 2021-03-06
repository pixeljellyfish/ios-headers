/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/WFSettingsClient.h>
#import <libobjc.A.dylib/WFBooleanStateSetting.h>

@class _CDBatterySaver, NSString;

@interface WFLowPowerModeSettingsClient : WFSettingsClient <WFBooleanStateSetting> {

	_CDBatterySaver* _batterySaver;

}

@property (nonatomic,readonly) _CDBatterySaver * batterySaver;              //@synthesize batterySaver=_batterySaver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)createClientWithCompletionHandler:(/*^block*/id)arg1 ;
-(_CDBatterySaver *)batterySaver;
-(void)getStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setState:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithBatterySaver:(id)arg1 ;
@end

