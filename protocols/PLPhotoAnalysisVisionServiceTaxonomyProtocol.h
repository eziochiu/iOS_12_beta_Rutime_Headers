/* made by EzioChiu.
 */

@protocol PLPhotoAnalysisVisionServiceTaxonomyProtocol

@required

- (void)localizedLabelForSceneIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: unsigned int, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)pingSceneWorkerWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sceneNodesForSceneIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)searchResultNodesForSceneClassifications:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)searchResultNodesForSceneIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
