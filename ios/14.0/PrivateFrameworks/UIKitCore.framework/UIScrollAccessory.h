/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:47 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView;


@protocol UIScrollAccessory
@property (assign,nonatomic,__weak) UIScrollView * scrollView; 
@property (assign,nonatomic) long long edge; 
@property (nonatomic,readonly) BOOL overlay; 
@required
-(void)setEdge:(long long)arg1;
-(BOOL)overlay;
-(void)update;
-(long long)edge;
-(void)setScrollView:(id)arg1;
-(UIScrollView *)scrollView;

@end

