/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BKSAccelerometer;

@interface ARBKSAccelerometer : NSObject {

	BKSAccelerometer* _accelerometer;

}
+(id)sharedWeakAccelerometerHandle;
+(id)sharedAccelerometerHandle;
-(id)initPrivate;
-(void)dealloc;
-(long long)currentOrientation;
@end

