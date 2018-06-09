/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFNetworkSettingsConfig : NSObject {
    bool  _autoJoinConfigurable;
    bool  _autoJoinEnabled;
    bool  _autoLoginConfigurable;
    bool  _autoLoginEnabled;
    bool  _canRenewLease;
    bool  _cloudSyncable;
    bool  _current;
    NSString * _dhcpClientID;
    NSDate * _dhcpLeaseExpirationDate;
    long long  _dnsConfig;
    NSArray * _dnsSearchDomains;
    NSArray * _dnsSeverAddresses;
    bool  _forgetable;
    NSArray * _healthRecommendations;
    bool  _httpProxyAuthenticationRequired;
    long long  _httpProxyConfig;
    NSString * _httpProxyConfigPAC;
    bool  _httpProxyConfigurable;
    NSString * _httpProxyPassword;
    NSString * _httpProxyServerAddress;
    NSString * _httpProxyServerPort;
    NSString * _httpProxyUsername;
    NSString * _ipv4Address;
    NSString * _ipv4AddressManual;
    long long  _ipv4Config;
    NSString * _ipv4RouterAddress;
    NSString * _ipv4RouterAddressManual;
    NSString * _ipv4SubnetMask;
    NSString * _ipv4SubnetMaskManual;
    NSString * _ipv6AddressManual;
    NSArray * _ipv6Addresses;
    long long  _ipv6Config;
    NSString * _ipv6PrefixLengthManual;
    NSArray * _ipv6PrefixLengths;
    NSString * _ipv6RouterAddress;
    NSString * _ipv6RouterAddressManual;
    bool  _joinable;
    bool  _manageable;
    NSString * _ssid;
}

@property bool autoJoinConfigurable;
@property bool autoJoinEnabled;
@property bool autoLoginConfigurable;
@property bool autoLoginEnabled;
@property bool canRenewLease;
@property bool cloudSyncable;
@property bool current;
@property (copy) NSString *dhcpClientID;
@property (copy) NSDate *dhcpLeaseExpirationDate;
@property long long dnsConfig;
@property (copy) NSArray *dnsSearchDomains;
@property (retain) NSArray *dnsSeverAddresses;
@property bool forgetable;
@property (retain) NSArray *healthRecommendations;
@property bool httpProxyAuthenticationRequired;
@property long long httpProxyConfig;
@property (copy) NSString *httpProxyConfigPAC;
@property bool httpProxyConfigurable;
@property (copy) NSString *httpProxyPassword;
@property (copy) NSString *httpProxyServerAddress;
@property (copy) NSString *httpProxyServerPort;
@property (copy) NSString *httpProxyUsername;
@property (copy) NSString *ipv4Address;
@property (copy) NSString *ipv4AddressManual;
@property long long ipv4Config;
@property (copy) NSString *ipv4RouterAddress;
@property (copy) NSString *ipv4RouterAddressManual;
@property (copy) NSString *ipv4SubnetMask;
@property (copy) NSString *ipv4SubnetMaskManual;
@property (copy) NSString *ipv6AddressManual;
@property (retain) NSArray *ipv6Addresses;
@property long long ipv6Config;
@property (copy) NSString *ipv6PrefixLengthManual;
@property (retain) NSArray *ipv6PrefixLengths;
@property (copy) NSString *ipv6RouterAddress;
@property (copy) NSString *ipv6RouterAddressManual;
@property bool joinable;
@property bool manageable;
@property (nonatomic, copy) NSString *ssid;

// Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI

- (void).cxx_destruct;
- (bool)autoJoinConfigurable;
- (bool)autoJoinEnabled;
- (bool)autoLoginConfigurable;
- (bool)autoLoginEnabled;
- (bool)canRenewLease;
- (id)changesBetweenConfig:(id)arg1;
- (bool)cloudSyncable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)current;
- (id)dhcpClientID;
- (id)dhcpLeaseExpirationDate;
- (long long)dnsConfig;
- (id)dnsSearchDomains;
- (id)dnsSeverAddresses;
- (bool)forgetable;
- (id)healthRecommendations;
- (bool)httpProxyAuthenticationRequired;
- (long long)httpProxyConfig;
- (id)httpProxyConfigPAC;
- (bool)httpProxyConfigurable;
- (id)httpProxyPassword;
- (id)httpProxyServerAddress;
- (id)httpProxyServerPort;
- (id)httpProxyUsername;
- (id)init;
- (id)ipv4Address;
- (id)ipv4AddressManual;
- (long long)ipv4Config;
- (id)ipv4RouterAddress;
- (id)ipv4RouterAddressManual;
- (id)ipv4SubnetMask;
- (id)ipv4SubnetMaskManual;
- (id)ipv6AddressManual;
- (id)ipv6Addresses;
- (long long)ipv6Config;
- (id)ipv6PrefixLengthManual;
- (id)ipv6PrefixLengths;
- (id)ipv6RouterAddress;
- (id)ipv6RouterAddressManual;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkSettingsConfig:(id)arg1;
- (bool)joinable;
- (bool)manageable;
- (void)setAutoJoinConfigurable:(bool)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setAutoLoginConfigurable:(bool)arg1;
- (void)setAutoLoginEnabled:(bool)arg1;
- (void)setCanRenewLease:(bool)arg1;
- (void)setCloudSyncable:(bool)arg1;
- (void)setCurrent:(bool)arg1;
- (void)setDhcpClientID:(id)arg1;
- (void)setDhcpLeaseExpirationDate:(id)arg1;
- (void)setDnsConfig:(long long)arg1;
- (void)setDnsSearchDomains:(id)arg1;
- (void)setDnsSeverAddresses:(id)arg1;
- (void)setForgetable:(bool)arg1;
- (void)setHealthRecommendations:(id)arg1;
- (void)setHttpProxyAuthenticationRequired:(bool)arg1;
- (void)setHttpProxyConfig:(long long)arg1;
- (void)setHttpProxyConfigPAC:(id)arg1;
- (void)setHttpProxyConfigurable:(bool)arg1;
- (void)setHttpProxyPassword:(id)arg1;
- (void)setHttpProxyServerAddress:(id)arg1;
- (void)setHttpProxyServerPort:(id)arg1;
- (void)setHttpProxyUsername:(id)arg1;
- (void)setIpv4Address:(id)arg1;
- (void)setIpv4AddressManual:(id)arg1;
- (void)setIpv4Config:(long long)arg1;
- (void)setIpv4RouterAddress:(id)arg1;
- (void)setIpv4RouterAddressManual:(id)arg1;
- (void)setIpv4SubnetMask:(id)arg1;
- (void)setIpv4SubnetMaskManual:(id)arg1;
- (void)setIpv6AddressManual:(id)arg1;
- (void)setIpv6Addresses:(id)arg1;
- (void)setIpv6Config:(long long)arg1;
- (void)setIpv6PrefixLengthManual:(id)arg1;
- (void)setIpv6PrefixLengths:(id)arg1;
- (void)setIpv6RouterAddress:(id)arg1;
- (void)setIpv6RouterAddressManual:(id)arg1;
- (void)setJoinable:(bool)arg1;
- (void)setManageable:(bool)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;
- (bool)validIPv4Configuration;
- (bool)validIPv6Configuration;
- (bool)validProxyConfiguration;

// Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit

- (void)populateDNS:(id)arg1;
- (void)populateIPV4:(id)arg1;
- (void)populateIPV6:(id)arg1;
- (void)populateProxy:(id)arg1;

@end
