/* made by EzioChiu.
 */

@protocol PLPhotoAnalysisVisionServiceSceneClassificationProtocol

@required

- (void)performSceneClassificationOnAssetWithLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)pingSceneWorkerWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
