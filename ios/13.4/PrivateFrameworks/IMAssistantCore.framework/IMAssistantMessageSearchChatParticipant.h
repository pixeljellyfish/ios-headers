//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface IMAssistantMessageSearchChatParticipant : NSObject
{
    _Bool _isMe;
    NSString *_handle;
    NSArray *_contactIdentifiers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isMe; // @synthesize isMe=_isMe;
@property(readonly, copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property(readonly, copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
- (_Bool)matchesPerson:(id)arg1 withUnifiedContactIdentifiers:(id)arg2;
- (id)initWithHandle:(id)arg1 contactIdentifiers:(id)arg2 isMe:(_Bool)arg3;

@end

