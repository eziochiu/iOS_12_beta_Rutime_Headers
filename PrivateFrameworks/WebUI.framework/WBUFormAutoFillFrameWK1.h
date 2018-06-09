/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillFrameWK1 : NSObject <WBSFormAutoFillFrame> {
    WebFrame * _webFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WebFrame *webFrame;

+ (id)autoFillFrameWithWebFrame:(id)arg1;

- (void).cxx_destruct;
- (id)committedURL;
- (bool)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(id /* block */)arg1;
- (struct OpaqueFormAutoFillFrame { }*)frameRef;
- (id)initWithWebFrame:(id)arg1;
- (struct OpaqueJSContext { }*)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { }*)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (id)pageMainFrame;
- (id)webFrame;

@end
