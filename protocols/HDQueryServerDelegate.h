/* made by EzioChiu.
 */

@protocol HDQueryServerDelegate <HDTaskServerDelegate>

@required

- (unsigned int)clientSDKVersionForQueryServer:(HDQueryServer *)arg1;
- (void)queryServer:(void *)arg1 requestsAuthorizationForSamples:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: HDQueryServer *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)queryServer:(void *)arg1 shouldStartWithCompletion:(void *)arg2; // needs 2 arg types, found 8: HDQueryServer *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)queryServerDidFinish:(HDQueryServer *)arg1;
- (HDReadAuthorizationStatus *)readAuthorizationStatusForQueryServer:(HDQueryServer *)arg1 type:(HKObjectType *)arg2 error:(id*)arg3;

@end
