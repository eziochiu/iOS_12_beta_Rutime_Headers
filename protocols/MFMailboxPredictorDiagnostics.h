/* made by EzioChiu.
 */

@protocol MFMailboxPredictorDiagnostics <NSObject>

@required

- (NSString *)debugOutput;
- (NSDictionary *)modelInfo;

@end
