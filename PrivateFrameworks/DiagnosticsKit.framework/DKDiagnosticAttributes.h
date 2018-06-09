/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

@interface DKDiagnosticAttributes : NSObject <DKExtensionAttributes> {
    struct NSString { Class x1; } * _bundleIdentifier;
    NSExtension * _extension;
    NSNumber * _freeSpaceRequired;
    bool  _headless;
    NSNumber * _identifier;
    NSString * _name;
    bool  _requiresUnlock;
    bool  _restricted;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSExtension *extension;
@property (nonatomic, readonly) NSNumber *freeSpaceRequired;
@property (getter=isHeadless, nonatomic, readonly) bool headless;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) bool requiresUnlock;
@property (getter=isRestricted, nonatomic, readonly) bool restricted;
@property (nonatomic, readonly) NSString *version;

- (void).cxx_destruct;
- (struct NSString { Class x1; }*)bundleIdentifier;
- (id)extension;
- (id)freeSpaceRequired;
- (id)identifier;
- (id)initWithExtension:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 freeSpaceRequired:(id)arg3 name:(id)arg4 headless:(bool)arg5;
- (bool)isHeadless;
- (bool)isRestricted;
- (id)name;
- (bool)requiresUnlock;
- (id)version;

@end
