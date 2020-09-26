//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSLayoutManager, NSTextContainer, UIFont;

@protocol NSLayoutManagerDelegate <NSObject>

@optional
- (void)layoutManager:(NSLayoutManager *)arg1 textContainer:(NSTextContainer *)arg2 didChangeGeometryFromSize:(struct CGSize)arg3;
- (void)layoutManager:(NSLayoutManager *)arg1 didCompleteLayoutForTextContainer:(NSTextContainer *)arg2 atEnd:(_Bool)arg3;
- (void)layoutManagerDidInvalidateLayout:(NSLayoutManager *)arg1;
- (_Bool)layoutManager:(NSLayoutManager *)arg1 shouldSetLineFragmentRect:(inout struct CGRect *)arg2 lineFragmentUsedRect:(inout struct CGRect *)arg3 baselineOffset:(inout double *)arg4 inTextContainer:(NSTextContainer *)arg5 forGlyphRange:(struct _NSRange)arg6;
- (struct CGRect)layoutManager:(NSLayoutManager *)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(NSTextContainer *)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;
- (_Bool)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned long long)arg2;
- (_Bool)layoutManager:(NSLayoutManager *)arg1 shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned long long)arg2;
- (long long)layoutManager:(NSLayoutManager *)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 paragraphSpacingBeforeGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (double)layoutManager:(NSLayoutManager *)arg1 lineSpacingAfterGlyphAtIndex:(unsigned long long)arg2 withProposedLineFragmentRect:(struct CGRect)arg3;
- (unsigned long long)layoutManager:(NSLayoutManager *)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(UIFont *)arg5 forGlyphRange:(struct _NSRange)arg6;
@end

