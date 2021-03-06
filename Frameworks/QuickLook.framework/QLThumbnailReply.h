/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLThumbnailReply : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _contextSize;
    id /* block */  _drawInContextBlock;
    id /* block */  _drawingBlock;
    NSURL * _imageURL;
    unsigned long long  _type;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contextSize;
@property (nonatomic, copy) id /* block */ drawInContextBlock;
@property (nonatomic, copy) id /* block */ drawingBlock;
@property (nonatomic, retain) NSURL *imageURL;
@property (nonatomic) unsigned long long type;

+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 currentContextDrawingBlock:(id /* block */)arg2;
+ (id)replyWithContextSize:(struct CGSize { double x1; double x2; })arg1 drawingBlock:(id /* block */)arg2;
+ (id)replyWithImageFileURL:(id)arg1;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })contextSize;
- (id /* block */)drawInContextBlock;
- (id /* block */)drawingBlock;
- (id)imageURL;
- (void)setContextSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDrawInContextBlock:(id /* block */)arg1;
- (void)setDrawingBlock:(id /* block */)arg1;
- (void)setImageURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
