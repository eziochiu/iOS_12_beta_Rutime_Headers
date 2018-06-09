/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLToolsDepthStencilState : MTLToolsObject <MTLDepthStencilStateSPI>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *label;
@property (readonly) bool readsDepth;
@property (readonly) bool readsStencil;
@property (readonly) Class superclass;
@property (readonly) bool writesDepth;
@property (readonly) bool writesStencil;

- (void)acceptVisitor:(id)arg1;
- (void)dealloc;
- (id)device;
- (id)label;
- (bool)readsDepth;
- (bool)readsStencil;
- (bool)writesDepth;
- (bool)writesStencil;

@end
