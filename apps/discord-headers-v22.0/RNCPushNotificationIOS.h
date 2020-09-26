//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTEventEmitter.h"

@class NSMutableDictionary;

@interface RNCPushNotificationIOS : RCTEventEmitter
{
    NSMutableDictionary *_remoteNotificationCallbacks;
}

+ (const struct RCTMethodInfo *)__rct_export__43714;
+ (const struct RCTMethodInfo *)__rct_export__42913;
+ (const struct RCTMethodInfo *)__rct_export__42112;
+ (const struct RCTMethodInfo *)__rct_export__41111;
+ (const struct RCTMethodInfo *)__rct_export__39310;
+ (const struct RCTMethodInfo *)__rct_export__3719;
+ (const struct RCTMethodInfo *)__rct_export__3668;
+ (const struct RCTMethodInfo *)__rct_export__3617;
+ (const struct RCTMethodInfo *)__rct_export__3566;
+ (const struct RCTMethodInfo *)__rct_export__3335;
+ (const struct RCTMethodInfo *)__rct_export__3284;
+ (const struct RCTMethodInfo *)__rct_export__2863;
+ (const struct RCTMethodInfo *)__rct_export__2792;
+ (const struct RCTMethodInfo *)__rct_export__2711;
+ (const struct RCTMethodInfo *)__rct_export__2580;
+ (void)didReceiveLocalNotification:(id)arg1;
+ (void)didReceiveRemoteNotification:(id)arg1 fetchCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)didReceiveRemoteNotification:(id)arg1;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
+ (void)didRegisterUserNotificationSettings:(id)arg1;
+ (void)load;
+ (id)moduleName;
@property(retain, nonatomic) NSMutableDictionary *remoteNotificationCallbacks; // @synthesize remoteNotificationCallbacks=_remoteNotificationCallbacks;
- (void).cxx_destruct;
- (void)getDeliveredNotifications:(CDUnknownBlockType)arg1;
- (void)removeDeliveredNotifications:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)getScheduledLocalNotifications:(CDUnknownBlockType)arg1;
- (void)getInitialNotification:(CDUnknownBlockType)arg1 reject:(CDUnknownBlockType)arg2;
- (void)cancelLocalNotifications:(id)arg1;
- (void)cancelAllLocalNotifications;
- (void)scheduleLocalNotification:(id)arg1;
- (void)presentLocalNotification:(id)arg1;
- (void)checkPermissions:(CDUnknownBlockType)arg1;
- (void)abandonPermissions;
- (void)requestPermissions:(id)arg1 resolver:(CDUnknownBlockType)arg2 rejecter:(CDUnknownBlockType)arg3;
- (void)getApplicationIconBadgeNumber:(CDUnknownBlockType)arg1;
- (void)setApplicationIconBadgeNumber:(long long)arg1;
- (void)onFinishRemoteNotification:(id)arg1 fetchResult:(unsigned long long)arg2;
- (void)handleRemoteNotificationRegistrationError:(id)arg1;
- (void)handleRemoteNotificationsRegistered:(id)arg1;
- (void)handleRemoteNotificationReceived:(id)arg1;
- (void)handleLocalNotificationReceived:(id)arg1;
- (id)supportedEvents;
- (void)stopObserving;
- (void)startObserving;
- (id)methodQueue;

@end

