//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSNumber, NSString;
@protocol WLKNotificationCenterDelegate;

@protocol WLKNotificationsImpl
@property(nonatomic) __weak id <WLKNotificationCenterDelegate> delegate;
- (_Bool)isCategoryEnabledByUser:(long long)arg1;
- (void)setBadgeString:(NSString *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)setBadgeNumber:(NSNumber *)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)post:(NSString *)arg1 title:(NSString *)arg2 body:(NSString *)arg3 options:(NSDictionary *)arg4;
@end

