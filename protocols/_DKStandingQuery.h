/* made by EzioChiu.
 */

@protocol _DKStandingQuery

@required

- (void)executeWithStorage:(_DKKnowledgeStorage *)arg1;
- (NSObject *)fetchResult;
- (NSString *)queryIdentifier;
- (void)setQueryIdentifier:(NSString *)arg1;

@end
