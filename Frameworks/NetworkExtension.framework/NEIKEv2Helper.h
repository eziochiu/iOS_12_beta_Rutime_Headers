/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIKEv2Helper : NSObject

+ (id)createChildConfigFromProtocol:(id)arg1;
+ (id)createDNSSettingsFromTunnelConfig:(id)arg1;
+ (id)createIKEConfigFromProtocol:(id)arg1 ifIndex:(unsigned int)arg2 options:(id)arg3 serverAddress:(id)arg4 enableBlackHoleDetection:(bool)arg5;
+ (id)createIPv4SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2;
+ (id)createIPv6SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2;
+ (id)createRouteArrayFromTunnelConfig:(id)arg1 childConfig:(id)arg2 gatewayAddress:(id)arg3 isIPv4:(bool)arg4;
+ (id)getAddressFromTunnelConfig:(id)arg1 key:(id)arg2 valueType:(id)arg3 outputArray:(id)arg4;
+ (bool)getBoolFromTunnelConfig:(id)arg1 key:(id)arg2;
+ (id)getDNSDomainsFromTunnelConfig:(id)arg1;
+ (bool)getDPDAttributesForMode:(long long)arg1 isWakeUp:(bool)arg2 isNAT:(bool)arg3 retry:(unsigned int*)arg4 timeout:(unsigned long long*)arg5 frequency:(unsigned int*)arg6;
+ (id)getIdentifierType:(id)arg1;
+ (bool)getStatusFromNotification:(unsigned int)arg1 status:(int*)arg2 isConfig:(bool*)arg3 isRedirected:(bool*)arg4 isSocketError:(bool*)arg5 isAdditionalServerAddresses:(bool*)arg6;

@end
