/* made by EzioChiu.
 */

@protocol _DPStringRandomizer

@required

- (NSArray *)randomizeBitValues:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeStrings:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeWords:(NSArray *)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(NSString *)arg3;

@end
