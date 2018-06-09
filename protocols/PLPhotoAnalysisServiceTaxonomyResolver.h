/* made by EzioChiu.
 */

@protocol PLPhotoAnalysisServiceTaxonomyResolver

@required

- (NSDictionary *)sceneNodesForSceneIdentifiers:(NSArray *)arg1 error:(id*)arg2;
- (NSString *)sceneTaxonomyHash;
- (NSDictionary *)searchResultNodesForSceneClassifications:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)searchResultNodesForSceneIdentifiers:(NSArray *)arg1 error:(id*)arg2;

@end
