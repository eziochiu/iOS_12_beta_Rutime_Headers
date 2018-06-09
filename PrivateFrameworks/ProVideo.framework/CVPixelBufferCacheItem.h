/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface CVPixelBufferCacheItem : NSObject {
    NSArray * _DODs;
    NSArray * _buffers;
    struct CGSize { 
        double width; 
        double height; 
    }  _fullSize;
}

@property (nonatomic, readonly) NSArray *DODs;
@property (nonatomic, readonly) NSArray *buffers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fullSize;

- (void).cxx_destruct;
- (id)DODs;
- (id)buffers;
- (struct CGSize { double x1; double x2; })fullSize;
- (id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 fullSize:(struct CGSize { double x1; double x2; })arg3;

@end
