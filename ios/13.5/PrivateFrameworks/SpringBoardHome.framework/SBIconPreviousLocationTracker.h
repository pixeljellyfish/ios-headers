//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, SBHIconModel;

@interface SBIconPreviousLocationTracker : NSObject
{
    NSMapTable *_previousIconLocations;
    SBHIconModel *_iconModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBHIconModel *iconModel; // @synthesize iconModel=_iconModel;
- (id)previousLocationInfoForIcon:(id)arg1;
- (void)captureLocationInfoForIcon:(id)arg1 inModel:(id)arg2;

@end

