//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SentMessageDonator : NSObject
{
}

+ (void)deleteSendMessageInteractionsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)buildConversationNameForChannelType:(unsigned long long)arg1 channelName:(id)arg2 guildName:(id)arg3 recipients:(id)arg4;
+ (void)loadRemoteImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)defaultImageForChannelType:(unsigned long long)arg1;
+ (void)donateSendMessageIntentForConversationWithName:(id)arg1 identifier:(id)arg2 serviceName:(id)arg3 image:(id)arg4;
+ (void)donateSendMessageIntentForConversationWithName:(id)arg1 identifier:(id)arg2 channelType:(unsigned long long)arg3 serviceName:(id)arg4 imageUrl:(id)arg5;
+ (void)donateSendMessageIntentForConversationWithIdentifier:(id)arg1 channelType:(int)arg2 channelName:(id)arg3 guildName:(id)arg4 guildId:(id)arg5 recipients:(id)arg6 imageUrl:(id)arg7;

@end

