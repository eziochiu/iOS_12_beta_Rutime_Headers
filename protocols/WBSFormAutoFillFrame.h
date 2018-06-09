/* made by EzioChiu.
 */

@protocol WBSFormAutoFillFrame <NSObject>

@required

- (NSURL *)committedURL;
- (bool)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <WBSFormAutoFillFrame> *, void*
- (struct OpaqueFormAutoFillFrame { }*)frameRef;
- (struct OpaqueJSContext { }*)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { }*)jsWrapperInMetadataControllerScriptWorldForNode:(id <WBSFormAutoFillNode>)arg1;
- (<WBSFormAutoFillFrame> *)pageMainFrame;

@end
