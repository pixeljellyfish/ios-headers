/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:10 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	BOOL _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)characterSet;
-(unsigned long long)_minimumLength;
-(id)_label;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

