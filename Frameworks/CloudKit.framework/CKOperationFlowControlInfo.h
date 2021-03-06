/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationFlowControlInfo : NSObject {
    NSDate * _flowControlEndDate;
    NSError * _lastError;
}

@property (nonatomic, retain) NSDate *flowControlEndDate;
@property (nonatomic, retain) NSError *lastError;

+ (id)flowControlInfoWithEndDate:(id)arg1 error:(id)arg2;

- (void).cxx_destruct;
- (id)flowControlEndDate;
- (id)lastError;
- (void)setFlowControlEndDate:(id)arg1;
- (void)setLastError:(id)arg1;

@end
