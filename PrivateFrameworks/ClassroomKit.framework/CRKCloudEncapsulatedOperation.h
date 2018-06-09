/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKCloudEncapsulatedOperation : CRKCloudOperation {
    CATOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) CATOperationQueue *operationQueue;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)arg1;
- (id)initWithOperationQueue:(id)arg1 database:(id)arg2;
- (id)operationQueue;

@end
