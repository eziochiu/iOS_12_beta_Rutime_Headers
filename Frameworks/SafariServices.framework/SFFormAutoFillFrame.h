/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFFormAutoFillFrame : NSObject <WBSFormAutoFillFrame> {
    WKWebProcessPlugInFrame * _plugInFrame;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *plugInFrame;
@property (readonly) Class superclass;

+ (id)autoFillFrameWithWebProcessPlugInFrame:(id)arg1;

- (void).cxx_destruct;
- (id)_formMetadataController;
- (id)_pageContoller;
- (id)committedURL;
- (bool)containsAnyFormElements;
- (void)enumerateChildFramesUsingBlock:(id /* block */)arg1;
- (struct OpaqueFormAutoFillFrame { }*)frameRef;
- (unsigned long long)hash;
- (id)initWithWebProcessPlugInFrame:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct OpaqueJSContext { }*)jsContextForMetadataControllerScriptWorld;
- (struct OpaqueJSValue { }*)jsWrapperInMetadataControllerScriptWorldForNode:(id)arg1;
- (id)pageMainFrame;
- (id)plugInFrame;

@end
