/* made by EzioChiu.
 */

@protocol MTLIndirectCommandBufferSPI <MTLIndirectCommandBuffer>

@required

- (void)getHeader:(void**)arg1 headerSize:(unsigned long long*)arg2;
- (unsigned long long)storageMode;
- (unsigned long long)uniqueIdentifier;

@end
