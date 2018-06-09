/* made by EzioChiu.
 */

@protocol TSWPTextSpanningObject <NSObject>

@required

- (bool)isEquivalentToObject:(NSObject<TSWPTextSpanningObject> *)arg1;
- (void)resetTextAttributeUUIDString;
- (NSString *)textAttributeUUIDString;

@optional

- (bool)supportsDeepCopyForUndo;

@end
