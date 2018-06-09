/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMObjectMergeOperations : NSObject {
    NSMutableArray * _operations;
}

@property (nonatomic, retain) NSMutableArray *operations;

- (void).cxx_destruct;
- (void)_addOperation:(id)arg1;
- (void)_executeOperationsOnQueue:(id)arg1;
- (id)init;
- (id)operations;
- (void)setOperations:(id)arg1;

@end
