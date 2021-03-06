/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:49 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CSSiriLauncher : NSObject
+(id)sharedLauncher;
-(void)notifyBuiltInVoiceTrigger:(id)arg1 myriadPHash:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyCarPlayVoiceTrigger:(id)arg1 deviceId:(id)arg2 myriadPHash:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)notifyBluetoothDeviceVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)notifyRemoraVoiceTrigger:(id)arg1 deviceId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deactivateSiriActivationConnectionWithReason:(long long)arg1 withOptions:(unsigned long long)arg2 ;
@end

