/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHealthManager : NSObject {
    NSSet * _currentNetworkIssues;
    NWPathEvaluator * _evaluator;
    WFInterface * _interface;
    WFNetworkScanRecord * _network;
    WFNetworkProfile * _profile;
}

@property (nonatomic, readonly) bool currentNetworkHasNoInternetConnection;
@property (nonatomic, retain) NSSet *currentNetworkIssues;
@property (nonatomic, retain) NWPathEvaluator *evaluator;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, retain) WFNetworkProfile *profile;

- (void).cxx_destruct;
- (void)_updateCurrentNetworkIssues;
- (void)currentNetworkDidChange:(id)arg1;
- (bool)currentNetworkHasNoInternetConnection;
- (id)currentNetworkIssues;
- (void)dealloc;
- (id)evaluator;
- (id)initWithInterface:(id)arg1;
- (id)interface;
- (void)linkQualityDidChange:(id)arg1;
- (id)network;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)profile;
- (void)setCurrentNetworkIssues:(id)arg1;
- (void)setEvaluator:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setProfile:(id)arg1;

@end
