/* made by EzioChiu.
 */

@protocol TSKCOOperationEnumerator <NSCopying>

@required

- (TSKCOAbstractOperation<TSKCOTransforming> *)nextOperation;
- (TSKCOAbstractOperation<TSKCOTransforming> *)nextOperationOnAddress:(TSKCOAddress *)arg1;
- (void)reset;

@end
