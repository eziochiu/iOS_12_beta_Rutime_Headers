/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEProxyConfigurationNetworkAgent : NENetworkAgent {
    NSData * _agentData;
}

@property (retain) NSData *agentData;

+ (id)agentDomain;
+ (id)agentFromData:(id)arg1;
+ (id)agentType;

- (void).cxx_destruct;
- (id)agentData;
- (id)agentDescription;
- (id)copyAgentData;
- (id)initWithProxyConfiguration:(id)arg1;
- (void)setAgentData:(id)arg1;

@end
