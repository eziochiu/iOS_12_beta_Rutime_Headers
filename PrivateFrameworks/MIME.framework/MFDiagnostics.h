/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {
    NSLock * _diagnosticLock;
    MFWeakSet * _diagnosticsGenerators;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void)addDiagnosticsGenerator:(id)arg1;
- (id)copyDiagnosticInformation;
- (void)dealloc;
- (id)init;
- (void)removeDiagnosticsGenerator:(id)arg1;

@end
