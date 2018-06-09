/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPArtworkResizeOperation : NSOperation {
    NSURL * _destinationURL;
    NSError * _error;
    UIImage * _image;
    NSObject<OS_dispatch_group> * _operationGroup;
    UIImage * _resizedImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _scaledFittingSize;
    bool  _usesExactFittingSizeAsDestinationSize;
}

@property (nonatomic, readonly) NSURL *destinationURL;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly) NSObject<OS_dispatch_group> *operationGroup;
@property (nonatomic, readonly) UIImage *resizedImage;
@property (nonatomic) struct CGSize { double x1; double x2; } scaledFittingSize;
@property (nonatomic) bool usesExactFittingSizeAsDestinationSize;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_resizedScaledSizeForScaledImageSize:(struct CGSize { double x1; double x2; })arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)destinationURL;
- (id)error;
- (id)image;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2 destinationURL:(id)arg3;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize { double x1; double x2; })arg2 useExactFittingSizeAsDestinationSize:(bool)arg3 destinationURL:(id)arg4;
- (void)main;
- (id)operationGroup;
- (id)resizedImage;
- (struct CGSize { double x1; double x2; })scaledFittingSize;
- (void)setImage:(id)arg1;
- (void)setScaledFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUsesExactFittingSizeAsDestinationSize:(bool)arg1;
- (bool)usesExactFittingSizeAsDestinationSize;

@end
