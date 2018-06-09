/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKPencilOverlayRenderingDetails : NSObject {
    TSPData * _dataToInvalidateFromAfterDownload;
    bool  _isSelected;
    bool  _isSplit;
    NSMutableArray * _mutableUnscaledSelectionRectangles;
    TSUImage * _scaledImage;
    PKDrawing * _subDrawing;
    TSUBezierPath * _transformedPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledImageClipRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unscaledImageFrame;
}

@property (nonatomic, readonly) TSPData *dataToInvalidateFromAfterDownload;
@property (nonatomic) bool isSelected;
@property (nonatomic) bool isSplit;
@property (nonatomic, retain) NSMutableArray *mutableUnscaledSelectionRectangles;
@property (nonatomic, readonly) TSUImage *scaledImage;
@property (nonatomic, retain) PKDrawing *subDrawing;
@property (nonatomic, retain) TSUBezierPath *transformedPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledImageClipRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unscaledImageFrame;
@property (nonatomic, readonly) NSArray *unscaledSelectionRectangles;

- (void).cxx_destruct;
- (void)addUnscaledSelectionRectangle:(id)arg1;
- (bool)containsPointForHitTesting:(struct CGPoint { double x1; double x2; })arg1;
- (id)dataToInvalidateFromAfterDownload;
- (id)description;
- (id)initWithScaledImage:(id)arg1 dataToInvalidateFromAfterDownload:(id)arg2;
- (bool)isSelected;
- (bool)isSplit;
- (id)mutableUnscaledSelectionRectangles;
- (id)scaledImage;
- (void)setIsSelected:(bool)arg1;
- (void)setIsSplit:(bool)arg1;
- (void)setMutableUnscaledSelectionRectangles:(id)arg1;
- (void)setSubDrawing:(id)arg1;
- (void)setTransformedPath:(id)arg1;
- (void)setUnscaledImageClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUnscaledImageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)subDrawing;
- (id)transformedPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledImageClipRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unscaledImageFrame;
- (id)unscaledSelectionRectangles;

@end
