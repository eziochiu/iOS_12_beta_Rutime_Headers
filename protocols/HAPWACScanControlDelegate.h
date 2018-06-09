/* made by EzioChiu.
 */

@protocol HAPWACScanControlDelegate <NSObject>

@required

- (void)notifyDelegatesOfWACCompletionWithIdentifier:(NSString *)arg1 error:(NSError *)arg2;
- (void)startWACScanWithIdentifier:(NSString *)arg1;
- (void)stopWACScan;

@end
