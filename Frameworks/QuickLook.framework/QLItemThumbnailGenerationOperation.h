/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemThumbnailGenerationOperation : QLAsynchronousOperation {
    <QLItemThumbnailGeneratorProtocol> * _generator;
    QLItem * _item;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIImage * _thumbnail;
}

@property (nonatomic, retain) <QLItemThumbnailGeneratorProtocol> *generator;
@property (nonatomic, retain) QLItem *item;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) UIImage *thumbnail;

- (void).cxx_destruct;
- (id)generator;
- (id)initWithThumbnailGenerator:(id)arg1 item:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;
- (id)item;
- (void)main;
- (double)scale;
- (void)setGenerator:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setScale:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setThumbnail:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)thumbnail;

@end
