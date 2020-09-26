//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNSVGGroup.h"

@class NSArray, NSString, RNSVGGlyphContext, RNSVGLength;

@interface RNSVGText : RNSVGGroup
{
    RNSVGGlyphContext *_glyphContext;
    NSString *_alignmentBaseline;
    NSString *_baselineShift;
    double cachedAdvance;
    RNSVGLength *_textLength;
    NSString *_lengthAdjust;
    NSArray *_deltaX;
    NSArray *_deltaY;
    NSArray *_positionX;
    NSArray *_positionY;
    NSArray *_rotate;
}

@property(retain, nonatomic) NSArray *rotate; // @synthesize rotate=_rotate;
@property(retain, nonatomic) NSArray *positionY; // @synthesize positionY=_positionY;
@property(retain, nonatomic) NSArray *positionX; // @synthesize positionX=_positionX;
@property(retain, nonatomic) NSArray *deltaY; // @synthesize deltaY=_deltaY;
@property(retain, nonatomic) NSArray *deltaX; // @synthesize deltaX=_deltaX;
@property(retain, nonatomic) NSString *lengthAdjust; // @synthesize lengthAdjust=_lengthAdjust;
@property(retain, nonatomic) RNSVGLength *textLength; // @synthesize textLength=_textLength;
- (void).cxx_destruct;
- (double)getSubtreeTextChunksTotalAdvance;
- (id)getTextAnchorRoot;
- (struct __CTFont *)getFontFromContext;
- (void)popGlyphContext;
- (void)pushGlyphContext;
- (id)getGlyphContext;
@property(retain, nonatomic) NSString *baselineShift;
@property(retain, nonatomic) NSString *alignmentBaseline;
- (id)textRoot;
- (void)renderGroupTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (struct CGPath *)getPath:(struct CGContext *)arg1;
- (struct CGPath *)getGroupPath:(struct CGContext *)arg1;
- (void)setupGlyphContext:(struct CGContext *)arg1;
- (void)renderLayerTo:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (void)clearPath;
- (void)invalidate;

@end

