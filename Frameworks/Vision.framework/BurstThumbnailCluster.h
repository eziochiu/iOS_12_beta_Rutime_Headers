/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface BurstThumbnailCluster : NSObject {
    NSMutableArray * _burstImages;
    id /* block */  _completionBlock;
    struct __CVBuffer { } * _imagePixelBuffer;
    NSMutableDictionary * _imageProps;
}

@property (retain) NSMutableArray *burstImages;
@property (copy) id /* block */ completionBlock;
@property struct __CVBuffer { }*imagePixelBuffer;
@property (retain) NSMutableDictionary *imageProps;

- (void).cxx_destruct;
- (void)addItemsFromCluster:(id)arg1;
- (id)burstImages;
- (id /* block */)completionBlock;
- (float)computeMergeCost:(id)arg1 :(int*)arg2 :(int)arg3;
- (void)dealloc;
- (struct __CVBuffer { }*)imagePixelBuffer;
- (id)imageProps;
- (id)init;
- (id)initWithImageData:(struct __CVBuffer { }*)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)setBurstImages:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setImagePixelBuffer:(struct __CVBuffer { }*)arg1;
- (void)setImageProps:(id)arg1;

@end
