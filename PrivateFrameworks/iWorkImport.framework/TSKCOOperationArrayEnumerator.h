/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOOperationArrayEnumerator : NSObject <TSKCOIntermediateOperationEnumerator> {
    unsigned long long  _nextIndex;
    NSMutableArray * _operationArray;
}

@property (nonatomic, readonly) bool hasOperations;

- (void).cxx_destruct;
- (void)appendOperation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasOperations;
- (id)initWithOperationEnumerator:(id)arg1;
- (id)nextOperation;
- (id)nextOperationOnAddress:(id)arg1;
- (void)replaceOperation:(id)arg1;
- (void)reset;

@end
