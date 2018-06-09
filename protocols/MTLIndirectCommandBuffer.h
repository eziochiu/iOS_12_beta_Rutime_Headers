/* made by EzioChiu.
 */

@protocol MTLIndirectCommandBuffer <MTLResource>

@required

- (<MTLIndirectRenderCommand> *)indirectRenderCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)size;

@end
