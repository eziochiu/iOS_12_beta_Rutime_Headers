/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUDevice_iOS : NUDevice {
    NURenderer * _renderer;
}

- (void).cxx_destruct;
- (long long)_defaultSampleMode;
- (id)_newLowPriorityRenderer;
- (id)_newMetalRendererWithOptions:(id)arg1;
- (id)_newOpenGLRendererWithOptions:(id)arg1;
- (id)_newRenderer;
- (id)_newRendererWithOptions:(id)arg1;
- (long long)_openGLVirtualScreen;
- (id)debugDescription;
- (unsigned long long)family;
- (bool)hasOpenGLSupport;
- (id)initWithName:(id)arg1;

@end
