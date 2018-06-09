/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPPageControllerCanvasDelegate : NSObject <TSDCanvasDelegate> {
    TSDCanvas * _canvas;
    TPDocumentRoot * _documentRoot;
}

@property (nonatomic, readonly) TSDCanvas *canvas;
@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)canvas;
- (void)dealloc;
- (id)documentRoot;
- (id)initWithDocumentRoot:(id)arg1 canvas:(id)arg2;
- (bool)isExportingFixedLayoutEPUB;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (bool)wantsEditingLayoutsForOffscreenInfos;

@end
