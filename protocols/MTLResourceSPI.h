/* made by EzioChiu.
 */

@protocol MTLResourceSPI <MTLResource>

@required

- (MTLResourceAllocationInfo *)cachedAllocationInfo;
- (bool)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2;
- (bool)doesAliasResource:(id <MTLResource>)arg1;
- (bool)isComplete;
- (bool)isPurgeable;
- (int)responsibleProcess;
- (void)setResponsibleProcess:(int)arg1;
- (MTLResourceAllocationInfo *)sharedAllocationInfo;
- (void)waitUntilComplete;

@end
