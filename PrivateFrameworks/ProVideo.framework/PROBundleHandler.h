/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PROBundleHandler : NSObject <PROAPIAccessing, PROPlugInDelegate, PROPlugInFirewallErrorHandler> {
    PROPlugInFirewall * apiAccessPoint;
    <PROVersionedAPIAccess> * apiManager;
    NSBundle * bundle;
    struct { 
        unsigned int canCreateInstances : 1; 
        unsigned int askedAboutCreatingInstances : 1; 
        unsigned int  : 30; 
    }  bundleFlags;
    <PROBundleHandlerDelegate> * delegate;
    NSMutableDictionary * groups;
    NSMutableArray * plugIns;
    <PKPlugIn> * pluginKitPlug;
    <PROPlugInRegistering> * principalClassInstance;
    NSArray * requestedProtocols;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_plugInHasReservedUUID:(id)arg1;
- (void)addPlugIn:(id)arg1;
- (id)apiForProtocol:(id)arg1;
- (id)apiManager;
- (id)apiManagerForPlugInInstances;
- (void)dealloc;
- (id)delegate;
- (id)groupsDictionary;
- (id)initWithBundle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBundleHandler:(id)arg1;
- (bool)isPrincipalClassAvailable;
- (void)plugIn:(id)arg1 didError:(id)arg2;
- (void)plugInCouldNotInitialize:(id)arg1;
- (void)plugInFirewall:(id)arg1 receivedBadMessage:(SEL)arg2;
- (id)plugInGroupWithUUID:(struct __CFUUID { }*)arg1;
- (bool)plugInShouldLoadPlugInInstanceForTheFirstTime:(id)arg1;
- (id)plugIns;
- (id)pluginKitPlug;
- (id)principalClassInstance;
- (void)registerPlugIns;
- (void)reportError:(id)arg1;
- (void)setAPIManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPluginKitPlug:(id)arg1;

@end
