/* made by EzioChiu.
 */

@protocol DNDSModeAssertionProvider <NSObject>

@required

- (NSArray *)allModeAssertionsWithError:(id*)arg1;
- (DNDSModeAssertion *)assertionWithUUID:(NSUUID *)arg1 error:(id*)arg2;

@end
