/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextGestureClusterPreview : UITextGestureCluster {
    bool  _detachOnDealloc;
    UIPreviewItemController * _previewItemController;
}

- (void).cxx_destruct;
- (void)_resetForLink;
- (void)dealloc;
- (void)detach;
- (bool)doesControlDelegate;
- (id)initWithView:(id)arg1;
- (bool)shouldClusterAllowSelectionGestures:(bool)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 toBegin:(bool)arg3;

@end
