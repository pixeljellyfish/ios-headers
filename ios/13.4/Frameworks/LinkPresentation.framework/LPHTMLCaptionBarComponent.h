//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPHTMLComponent.h>

@class LPCaptionBarPresentationProperties, LPCaptionBarStyle;

__attribute__((visibility("hidden")))
@interface LPHTMLCaptionBarComponent : LPHTMLComponent
{
    LPCaptionBarStyle *_style;
    LPCaptionBarPresentationProperties *_presentationProperties;
    _Bool _useProgressSpinner;
}

+ (id)styleSet;
+ (id)ruleDictionaryForStyle:(id)arg1;
+ (id)additionalRulesForStyle:(id)arg1;
+ (id)baseRules;
- (void).cxx_destruct;
- (void)buildComponents;
- (id)initWithStyle:(id)arg1 presentationProperties:(id)arg2 useProgressSpinner:(_Bool)arg3 themePath:(id)arg4 generator:(id)arg5;

@end

