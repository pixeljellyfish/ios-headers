//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask
{
    ACAccount *_account;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)perform;
- (id)initWithAccount:(id)arg1;

@end

