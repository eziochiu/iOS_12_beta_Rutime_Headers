/* made by EzioChiu.
 */

@protocol SXComponent <NSObject>

@required

- (SXJSONArray *)additions;
- (SXJSONDictionary *)analytics;
- (<SXComponentAnchor> *)anchor;
- (SXComponentAnimation *)animation;
- (SXJSONArray *)behaviors;
- (SXComponentClassification *)classification;
- (SXComponentConditions *)conditions;
- (unsigned long long)contentRelevance;
- (NSString *)identifier;
- (NSString *)layout;
- (int)role;
- (NSString *)style;
- (unsigned long long)traits;
- (NSString *)type;

@end
