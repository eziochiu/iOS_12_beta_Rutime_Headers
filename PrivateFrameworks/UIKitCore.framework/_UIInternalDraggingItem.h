/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIInternalDraggingItem : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorPoint;
    <_UIDraggingItemVisualTarget> * _destinationVisualTarget;
    bool  _forSource;
    NSArray * _imageComponents;
    id /* block */  _imageComponentsProvider;
    id  _localObject;
    bool  _locallyModified;
    unsigned long long  _options;
    id /* block */  _originalImageComponentsProvider;
    id /* block */  _originalPreviewProvider;
    _DUIPreview * _preview;
    id /* block */  _previewProvider;
    id  _privateLocalContext;
    NSItemProvider * _provider;
    _UIDraggingItem * _publicDraggingItem;
    double  _rotationAngle;
    double  _scale;
    <_UIDraggingItemVisualTarget> * _sourceVisualTarget;
    UITargetedDragPreview * _targetedDropPreview;
    _DUIVisibleDroppedItem * _visibleDroppedItem;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } anchorPoint;
@property (nonatomic) <_UIDraggingItemVisualTarget> *destinationVisualTarget;
@property (nonatomic, readonly) UIView *droppedSnapshotView;
@property (nonatomic, readonly) _DUIItemDetail *druidItemDetail;
@property (nonatomic, copy) NSArray *imageComponents;
@property (nonatomic, copy) id /* block */ imageComponentsProvider;
@property (nonatomic, retain) id localObject;
@property (nonatomic) bool locallyModified;
@property (nonatomic) unsigned long long options;
@property (nonatomic, copy) id /* block */ originalImageComponentsProvider;
@property (nonatomic, copy) id /* block */ originalPreviewProvider;
@property (nonatomic, retain) _DUIPreview *preview;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (nonatomic, retain) id privateLocalContext;
@property (nonatomic, retain) NSItemProvider *provider;
@property (nonatomic, readonly) _UIDraggingItem *publicDraggingItem;
@property (nonatomic) double rotationAngle;
@property (nonatomic) double scale;
@property (nonatomic) <_UIDraggingItemVisualTarget> *sourceVisualTarget;
@property (nonatomic, retain) UITargetedDragPreview *targetedDropPreview;
@property (nonatomic, retain) _DUIVisibleDroppedItem *visibleDroppedItem;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })anchorPoint;
- (id)destinationVisualTarget;
- (id)droppedSnapshotView;
- (id)druidImageComponentsWithSlotOwner:(id)arg1;
- (id)druidItemDetail;
- (id)imageComponents;
- (id /* block */)imageComponentsProvider;
- (id)initWithItemProvider:(id)arg1 detail:(id)arg2;
- (id)initWithPublicDraggingItem:(id)arg1;
- (id)localObject;
- (bool)locallyModified;
- (unsigned long long)options;
- (id /* block */)originalImageComponentsProvider;
- (id /* block */)originalPreviewProvider;
- (id)preview;
- (id /* block */)previewProvider;
- (id)privateLocalContext;
- (id)provider;
- (id)publicDraggingItem;
- (id)resolvedImageComponents;
- (id)resolvedPreview;
- (double)rotationAngle;
- (double)scale;
- (void)setAnchorPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setDestinationVisualTarget:(id)arg1;
- (void)setImageComponents:(id)arg1;
- (void)setImageComponentsProvider:(id /* block */)arg1;
- (void)setLocalObject:(id)arg1;
- (void)setLocallyModified:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setOriginalImageComponentsProvider:(id /* block */)arg1;
- (void)setOriginalPreviewProvider:(id /* block */)arg1;
- (void)setPreview:(id)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setPrivateLocalContext:(id)arg1;
- (void)setProvider:(id)arg1;
- (void)setRotationAngle:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setSourceVisualTarget:(id)arg1;
- (void)setTargetedDropPreview:(id)arg1;
- (void)setVisibleDroppedItem:(id)arg1;
- (id)sourceVisualTarget;
- (id)targetedDropPreview;
- (void)updateFromDruidItemDetail:(id)arg1;
- (void)updateFromPublicDraggingItem;
- (void)updateToPublicDraggingItem;
- (id)visibleDroppedItem;

@end
