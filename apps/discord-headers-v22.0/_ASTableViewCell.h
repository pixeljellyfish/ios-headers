//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ASCellNode, ASCollectionElement;
@protocol _ASTableViewCellDelegate;

@interface _ASTableViewCell : UITableViewCell
{
    id <_ASTableViewCellDelegate> _delegate;
    ASCollectionElement *_element;
}

@property(retain, nonatomic) ASCollectionElement *element; // @synthesize element=_element;
@property(nonatomic) __weak id <_ASTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)consumesCellNodeVisibilityEvents;
@property(readonly, nonatomic) ASCellNode *node;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;

@end

