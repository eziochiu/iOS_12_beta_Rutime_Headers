/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTextAttachment : NSObject <NSCoding, NSTextAttachmentContainer, UIAccessibilityContentSizeCategoryImageAdjusting> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    NSString * _cacheKey;
    NSData * _data;
    NSFileWrapper * _fileWrapper;
    UIImage * _image;
    double  _layoutPadding;
    struct { 
        unsigned int _allowsTextAttachmentView : 1; 
        unsigned int _embeddingType : 4; 
        unsigned int _standaloneAlignment : 3; 
    }  _taFlags;
    NSString * _uti;
    NSTextAttachmentView * _wrapperView;
}

@property (nonatomic) bool adjustsImageSizeForAccessibilityContentSizeCategory;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (retain) UIView *contentView;
@property (nonatomic, copy) NSData *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fileType;
@property (nonatomic, retain) NSFileWrapper *fileWrapper;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation

+ (id)imageCache;
+ (void)initialize;
+ (void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2;
+ (void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentClassForFileType:(id)arg1;
+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;

- (id)_cacheKey;
- (id)_image;
- (void)_invalidateWrapperView;
- (bool)allowsTextAttachmentView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 glyphPosition:(struct CGPoint { double x1; double x2; })arg3 characterIndex:(unsigned long long)arg4;
- (id)attachmentCell;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)contentView;
- (id)contents;
- (void)dealloc;
- (id)description;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawingBounds;
- (long long)embeddingType;
- (void)encodeWithCoder:(id)arg1;
- (id)fileType;
- (id)fileWrapper;
- (id)image;
- (id)imageForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (id)initWithFileWrapper:(id)arg1;
- (double)lineLayoutPadding;
- (void)placeView:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (void)setAllowsTextAttachmentView:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentView:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDrawingBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setEmbeddingType:(long long)arg1;
- (void)setFileType:(id)arg1;
- (void)setFileWrapper:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setLineLayoutPadding:(double)arg1;
- (void)setStandaloneAlignment:(long long)arg1;
- (long long)standaloneAlignment;
- (Class)textAttachmentViewProviderClass;
- (bool)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_attachmentHasImage:(id)arg1;
+ (id)_imageFromAttachment:(id)arg1;

- (bool)adjustsImageSizeForAccessibilityContentSizeCategory;
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(bool)arg1;

@end
