/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:36:51 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ICDocCamRectangleResultsQueue : NSObject {

	NSMutableArray* _array;

}

@property (nonatomic,retain) NSMutableArray * array;              //@synthesize array=_array - In the implementation block
-(void)clear;
-(id)peek;
-(id)dequeue;
-(void)enqueue:(id)arg1 ;
-(id)peek:(long long)arg1 ;
-(NSMutableArray *)array;
-(id)init;
-(void)setArray:(NSMutableArray *)arg1 ;
-(long long)size;
-(void)apply:(/*^block*/id)arg1 fromIndex:(long long)arg2 toIndex:(unsigned long long)arg3 ;
-(id)peekTail;
-(void)apply:(/*^block*/id)arg1 atIndex:(long long)arg2 ;
@end

