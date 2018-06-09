/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface _LSConcurrentQueuesList : NSObject {
    NSMutableArray * _identifiers;
    NSMutableArray * _queues;
}

- (void)addIdentifier:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)getQueueAndIndexForIdentifier:(id)arg1 outIndex:(unsigned long long*)arg2;
- (id)initWithWidth:(long long)arg1;
- (void)removeIdentifier:(id)arg1 fromIndex:(unsigned long long)arg2;

@end
