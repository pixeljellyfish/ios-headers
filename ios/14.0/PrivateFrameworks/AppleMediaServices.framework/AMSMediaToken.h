/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:53 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString;

@interface AMSMediaToken : NSObject <NSSecureCoding> {

	BOOL _valid;
	NSDate* _expirationDate;
	double _lifetime;
	NSString* _tokenString;

}

@property (nonatomic,readonly) NSDate * expirationDate;                //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double lifetime;                        //@synthesize lifetime=_lifetime - In the implementation block
@property (nonatomic,readonly) NSString * tokenString;                 //@synthesize tokenString=_tokenString - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)lifetime;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 ;
-(id)invalidCopy;
-(NSDate *)expirationDate;
-(BOOL)willExpireWithin:(double)arg1 ;
-(double)percentageOfLifetimeRemaining;
-(BOOL)isExpired;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)tokenString;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isValid;
-(id)initWithString:(id)arg1 expirationDate:(id)arg2 lifetime:(double)arg3 valid:(BOOL)arg4 ;
-(id)description;
@end

