/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:22 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/FigCapturePipeline.h>

@class FigCaptureVISPipeline, BWFanOutNode, BWOverCaptureFanOutNode, NSMutableArray, FigCaptureMovieFileSinkHeadPipeline;

@interface FigCaptureMovieFileSinkMiddlePipeline : FigCapturePipeline {

	FigCaptureVISPipeline* _visPipeline;
	BWFanOutNode* _videoFanOut;
	FigCaptureVISPipeline* _overCaptureVISPipeline;
	BWOverCaptureFanOutNode* _audioFanOut;
	NSMutableArray* _metadataFanOuts;
	FigCaptureMovieFileSinkHeadPipeline* _headPipeline;
	unsigned long long _numberOfTailsToSupport;

}

@property (nonatomic,readonly) FigCaptureVISPipeline * visPipeline;                         //@synthesize visPipeline=_visPipeline - In the implementation block
@property (nonatomic,readonly) FigCaptureVISPipeline * overCaptureVISPipeline;              //@synthesize overCaptureVISPipeline=_overCaptureVISPipeline - In the implementation block
-(FigCaptureVISPipeline *)overCaptureVISPipeline;
-(id)videoOutputForTailIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(FigCaptureVISPipeline *)visPipeline;
-(id)metadataOutputsForTailIndex:(unsigned long long)arg1 ;
-(int)_buildMovieFileSinkExtendedCVISMiddleWithConfiguration:(id)arg1 graph:(id)arg2 parentPipeline:(id)arg3 headPipeline:(id)arg4 captureDevice:(id)arg5 ;
-(id)audioOutputForTailIndex:(unsigned long long)arg1 ;
@end

