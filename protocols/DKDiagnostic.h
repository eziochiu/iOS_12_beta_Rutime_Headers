/* made by EzioChiu.
 */

@protocol DKDiagnostic <NSObject>

@required

- (bool)isCancelled;
- (bool)isFinished;
- (DKMutableDiagnosticResult *)result;
- (void)setFinished:(bool)arg1;
- (void)setResult:(DKMutableDiagnosticResult *)arg1;
- (void)start;

@optional

- (void)cancel;
- (void)setupWithInputs:(id <DKDiagnosticInputs>)arg1 responder:(id <DKResponder>)arg2;
- (void)teardown;

@end
