/* made by EzioChiu.
 */

@protocol SXWebContentLogger <NSObject>

@required

- (void)bindValue:(NSString *)arg1 forKey:(NSString *)arg2;
- (void)log:(NSString *)arg1;

@end
