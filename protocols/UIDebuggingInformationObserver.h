/* made by EzioChiu.
 */

@protocol UIDebuggingInformationObserver <NSObject>

@required

- (void)debuggingPropertyForKey:(NSString *)arg1 changedToValue:(NSValue *)arg2;

@end
