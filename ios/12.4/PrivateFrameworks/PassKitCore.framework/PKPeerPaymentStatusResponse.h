//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentStatusResponse : PKPeerPaymentWebServiceResponse
{
    long long _status;
    NSString *_paymentIdentifier;
    NSString *_transactionIdentifier;
    NSArray *_actions;
    NSData *_amountHash;
}

@property(readonly, copy, nonatomic) NSData *amountHash; // @synthesize amountHash=_amountHash;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, copy, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(readonly, copy, nonatomic) NSString *paymentIdentifier; // @synthesize paymentIdentifier=_paymentIdentifier;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (_Bool)amountHashIsValidForAmount:(id)arg1 andCurrency:(id)arg2;
- (id)initWithData:(id)arg1;

@end

