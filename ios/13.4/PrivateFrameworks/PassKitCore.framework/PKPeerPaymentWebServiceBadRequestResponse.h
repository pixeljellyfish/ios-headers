//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSNumber, NSString;

@interface PKPeerPaymentWebServiceBadRequestResponse : PKPeerPaymentWebServiceResponse
{
    NSNumber *_errorCode;
    NSString *_serverDebugDescription;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *serverDebugDescription; // @synthesize serverDebugDescription=_serverDebugDescription;
@property(readonly, copy, nonatomic) NSNumber *errorCode; // @synthesize errorCode=_errorCode;
- (id)initWithData:(id)arg1;

@end

