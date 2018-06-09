/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPCNNPetsDetector : NSObject

+ (id)detector:(int)arg1;

- (int)createInput:(float*)arg1 withBuffer:(struct __CVBuffer { }*)arg2 cnnInputHeight:(int)arg3 cnnInputWidth:(int)arg4;
- (int)createModel:(int)arg1 srcWidth:(int)arg2;
- (int)generatePetsBoxes:(id)arg1 cancel:(id /* block */)arg2;
- (int)generatePetsRegions:(float*)arg1 outHeight:(int)arg2 outWidth:(int)arg3 boxes:(id)arg4 maxNumRegions:(int)arg5;
- (float*)getInputBuffer:(int)arg1 srcWidth:(int)arg2 cnnInputHeight:(int*)arg3 cnnInputWidth:(int*)arg4;
- (int)initWithImage:(float*)arg1 image:(struct __CVBuffer { }*)arg2 forChunk:(int)arg3;
- (void)nonMaxSuppression:(id)arg1;
- (int)petsDetection:(struct __CVBuffer { }*)arg1 petsRegions:(id)arg2 cancel:(id /* block */)arg3;

@end
