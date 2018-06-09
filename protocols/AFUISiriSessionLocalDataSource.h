/* made by EzioChiu.
 */

@protocol AFUISiriSessionLocalDataSource <NSObject>

@required

- (NSArray *)bulletinsForSiriSession:(AFUISiriSession *)arg1;
- (NSArray *)contextAppInfosForSiriSession:(AFUISiriSession *)arg1;
- (unsigned long long)lockStateForSiriSession:(AFUISiriSession *)arg1;

@end
