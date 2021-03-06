/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, LPLinkHTMLGenerator, DOMElement, NSString;

@interface LPHTMLComponent : NSObject {

	NSMutableArray* _children;
	LPLinkHTMLGenerator* _generator;
	DOMElement* _element;
	NSString* _themePath;

}

@property (nonatomic,__weak,readonly) LPLinkHTMLGenerator * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,readonly) DOMElement * element;                                //@synthesize element=_element - In the implementation block
@property (nonatomic,readonly) NSString * themePath;                                //@synthesize themePath=_themePath - In the implementation block
+(id)styleSet;
+(id)ruleDictionaryForStyle:(id)arg1 ;
+(id)ruleDictionaryForStyleWithDarkInterface:(id)arg1 ;
+(id)additionalGlobalOutOfLineStyleDeclarations;
-(LPLinkHTMLGenerator *)generator;
-(void)addChild:(id)arg1 ;
-(id)initWithTagName:(id)arg1 themePath:(id)arg2 generator:(id)arg3 ;
-(NSString *)themePath;
-(id)childThemePathWithName:(id)arg1 ;
-(DOMElement *)element;
@end

