//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSString, UIColor;

@interface RCTTextAttributes : NSObject <NSCopying>
{
    _Bool _allowFontScaling;
    _Bool _isHighlighted;
    UIColor *_foregroundColor;
    UIColor *_backgroundColor;
    double _opacity;
    NSString *_fontFamily;
    double _fontSize;
    double _fontSizeMultiplier;
    double _maxFontSizeMultiplier;
    NSString *_fontWeight;
    NSString *_fontStyle;
    NSArray *_fontVariant;
    double _letterSpacing;
    double _lineHeight;
    long long _alignment;
    long long _baseWritingDirection;
    UIColor *_textDecorationColor;
    long long _textDecorationStyle;
    long long _textDecorationLine;
    double _textShadowRadius;
    UIColor *_textShadowColor;
    NSNumber *_tag;
    long long _layoutDirection;
    long long _textTransform;
    struct CGSize _textShadowOffset;
}

@property(nonatomic) long long textTransform; // @synthesize textTransform=_textTransform;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(retain, nonatomic) NSNumber *tag; // @synthesize tag=_tag;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(retain, nonatomic) UIColor *textShadowColor; // @synthesize textShadowColor=_textShadowColor;
@property(nonatomic) double textShadowRadius; // @synthesize textShadowRadius=_textShadowRadius;
@property(nonatomic) struct CGSize textShadowOffset; // @synthesize textShadowOffset=_textShadowOffset;
@property(nonatomic) long long textDecorationLine; // @synthesize textDecorationLine=_textDecorationLine;
@property(nonatomic) long long textDecorationStyle; // @synthesize textDecorationStyle=_textDecorationStyle;
@property(retain, nonatomic) UIColor *textDecorationColor; // @synthesize textDecorationColor=_textDecorationColor;
@property(nonatomic) long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double lineHeight; // @synthesize lineHeight=_lineHeight;
@property(nonatomic) double letterSpacing; // @synthesize letterSpacing=_letterSpacing;
@property(nonatomic) _Bool allowFontScaling; // @synthesize allowFontScaling=_allowFontScaling;
@property(copy, nonatomic) NSArray *fontVariant; // @synthesize fontVariant=_fontVariant;
@property(copy, nonatomic) NSString *fontStyle; // @synthesize fontStyle=_fontStyle;
@property(copy, nonatomic) NSString *fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double maxFontSizeMultiplier; // @synthesize maxFontSizeMultiplier=_maxFontSizeMultiplier;
@property(nonatomic) double fontSizeMultiplier; // @synthesize fontSizeMultiplier=_fontSizeMultiplier;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(copy, nonatomic) NSString *fontFamily; // @synthesize fontFamily=_fontFamily;
@property(nonatomic) double opacity; // @synthesize opacity=_opacity;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)applyTextAttributesToText:(id)arg1;
- (id)effectiveBackgroundColor;
- (id)effectiveForegroundColor;
- (double)effectiveFontSizeMultiplier;
- (id)effectiveFont;
- (id)effectiveTextAttributes;
- (id)effectiveParagraphStyle;
- (void)applyTextAttributes:(id)arg1;
- (id)init;

@end

