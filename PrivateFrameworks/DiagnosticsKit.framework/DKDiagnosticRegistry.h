/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticRegistry : NSObject <DKExtensionRegistry> {
    NSMutableDictionary * _diagnosticLookup;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *diagnosticLookup;
@property (nonatomic, readonly) NSArray *diagnostics;
@property (nonatomic, readonly) Class extensionClass;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) Class responseObjectClass;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)adapterForIdentifier:(id)arg1;
- (void)addExtensionAdapter:(id)arg1;
- (id)diagnosticForIdentifier:(id)arg1;
- (id)diagnosticLookup;
- (id)diagnostics;
- (void)enumerateExtensionAdaptersWithBlock:(id /* block */)arg1;
- (Class)extensionClass;
- (id)init;
- (Class)responseObjectClass;
- (void)setDiagnosticLookup:(id)arg1;

@end
