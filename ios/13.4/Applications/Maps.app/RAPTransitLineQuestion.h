//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPQuestion.h"

@class RAPCommentQuestion, RAPTransitLine;

__attribute__((visibility("hidden")))
@interface RAPTransitLineQuestion : RAPQuestion
{
    RAPCommentQuestion *_commentQuestion;
    RAPTransitLine *_line;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) RAPTransitLine *line; // @synthesize line=_line;
- (long long)_commentEmphasis;
- (id)_localizedCommentPlaceholderText;
- (void)_fillSubmissionParameters:(id)arg1;
- (void)_fillSubmittableProblem:(id)arg1;
@property(readonly, nonatomic) RAPCommentQuestion *commentQuestion; // @synthesize commentQuestion=_commentQuestion;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 line:(id)arg3;

@end

