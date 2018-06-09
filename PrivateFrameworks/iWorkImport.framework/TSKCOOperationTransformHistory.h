/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKCOOperationTransformHistory : NSObject {
    NSMutableArray * _history;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)description;
- (void)didTransformOperationWithResult:(id)arg1 token:(id)arg2;
- (id)init;
- (id)willTransformOperation:(id)arg1 withOperation:(id)arg2;

@end
