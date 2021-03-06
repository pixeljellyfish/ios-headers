//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASLayoutSpec.h"

@interface ASStackLayoutSpec : ASLayoutSpec
{
    _Bool _concurrent;
    unsigned long long _direction;
    double _spacing;
    unsigned long long _horizontalAlignment;
    unsigned long long _verticalAlignment;
    unsigned long long _justifyContent;
    unsigned long long _alignItems;
    unsigned long long _flexWrap;
    unsigned long long _alignContent;
    double _lineSpacing;
}

+ (id)horizontalStackLayoutSpec;
+ (id)verticalStackLayoutSpec;
+ (id)stackLayoutSpecWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 flexWrap:(unsigned long long)arg5 alignContent:(unsigned long long)arg6 lineSpacing:(double)arg7 children:(id)arg8;
+ (id)stackLayoutSpecWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 flexWrap:(unsigned long long)arg5 alignContent:(unsigned long long)arg6 children:(id)arg7;
+ (id)stackLayoutSpecWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 children:(id)arg5;
@property(nonatomic, getter=isConcurrent) _Bool concurrent; // @synthesize concurrent=_concurrent;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned long long alignContent; // @synthesize alignContent=_alignContent;
@property(nonatomic) unsigned long long flexWrap; // @synthesize flexWrap=_flexWrap;
@property(nonatomic) unsigned long long alignItems; // @synthesize alignItems=_alignItems;
@property(nonatomic) unsigned long long justifyContent; // @synthesize justifyContent=_justifyContent;
@property(nonatomic) unsigned long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) unsigned long long horizontalAlignment; // @synthesize horizontalAlignment=_horizontalAlignment;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (id)propertiesForDescription;
- (void)resolveVerticalAlignment;
- (void)resolveHorizontalAlignment;
- (id)calculateLayoutThatFits:(CDStruct_42a63532)arg1;
- (id)initWithDirection:(unsigned long long)arg1 spacing:(double)arg2 justifyContent:(unsigned long long)arg3 alignItems:(unsigned long long)arg4 flexWrap:(unsigned long long)arg5 alignContent:(unsigned long long)arg6 lineSpacing:(double)arg7 children:(id)arg8;
- (id)init;
- (id)asciiArtString;

@end

