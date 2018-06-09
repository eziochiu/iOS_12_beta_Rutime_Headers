/* made by EzioChiu.
 */

@protocol PGGraphIngestScene <NSObject>

@required

- (double)confidence;
- (NSString *)identifier;
- (bool)isReliable;
- (unsigned long long)numberOfAssets;
- (unsigned long long)numberOfHighConfidenceAssets;
- (unsigned long long)numberOfSearchConfidenceAssets;
- (double)relevance;

@end
