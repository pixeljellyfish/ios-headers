//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@protocol OS_xpc_object;

@interface PLDaemonJobReply : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> *_xpcReply;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *xpcReply; // @synthesize xpcReply=_xpcReply;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithReply:(id)arg1;

@end

