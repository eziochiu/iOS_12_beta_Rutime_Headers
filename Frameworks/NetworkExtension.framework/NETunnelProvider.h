/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling> {
    NSArray * _appRules;
    bool  _onDemandEnabled;
    NEVPNProtocol * _protocolConfiguration;
    bool  _reasserting;
}

@property (retain) NSArray *appRules;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool onDemandEnabled;
@property (retain) NEVPNProtocol *protocolConfiguration;
@property bool reasserting;
@property (readonly) long long routingMethod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appRules;
- (void)handleAppMessage:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)onDemandEnabled;
- (id)protocolConfiguration;
- (bool)reasserting;
- (long long)routingMethod;
- (void)setAppRules:(id)arg1;
- (void)setOnDemandEnabled:(bool)arg1;
- (void)setProtocolConfiguration:(id)arg1;
- (void)setReasserting:(bool)arg1;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(id /* block */)arg2;

@end
