/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SKUIResourceRequest : NSObject <NSCopying> {

	id _cacheKey;
	unsigned long long _requestID;

}

@property (nonatomic,readonly) BOOL cachesInMemory; 
@property (nonatomic,retain) id cacheKey;                                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (assign,nonatomic) unsigned long long requestIdentifier;              //@synthesize requestID=_requestID - In the implementation block
-(id)cacheKey;
-(unsigned long long)requestIdentifier;
-(void)setRequestIdentifier:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)setCacheKey:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)cachesInMemory;
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)_initSKUIResourceRequest;
@end

