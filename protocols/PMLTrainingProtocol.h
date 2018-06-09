/* made by EzioChiu.
 */

@protocol PMLTrainingProtocol <NSObject>

@required

- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 label:(long long)arg2 sessionDescriptor:(PMLSessionDescriptor *)arg3 spotlightReference:(PMLSpotlightReference *)arg4 isInternal:(bool)arg5;
- (void)addSessionWithCovariates:(PMLSparseVector *)arg1 source:(NSData *)arg2 label:(long long)arg3 sessionDescriptor:(PMLSessionDescriptor *)arg4 spotlightReference:(PMLSpotlightReference *)arg5 isInternal:(bool)arg6;
- (void)deleteSessionsWithBundleID:(NSString *)arg1;
- (void)deleteSessionsWithDomainIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (void)deleteSessionsWithIdentifiers:(NSArray *)arg1 bundleID:(NSString *)arg2;
- (bool)modelServerUpdateWithPayload:(NSData *)arg1 error:(id*)arg2;
- (NSDictionary *)planReceivedWithPayload:(NSData *)arg1 error:(id*)arg2;
- (void)trainWhile:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, void*
- (void)trimDb;
- (void)updateSessionsAndLabelForModel:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 15: PMLSessionDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSData *, id /* block */, void*, void, id /* block */, long long, PMLSparseVector *, void*, void*

@end
