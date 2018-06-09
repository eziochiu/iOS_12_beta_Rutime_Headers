/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECalcTimeoutObject : NSObject {
    NSString * _blockingIdentifier;
    double  _timeoutInterval;
}

@property (readonly) NSString *blockingIdentifier;
@property (readonly) double timeoutInterval;

- (void).cxx_destruct;
- (id)blockingIdentifier;
- (id)initWithTimeout:(double)arg1;
- (double)timeoutInterval;

@end
