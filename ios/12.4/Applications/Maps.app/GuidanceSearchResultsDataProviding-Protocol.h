//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol GuidanceSearchResultsRouteInfoProviding;

@protocol GuidanceSearchResultsDataProviding <NSObject>
@property(readonly, nonatomic) NSString *title;
- (void)loadSearchResultsWithRouteInfo:(id <GuidanceSearchResultsRouteInfoProviding>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

