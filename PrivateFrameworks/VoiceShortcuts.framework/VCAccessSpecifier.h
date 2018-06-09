/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
 */

@interface VCAccessSpecifier : NSObject {
    unsigned long long  _accessLevel;
    NSString * _associatedAppBundleIdentifier;
    NSString * _processIdentifier;
}

@property (nonatomic, readonly) unsigned long long accessLevel;
@property (nonatomic, readonly, copy) NSString *associatedAppBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *processIdentifier;

+ (id)accessSpecifierAppropriateForXPCConnection:(id)arg1;
+ (id)accessSpecifierFilteredForAssociatedAppBundleIdentifier:(id)arg1;
+ (id)accessSpecifierUnrestricted;
+ (id)accessSpecifierUnrestrictedWithProcessIdentifier:(int)arg1;
+ (id)accessSpecifierWithNoAccess;
+ (void)initialize;

- (void).cxx_destruct;
- (unsigned long long)accessLevel;
- (bool)allowWriteAccessForBundleIdentifier:(id)arg1;
- (id)associatedAppBundleIdentifier;
- (id)debugDescription;
- (id)initWithAccessLevel:(unsigned long long)arg1 associatedAppBundleIdentifier:(id)arg2 processIdentifier:(id)arg3;
- (id)processIdentifier;

@end
