/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIDragPreviewProvider : NSObject {
    UIDragPreview * _preview;
    id /* block */  _previewProviderBlock;
}

@property (nonatomic, readonly) UIDragPreview *preview;

+ (id)previewProviderWithBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)preview;

@end
