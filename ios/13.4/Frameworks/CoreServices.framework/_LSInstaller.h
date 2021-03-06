//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/LSInstallationServiceProtocol-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSInstaller : NSObject <LSInstallationServiceProtocol>
{
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_databaseQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) __weak NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)sendCallbackDeliveryComplete;
- (void)sendCallbackWithDictionary:(id)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)_doinstallApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 notificationJournaller:(id)arg5 reply:(CDUnknownBlockType)arg6;
- (id)installPackage:(id)arg1 withIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (_Bool)registerBundle:(id)arg1 withOptions:(id)arg2;
- (_Bool)dispatchRegistration:(id)arg1;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_douninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (_Bool)unregisterBundle:(id)arg1 placeholderOnly:(_Bool)arg2 notification:(int *)arg3;
- (id)uninstallBundle:(id)arg1 withOptions:(id)arg2 error:(id *)arg3;
- (void)_postProcessingForApp:(id)arg1 type:(id)arg2 notification:(int)arg3;
- (void)_preflightAppDeletion:(id)arg1;
- (_Bool)validateEntitlementsForInstall:(_Bool)arg1 options:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

