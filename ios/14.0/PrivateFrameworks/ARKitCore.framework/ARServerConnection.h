/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol ARServerConnectionDelegate;
@class ARWeakReference, NSXPCConnection, NSXPCInterface;

@interface ARServerConnection : NSObject <NSXPCProxyCreating> {

	/*^block*/id _connectionCreationBlock;
	ARWeakReference* _exportedObjectWeakReference;
	NSXPCConnection* _connection;
	id<ARServerConnectionDelegate> _delegate;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;

}

@property (nonatomic,readonly) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<ARServerConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                          //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (assign,nonatomic,__weak) id exportedObject; 
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;                      //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
-(id)initWithListenerEndpoint:(id)arg1 ;
-(id)synchronousRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)exportedObject;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxy;
-(NSXPCInterface *)remoteObjectInterface;
-(void)invalidate;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(NSXPCConnection *)connection;
-(NSXPCInterface *)exportedInterface;
-(void)dealloc;
-(void)setDelegate:(id<ARServerConnectionDelegate>)arg1 ;
-(id<ARServerConnectionDelegate>)delegate;
-(id)initWithServiceName:(id)arg1 ;
-(void)serverConnectionInterrupted;
-(void)serverConnectionInvalidated;
@end

