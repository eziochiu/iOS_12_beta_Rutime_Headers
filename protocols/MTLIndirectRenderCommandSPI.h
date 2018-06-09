/* made by EzioChiu.
 */

@protocol MTLIndirectRenderCommandSPI <MTLIndirectRenderCommand>

@required

- (_MTLIndirectDrawArguments *)drawArguments;
- (_MTLIndirectDrawIndexedArguments *)drawIndexedArguments;
- (_MTLIndirectDrawIndexedPatchesArguments *)drawIndexedPatchesArguments;
- (_MTLIndirectDrawPatchesArguments *)drawPatchesArguments;
- (unsigned long long)getCommandType;
- (void*)getFragmentBufferAtIndex:(unsigned long long)arg1;
- (unsigned long long)getPipelineStateUniqueIdentifier;
- (_MTLIndirectTessellationFactorArguments *)getTessellationFactorArguments;
- (void*)getVertexBufferAtIndex:(unsigned long long)arg1;

@end
