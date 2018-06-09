/* made by EzioChiu.
 */

@protocol BKSEventFocusManagerClientInterface <NSObject>

@required

- (void)focusedDeferralPropertiesUpdatedWithProperties:(NSSet *)arg1;
- (void)touchDetachedForIdentifier:(unsigned int)arg1 context:(unsigned int)arg2 pid:(int)arg3;
- (void)touchUpOccuredForIdentifier:(unsigned int)arg1 detached:(bool)arg2 context:(unsigned int)arg3 pid:(int)arg4;

@end
