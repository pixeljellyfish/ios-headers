//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadStrategy-Protocol.h>

@class GEOComposedRoute, GEORoutePreloader, GEOTileKeyList, NSMapTable, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol GEORoutePreloadCamera, OS_dispatch_queue;

@interface GEONavRoutePreloadStrategy : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadStrategy>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    GEORoutePreloader *_preloader;
    GEOComposedRoute *_route;
    double _currentRoutePosition;
    int _downloadState;
    id <GEORoutePreloadCamera> _camera;
    GEOTileKeyList *_tilesLoadingOrLoaded;
    GEOTileKeyList *_tilesReceived;
    NSMutableArray *_steps;
    unsigned int _stepGeneration;
    long long _currentLoadingSteps;
    NSMapTable *_stepErrors;
    NSMapTable *_stepLifetimeErrors;
    _Bool _anyErrors;
    _Bool _finished;
    double _beginTime;
    double _mostRecentErrorTime;
    _Bool _hadEnoughTilesToDisableNetworking;
    NSTimer *_geodCrashTimer;
    double _maneuverSizeInMeters;
    _Bool _enabled;
    double _stepSizeInMeters;
    NSMutableDictionary *_tileSetStyles;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(nonatomic) __weak GEORoutePreloader *preloader; // @synthesize preloader=_preloader;
@property(retain, nonatomic) id <GEORoutePreloadCamera> camera; // @synthesize camera=_camera;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)updateWithRouteMatch:(id)arg1;
- (void)updateWithRoute:(id)arg1 routeMatch:(id)arg2;
- (void)_stop;
- (void)stop;
- (void)_start;
- (void)start;
- (void)_performNextRequests;
- (void)_performTileRequestsWithCurrentRoutePositionStepIndex:(long long)arg1 firstErrorStepIndex:(long long)arg2 firstLoadStepIndex:(long long)arg3 loadStepsAhead:(long long)arg4 loadStepsAheadIfNoWiFi:(long long)arg5;
- (void)_cancelRequestsInPast;
- (id)_descriptionForStep:(id)arg1;
- (void)_incrementErrorForStep:(id)arg1;
- (_Bool)_loadStep:(id)arg1 requireWiFi:(_Bool)arg2;
- (void)_cancelAllSteps;
- (void)_cancelStep:(id)arg1;
- (void)_accumulateSteps;
- (void)_geodCrashed:(id)arg1;
- (void)_retryFailuresWithErrorsReset:(_Bool)arg1;
- (void)_resetErrCounts;
- (void)observedNetworkQualityDidChangeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)performTearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

