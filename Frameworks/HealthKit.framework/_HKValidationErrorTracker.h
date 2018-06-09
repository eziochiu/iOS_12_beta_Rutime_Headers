/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKValidationErrorTracker : NSObject {
    long long  _errorCount;
    NSMutableString * _errorMessage;
}

@property (nonatomic) long long errorCount;
@property (nonatomic, retain) NSMutableString *errorMessage;

- (void).cxx_destruct;
- (long long)errorCount;
- (id)errorMessage;
- (id)init;
- (void)setErrorCount:(long long)arg1;
- (void)setErrorMessage:(id)arg1;

@end
