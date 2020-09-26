//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FIRDynamicLinkNetworking : NSObject
{
    NSString *_APIKey;
    NSString *_clientID;
    NSString *_URLScheme;
}

- (void).cxx_destruct;
- (void)executeOnePlatformRequest:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sendRequestWithBaseURLString:(id)arg1 requestBody:(id)arg2 endpointPath:(id)arg3 parserBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)convertInvitation:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)retrievePendingDynamicLinkWithIOSVersion:(id)arg1 resolutionHeight:(long long)arg2 resolutionWidth:(long long)arg3 locale:(id)arg4 localeRaw:(id)arg5 localeFromWebView:(id)arg6 timezone:(id)arg7 modelName:(id)arg8 FDLSDKVersion:(id)arg9 appInstallationDate:(id)arg10 uniqueMatchVisualStyle:(long long)arg11 retrievalProcessType:(long long)arg12 uniqueMatchLinkToCheck:(id)arg13 handler:(CDUnknownBlockType)arg14;
- (void)resolveShortLink:(id)arg1 FDLSDKVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAPIKey:(id)arg1 clientID:(id)arg2 URLScheme:(id)arg3;

@end

