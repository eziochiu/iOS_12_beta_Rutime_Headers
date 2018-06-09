/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageRequest : NSObject {
    NSURL * _URL;
    NSString * _imageIdentifier;
    id /* block */  _loadingBlock;
    bool  _preserveColorspace;
    unsigned long long  _qualities;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *imageIdentifier;
@property (nonatomic, copy) id /* block */ loadingBlock;
@property (nonatomic, readonly) bool preserveColorspace;
@property (nonatomic, readonly) unsigned long long qualities;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)URL;
- (id)imageIdentifier;
- (id)initWithImageIdentifier:(id)arg1 imageQualities:(unsigned long long)arg2 url:(id)arg3 size:(struct CGSize { double x1; double x2; })arg4 preserveColorspace:(bool)arg5 loadingBlock:(id /* block */)arg6;
- (id /* block */)loadingBlock;
- (bool)preserveColorspace;
- (unsigned long long)qualities;
- (void)setLoadingBlock:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
