/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:51:07 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UITableViewCell.h>

@protocol SFEditableTableViewCellDelegate;
@interface SFEditableTableViewCell : UITableViewCell {

	BOOL _enabled;
	id<SFEditableTableViewCellDelegate> _delegate;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) id<SFEditableTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)copy:(id)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)tintColorDidChange;
-(BOOL)isEnabled;
-(id)initWithEnabledState:(BOOL)arg1 ;
-(void)_updateTextFieldTextColor;
-(void)setDelegate:(id<SFEditableTableViewCellDelegate>)arg1 ;
-(id<SFEditableTableViewCellDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
@end

