/* made by EzioChiu.
 */

@protocol SXActionSerializationManager <NSObject>

@required

- (void)registerSerializer:(id <SXActionSerializer>)arg1 actionType:(Class)arg2;

@end
