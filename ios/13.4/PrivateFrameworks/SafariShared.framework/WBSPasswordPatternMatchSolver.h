//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet, NSString;

@interface WBSPasswordPatternMatchSolver : NSObject
{
    NSString *_password;
    NSSet *_patternMatches;
    NSMutableDictionary *_partialSolutions;
}

- (void).cxx_destruct;
- (id)optimalEvaluation;
- (id)_exhaustiveSearchPatternWithStartIndex:(unsigned long long)arg1 endIndex:(unsigned long long)arg2;
- (void)_updateExhaustiveSearchPartialSolutionsAtEndIndex:(unsigned long long)arg1;
- (id)_unwindSolution;
- (void)_updatePartialSolutionsWithPatternMatch:(id)arg1 patternCount:(unsigned long long)arg2;
- (void)_enumeratePartialSolutionsWithEndIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_setPartialSolution:(id)arg1 withEndIndex:(unsigned long long)arg2 patternCount:(unsigned long long)arg3;
- (id)_partialSolutionWithEndIndex:(unsigned long long)arg1 patternCount:(unsigned long long)arg2;
- (id)initWithPassword:(id)arg1 patternMatches:(id)arg2;

@end

