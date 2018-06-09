/* made by EzioChiu.
 */

@protocol DTKPTriggerCounterAllocatorProvider <NSObject>

@required

- (DTKPCPUCounterAllocator *)counterAllocator;
- (DTKPCPUCounterAllocator *)queryCounterAllocator;

@end
