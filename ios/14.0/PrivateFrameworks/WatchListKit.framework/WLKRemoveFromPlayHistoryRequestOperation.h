/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKUTSNetworkRequestOperation.h>

@class NSString;

@interface WLKRemoveFromPlayHistoryRequestOperation : WLKUTSNetworkRequestOperation {

	NSString* _deleteID;

}

@property (nonatomic,copy,readonly) NSString * deleteID;              //@synthesize deleteID=_deleteID - In the implementation block
-(NSString *)deleteID;
-(id)initWithDeleteID:(id)arg1 caller:(id)arg2 isContinueWatching:(BOOL)arg3 ;
@end

