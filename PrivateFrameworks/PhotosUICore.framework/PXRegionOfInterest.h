/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXRegionOfInterest : NSObject <NSCopying> {
    NSObject<UICoordinateSpace> * _coordinateSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _imageContentsRect;
    PXImageRequester * _imageRequester;
    PXViewSpec * _imageViewSpec;
    id /* block */  _placeholderViewFactory;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    NSString * _subtitle;
    PXViewSpec * _textViewSpec;
    NSString * _title;
}

@property (nonatomic, readonly) NSObject<UICoordinateSpace> *coordinateSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } imageContentsRect;
@property (nonatomic, retain) PXImageRequester *imageRequester;
@property (nonatomic, retain) PXViewSpec *imageViewSpec;
@property (nonatomic, copy) id /* block */ placeholderViewFactory;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, retain) PXViewSpec *textViewSpec;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)coordinateSpace;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })imageContentsRect;
- (id)imageRequester;
- (id)imageViewSpec;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inCoordinateSpace:(id)arg2;
- (id /* block */)placeholderViewFactory;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectInCoordinateSpace:(id)arg1;
- (void)setImageContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageRequester:(id)arg1;
- (void)setImageViewSpec:(id)arg1;
- (void)setPlaceholderViewFactory:(id /* block */)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTextViewSpec:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)textViewSpec;
- (id)title;

@end
