/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKReporterController : NSObject <DKReporter, DKReporter_Internal, NSExtensionRequestHandling> {
    DKComponentIdentity * _componentIdentity;
    DKReporterContext * _context;
}

@property (nonatomic, readonly) DKComponentIdentity *componentIdentity;
@property (nonatomic, retain) DKReporterContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)componentIdentity;
- (id)context;
- (bool)isPresent;
- (void)populateAttributes:(struct NSMutableDictionary { Class x1; }*)arg1;
- (void)setComponentIdentity:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setupWithContext:(id)arg1;
- (void)start;

@end
