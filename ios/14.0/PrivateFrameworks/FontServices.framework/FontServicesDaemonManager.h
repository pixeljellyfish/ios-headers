/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:09 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FontServices.framework/FontServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FontServices/FontServicesClientProtocol.h>

@class NSXPCConnection;

@interface FontServicesDaemonManager : NSObject <FontServicesClientProtocol> {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedManager;
-(void)updatingUserFonts:(/*^block*/id)arg1 ;
-(void)checkinForWebKitProcess:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)resetIssuedFontsFor:(id)arg1 ;
-(NSXPCConnection *)connection;
-(void)requestFonts:(id)arg1 forClient:(id)arg2 ;
-(void)scheduleFontFilesDeletion:(id)arg1 ;
-(void)requestFonts:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)checkin:(/*^block*/id)arg1 ;
-(void)fontAddedInfo:(id)arg1 addedURLStrings:(id)arg2 removedURLStrings:(id)arg3 ;
-(void)checkinForFontPicker:(/*^block*/id)arg1 ;
-(void)resumeAndShowAlertForSuspendedFontProviders;
-(void)fontChanged:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)synchronizeFontAssets:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
@end

