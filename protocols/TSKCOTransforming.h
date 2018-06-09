/* made by EzioChiu.
 */

@protocol TSKCOTransforming

@required

- (TSKCOAbstractOperation<TSKCOTransforming> *)transformDynamicByAnyOperation:(TSKCOAbstractOperation<TSKCOTransforming> *)arg1 byHigherPriority:(bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOIdPlacementBaseOperation *)transformIdPlacementBaseOperation:(TSKCOIdPlacementBaseOperation *)arg1 isHigherPriority:(bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOReplaceRangeOperation *)transformReplaceRangeOperation:(TSKCOReplaceRangeOperation *)arg1 isHigherPriority:(bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOUpdateIdOperation *)transformUpdateIdOperation:(TSKCOUpdateIdOperation *)arg1 isHigherPriority:(bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;
- (TSKCOUpdateRangeOperation *)transformUpdateRangeOperation:(TSKCOUpdateRangeOperation *)arg1 isHigherPriority:(bool)arg2 history:(TSKCOOperationTransformHistory *)arg3;

@end
