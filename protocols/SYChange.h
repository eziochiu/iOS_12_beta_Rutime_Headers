/* made by EzioChiu.
 */

@protocol SYChange <NSObject>

@required

- (long long)changeType;
- (NSString *)objectIdentifier;
- (NSString *)sequencer;

@end
