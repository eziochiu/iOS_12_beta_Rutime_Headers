/* made by EzioChiu
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLDepthStencilState : NSObject <MTLDepthStencilStateSPI> {
    <MTLDevice> * _device;
    NSString * _label;
}

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

- (void)dealloc;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDevice:(id)arg1 depthStencilDescriptor:(id)arg2;
- (id)label;
- (bool)readsDepth;
- (bool)readsStencil;
- (bool)writesDepth;
- (bool)writesStencil;

@end
