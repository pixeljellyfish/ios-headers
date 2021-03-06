//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface XCPointerEventPath : NSObject <NSSecureCoding>
{
    NSMutableArray *_pointerEvents;
    _Bool _immutable;
    unsigned long long _pathType;
    unsigned long long _index;
}

+ (_Bool)supportsSecureCoding;
@property _Bool immutable; // @synthesize immutable=_immutable;
@property unsigned long long index; // @synthesize index=_index;
@property(readonly) unsigned long long pathType; // @synthesize pathType=_pathType;
- (void).cxx_destruct;
- (id)description;
- (id)firstEventAfterOffset:(double)arg1;
- (id)lastEventBeforeOffset:(double)arg1;
- (void)_addPointerEvent:(id)arg1;
- (void)setModifiers:(unsigned long long)arg1 mergeWithCurrentModifierFlags:(_Bool)arg2 atOffset:(double)arg3;
- (void)typeKey:(id)arg1 modifiers:(unsigned long long)arg2 atOffset:(double)arg3;
- (void)typeText:(id)arg1 atOffset:(double)arg2 typingSpeed:(unsigned long long)arg3;
- (void)scrollAtPoint:(struct CGPoint)arg1 byLines:(long long)arg2 atOffset:(double)arg3;
- (void)scrollWithDeltaVector:(struct CGVector)arg1 atOffset:(double)arg2 duration:(double)arg3;
- (void)releaseButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;
- (void)dragWithButton:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2 atOffset:(double)arg3 duration:(double)arg4;
- (void)pressButton:(unsigned long long)arg1 atOffset:(double)arg2 clickCount:(unsigned long long)arg3;
- (void)liftUpAtOffset:(double)arg1;
- (void)moveToPoint:(struct CGPoint)arg1 atOffset:(double)arg2;
- (void)pressDownWithPressure:(double)arg1 atOffset:(double)arg2;
- (void)pressDownAtOffset:(double)arg1;
@property(readonly) NSArray *pointerEvents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initForTouchBarAtPoint:(struct CGPoint)arg1 offset:(double)arg2;
- (id)initForTextInput;
- (id)initForMouseEvents;
- (id)initForTouchAtPoint:(struct CGPoint)arg1 offset:(double)arg2;

@end

