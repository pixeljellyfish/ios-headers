//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MLModelTypeRegistry : NSObject
{
}

+ (id)sharedInstance;
- (Class)classForCompilingModelType:(int)arg1;
- (Class)classForLoadingModelType:(int)arg1 isUpdatable:(_Bool)arg2;
- (Class)classForLoadingModelType:(int)arg1;
- (id)init;

@end

