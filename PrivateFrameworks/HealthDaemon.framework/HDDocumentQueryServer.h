/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDocumentQueryServer : HDQueryServer {
    NSArray * _authorizedSamples;
    unsigned long long  _clientSampleIndex;
    bool  _includeDocumentData;
    unsigned long long  _maxResults;
    NSArray * _sortDescriptors;
    bool  _suspended;
}

@property (nonatomic, readonly) bool includeDocumentData;
@property (nonatomic, readonly) unsigned long long maxResults;
@property (nonatomic, readonly) NSArray *sortDescriptors;

+ (Class)queryClass;
+ (id)requiredEntitlements;

- (void).cxx_destruct;
- (bool)_deliverAuthorizedSamplesToClient:(id)arg1 errorOut:(id*)arg2;
- (bool)_deliverOneSample:(id)arg1 client:(id)arg2 errorOut:(id*)arg3;
- (void)_queue_start;
- (void)authorizeSamples:(id)arg1 completion:(id /* block */)arg2;
- (bool)includeDocumentData;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 profile:(id)arg4 delegate:(id)arg5;
- (unsigned long long)maxResults;
- (id)samplesBeforeAuthorizationWithSortDescriptors:(id)arg1 errorOut:(id*)arg2;
- (id)sortDescriptors;

@end
