/* made by EzioChiu.
 */

@protocol STAXCustomRotorItemProvider <NSObject>

@required

- (NSSet *)supportedCustomRotors;

@optional

- (NSOrderedSet *)itemsForCustomRotor:(UIAccessibilityCustomRotor *)arg1;

@end
