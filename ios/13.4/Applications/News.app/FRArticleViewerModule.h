//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSLegacyArticleViewerModuleType-Protocol.h"

@protocol FRArticleLoaderType, FRFeldsparContext;

@interface FRArticleViewerModule : NSObject <TSLegacyArticleViewerModuleType>
{
    id <FRFeldsparContext> _feldsparContext;
    id <FRArticleLoaderType> _articleLoader;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <FRArticleLoaderType> articleLoader; // @synthesize articleLoader=_articleLoader;
@property(readonly, nonatomic) id <FRFeldsparContext> feldsparContext; // @synthesize feldsparContext=_feldsparContext;
- (id)createViewControllerForArticleID:(id)arg1 headline:(id)arg2 articleContext:(id)arg3 articlePresentationStyle:(long long)arg4 showShareSheet:(_Bool)arg5 forceArticleUpdate:(_Bool)arg6;
- (id)initWithFeldsparContext:(id)arg1 articleLoader:(id)arg2;

@end

