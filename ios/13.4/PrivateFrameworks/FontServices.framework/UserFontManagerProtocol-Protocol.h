//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol UserFontManagerProtocol
- (void)_removeAllUserFonts;
- (void)reset;
- (void)suspendedFontProviders:(void (^)(NSArray *))arg1;
- (void)suspendFontProvider:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (void)resumeSuspendedFontFiles:(void (^)(NSDictionary *))arg1;
- (void)fontProvidersSubscriptionSupportInfo:(void (^)(NSDictionary *, unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)secondsSinceLastAccessed:(NSString *)arg1 completionHandler:(void (^)(double))arg2;
- (void)synchronizeFontProviders:(void (^)(_Bool))arg1;
- (void)directoryNameFromIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)identifierFromDirectoryName:(NSString *)arg1 completionHandler:(void (^)(NSString *))arg2;
- (void)userFontsInfo:(void (^)(NSDictionary *))arg1;
- (void)knownFontProviders:(void (^)(NSArray *))arg1;
- (void)enableOrDisablePersistentURLs:(NSArray *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)unregisterAndRemoveFontFilesForIdentifier:(NSString *)arg1 ignoringError:(_Bool)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)registeredFamiliesForIdentifier:(NSString *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)registeredFontsForIdentifier:(NSString *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)registeredFontsInfoForIdentifier:(NSString *)arg1 enabled:(_Bool)arg2 completionHandler:(void (^)(NSArray *))arg3;
- (void)uninstallFonts:(NSArray *)arg1 forIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSDictionary *))arg3;
- (void)installFonts:(NSArray *)arg1 forIdentifier:(NSString *)arg2 enabled:(_Bool)arg3 completionHandler:(void (^)(NSArray *, NSDictionary *))arg4;
@end

