//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SDGraphicsImageRendererFormat, UIGraphicsImageRenderer;

@interface SDGraphicsImageRenderer : NSObject
{
    SDGraphicsImageRendererFormat *_format;
    UIGraphicsImageRenderer *_uirenderer;
    struct CGSize _size;
}

@property(retain, nonatomic) UIGraphicsImageRenderer *uirenderer; // @synthesize uirenderer=_uirenderer;
@property(retain, nonatomic) SDGraphicsImageRendererFormat *format; // @synthesize format=_format;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
- (id)imageWithActions:(CDUnknownBlockType)arg1;
- (id)initWithSize:(struct CGSize)arg1 format:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1;

@end

