/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UITextDraggableObject : NSObject {
    <NSItemProviderWriting> * _object;
    id /* block */  _previewProvider;
    UITextRange * _range;
    id /* block */  _targetedPreviewProvider;
}

@property (nonatomic, retain) <NSItemProviderWriting> *object;
@property (nonatomic, copy) id /* block */ previewProvider;
@property (nonatomic, retain) UITextRange *range;
@property (nonatomic, copy) id /* block */ targetedPreviewProvider;

+ (id)draggableObject:(id)arg1 fromRange:(id)arg2;

- (void).cxx_destruct;
- (id)object;
- (id /* block */)previewProvider;
- (id)range;
- (void)setObject:(id)arg1;
- (void)setPreviewProvider:(id /* block */)arg1;
- (void)setRange:(id)arg1;
- (void)setTargetedPreviewProvider:(id /* block */)arg1;
- (id /* block */)targetedPreviewProvider;

@end
