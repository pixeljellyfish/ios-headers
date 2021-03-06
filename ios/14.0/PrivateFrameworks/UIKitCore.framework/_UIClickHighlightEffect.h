/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UITargetedPreview;


@protocol _UIClickHighlightEffect <UIInteractionEffect>
@property (nonatomic,readonly) UITargetedPreview * targetedPreviewForEffectContinuation; 
@property (nonatomic,readonly) UITargetedPreview * targetedPreview; 
@property (nonatomic,copy) id completionBlock; 
@required
+(id)effectWithPreview:(id)arg1 continuingFromPreview:(id)arg2;
-(void)setCompletionBlock:(/*^block*/id)arg1;
-(id)completionBlock;
-(UITargetedPreview *)targetedPreviewForEffectContinuation;
-(UITargetedPreview *)targetedPreview;

@end

