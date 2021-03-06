/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _UIKBCompatInputView : UIView {

	UIView* _touchableView;
	UIView* _snapshotView;

}

@property (nonatomic,retain) UIView * touchableView;              //@synthesize touchableView=_touchableView - In the implementation block
@property (nonatomic,retain) UIView * snapshotView;               //@synthesize snapshotView=_snapshotView - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)_didChangeKeyplaneWithContext:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addSubview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)touchableView;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(BOOL)_hasAutolayoutHeightConstraint;
-(void)dealloc;
-(CGRect)_compatibleBounds;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)snapshotView;
-(void)setTouchableView:(UIView *)arg1 ;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end

