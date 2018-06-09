/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnimatedGIFMovieExporter : NSObject {
    TSPData * _data;
}

- (void)dealloc;
- (void)exportToMovieFileURL:(id)arg1 fileType:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)init;
- (id)initWithData:(id)arg1;
- (struct opaqueCMSampleBuffer { }*)p_createCMSampleBufferFromImageInCGImageSource:(struct CGImageSource { }*)arg1 atIndex:(unsigned long long)arg2 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 nextPresentationTime:(out struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg4;
- (void)p_finishWithSuccess:(bool)arg1 error:(id)arg2 completionHandler:(id /* block */)arg3;

@end
