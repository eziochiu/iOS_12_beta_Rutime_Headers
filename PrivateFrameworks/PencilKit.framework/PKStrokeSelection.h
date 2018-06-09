/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting> {
    PKDrawing * _drawing;
    PKStroke * _lassoStroke;
    UIImage * _strokeImage;
    NSMutableOrderedSet * _strokes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKDrawing *drawing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKStroke *lassoStroke;
@property (nonatomic, retain) UIImage *strokeImage;
@property (nonatomic, readonly) NSMutableOrderedSet *strokes;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *writableTypeIdentifiersForItemProvider;

+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)strokeSelectionFromData:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsWithoutLasso;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)drawing;
- (id)imageDataForSelection;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;
- (id)lassoStroke;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(id /* block */)arg2;
- (void)setStrokeImage:(id)arg1;
- (id)strokeDataForSelection;
- (id)strokeImage;
- (id)strokes;

@end
