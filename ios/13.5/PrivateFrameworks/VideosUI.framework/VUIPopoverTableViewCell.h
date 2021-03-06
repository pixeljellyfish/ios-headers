//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IKImageElement, IKTextElement, IKViewElement, UIView, _TVImageView, _TVLabel;

__attribute__((visibility("hidden")))
@interface VUIPopoverTableViewCell : UITableViewCell
{
    _Bool _imageLoaded;
    UIView *_dimmingView;
    IKViewElement *_cardElement;
    IKTextElement *_textElement;
    IKImageElement *_imageElement;
    double _preferredHeight;
    UIView *_cardView;
    _TVImageView *_tvImageView;
    _TVLabel *_tvLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TVLabel *tvLabel; // @synthesize tvLabel=_tvLabel;
@property(retain, nonatomic) _TVImageView *tvImageView; // @synthesize tvImageView=_tvImageView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(nonatomic, getter=isImageLoaded) _Bool imageLoaded; // @synthesize imageLoaded=_imageLoaded;
@property(nonatomic) double preferredHeight; // @synthesize preferredHeight=_preferredHeight;
@property(retain, nonatomic) IKImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property(retain, nonatomic) IKTextElement *textElement; // @synthesize textElement=_textElement;
@property(retain, nonatomic) IKViewElement *cardElement; // @synthesize cardElement=_cardElement;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

