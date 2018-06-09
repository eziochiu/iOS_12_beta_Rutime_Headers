/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMMutableAssistantAccessControl : HMAssistantAccessControl

@property (copy) NSArray *accessories;
@property bool allowUnauthenticatedRequests;
@property (getter=isEnabled) bool enabled;

- (id)accessories;
- (void)addAccessory:(id)arg1;
- (bool)allowUnauthenticatedRequests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEnabled;
- (unsigned long long)options;
- (void)removeAccessory:(id)arg1;
- (void)setAccessories:(id)arg1;
- (void)setAllowUnauthenticatedRequests:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setOptions:(unsigned long long)arg1;

@end
