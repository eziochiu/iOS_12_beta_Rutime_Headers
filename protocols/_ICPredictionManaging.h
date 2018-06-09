/* made by EzioChiu.
 */

@protocol _ICPredictionManaging <NSObject>

@required

- (void)hibernate;
- (NSArray *)lastCachedResultWithInitialCharacters:(NSString *)arg1;
- (void)predictedItemSelected:(NSString *)arg1;
- (void)reset;
- (NSArray *)searchForMeCardEmailAddresses;
- (NSArray *)searchForMeCardRegions;
- (NSArray *)searchWithTriggers:(NSArray *)arg1 application:(NSString *)arg2 recipient:(NSString *)arg3 localeIdentifier:(NSString *)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
- (void)warmUp;

@end
