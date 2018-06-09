/* made by EzioChiu.
 */

@protocol INParameter <NSObject>

@required

- (unsigned long long)indexForSubKeyPath:(NSString *)arg1;
- (bool)isEqualToParameter:(id <INParameter>)arg1;
- (NSString *)parameterKeyPath;
- (id)parameterValue;
- (id)parameterizedObject;
- (void)setIndex:(unsigned long long)arg1 forSubKeyPath:(NSString *)arg2;

@end
