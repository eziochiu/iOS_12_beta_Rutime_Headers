/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDiscoveryTaskGroup : CoreDAVTaskGroup <CoreDAVOptionsTaskDelegate, CoreDAVPropFindTaskDelegate> {
    bool  _didReceiveAuthenticationError;
    <CoreDAVAccountInfoProvider> * _discoveredAccountInfo;
    NSMutableArray * _discoveries;
    NSArray * _httpPorts;
    NSString * _httpServiceString;
    NSArray * _httpsPorts;
    NSString * _httpsServiceString;
    NSArray * _potentialContextPaths;
    NSString * _requiredComplianceClass;
    bool  _shouldBailEarly;
    NSString * _wellKnownPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CoreDAVDiscoveryTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didReceiveAuthenticationError;
@property (nonatomic, retain) <CoreDAVAccountInfoProvider> *discoveredAccountInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *potentialContextPaths;
@property (nonatomic) bool shouldBailEarly;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *wellKnownPath;

- (void).cxx_destruct;
- (void)addToDiscoveryArray:(id*)arg1 discovery:(id)arg2;
- (id)allDiscoveryPaths:(id)arg1;
- (id)allDiscoveryPorts:(id)arg1 withScheme:(id)arg2;
- (void)cancelTaskGroup;
- (id)cleanedStringsFromResponseHeaders:(id)arg1 forHeader:(id)arg2;
- (void)completeDiscovery:(id)arg1 error:(id)arg2;
- (void)completeOptionsTask:(id)arg1 error:(id)arg2;
- (bool)didReceiveAuthenticationError;
- (id)discoveredAccountInfo;
- (id)extractPrincipalURLFromPropFindTask:(id)arg1 error:(id*)arg2;
- (void)getDiscoveryStatus:(id)arg1 priorFailed:(id*)arg2 subsequentFailed:(id*)arg3 priorIncomplete:(id*)arg4 subsequentIncomplete:(id*)arg5 priorSuccess:(id*)arg6 subsequentSuccess:(id*)arg7;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPath:(id)arg7 potentialContextPaths:(id)arg8 requiredComplianceClass:(id)arg9;
- (id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 httpPorts:(id)arg3 httpsPorts:(id)arg4 httpServiceString:(id)arg5 httpsServiceString:(id)arg6 wellKnownPaths:(id)arg7 requiredComplianceClass:(id)arg8;
- (void)noteDefinitiveAuthFailureFromTask:(id)arg1;
- (void)optionsTask:(id)arg1 error:(id)arg2;
- (id)potentialContextPaths;
- (id)propFindProperties;
- (void)propFindTaskFinished:(id)arg1;
- (void)setDidReceiveAuthenticationError:(bool)arg1;
- (void)setDiscoveredAccountInfo:(id)arg1;
- (void)setPotentialContextPaths:(id)arg1;
- (void)setShouldBailEarly:(bool)arg1;
- (void)setWellKnownPath:(id)arg1;
- (id)setupDiscoveries:(id)arg1 withSchemes:(id)arg2;
- (bool)shouldBailEarly;
- (void)srvLookupTask:(id)arg1 error:(id)arg2;
- (void)startOptionsTask:(id)arg1;
- (void)startPropfindTask:(id)arg1;
- (void)startSRVLookup:(id)arg1 serviceString:(id)arg2;
- (void)startTaskGroup;
- (void)startWellKnownFallbackHeadTask:(id)arg1 withURL:(id)arg2;
- (void)startWellKnownLocationTask:(id)arg1 withURL:(id)arg2;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)wellKnownPath;

@end
