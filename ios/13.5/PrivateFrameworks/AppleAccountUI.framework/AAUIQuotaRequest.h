//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AARequest.h>

@class ACAccount;

@interface AAUIQuotaRequest : AARequest
{
    ACAccount *_account;
    _Bool _isDetailedRequest;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initDetailedRequestWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1;

@end

