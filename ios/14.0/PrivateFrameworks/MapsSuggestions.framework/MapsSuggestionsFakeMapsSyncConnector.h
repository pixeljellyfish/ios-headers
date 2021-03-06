/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestionsMapsSyncConnector.h>

@protocol MapsSuggestionsMapsSyncConnectorDelegate;
@class NSArray, NSMutableDictionary, NSString;

@interface MapsSuggestionsFakeMapsSyncConnector : NSObject <MapsSuggestionsMapsSyncConnector> {

	BOOL _breakCallbackPromise;
	NSArray* _configuredHistoryResults;
	NSMutableDictionary* _configureReviewedPlacesPerMuid;
	unsigned long long _calledAllContentOfType;
	unsigned long long _calledMapsSyncReviewedPlaceFetchWithMuids;
	id<MapsSuggestionsMapsSyncConnectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MapsSuggestionsMapsSyncConnectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * uniqueName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)uniqueName;
-(void)setDelegate:(id<MapsSuggestionsMapsSyncConnectorDelegate>)arg1 ;
-(id<MapsSuggestionsMapsSyncConnectorDelegate>)delegate;
-(BOOL)allContentOfType:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(id)MapsSyncReviewedPlace_fetchWithMuids:(id)arg1 ;
-(id)newReviewedPlace;
-(void)configureBreakCallbackPromise;
-(void)configureReviewedPlace:(id)arg1 forMuid:(unsigned long long)arg2 ;
-(void)configureHistoryResults:(id)arg1 ;
-(void)fireDidChangeForType:(long long)arg1 ;
-(unsigned long long)calledAllContentOfType;
-(unsigned long long)calledMapsSyncReviewedPlaceFetchWithMuids;
@end

