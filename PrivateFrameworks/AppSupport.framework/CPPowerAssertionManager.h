/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPPowerAssertionManager : NSObject {
    struct __CFDictionary { } * _contextToGroupIdentifier;
    NSCountedSet * _contexts;
    <CPPowerAssertionManagerDelegate> * _delegate;
    NSMutableDictionary * _groupIdentifierToContexts;
    NSCountedSet * _heldAsideContexts;
    NSMutableSet * _heldAsideGroupIdentifiers;
    NSString * _uuid;
}

@property <CPPowerAssertionManagerDelegate> *delegate;
@property (readonly) NSString *uuid;

+ (id)sharedInstance;

- (void)_releaseAssertions;
- (void)_retainAssertions;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)init;
- (void)releasePowerAssertionWithContext:(id)arg1;
- (void)reretainPowerAssertionsForGroupIdentifier:(id)arg1;
- (unsigned long long)retainCountForContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1;
- (void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setUUIDPrefix:(id)arg1;
- (void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1;
- (id)uuid;

@end
