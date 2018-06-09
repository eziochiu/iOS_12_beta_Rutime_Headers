/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICMutableNetworkConstraints : ICNetworkConstraints

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setShouldAllowData:(bool)arg1 forNetworkType:(long long)arg2;
- (void)setShouldAllowDataForAllNetworkTypes:(bool)arg1;
- (void)setShouldAllowDataForCellularNetworkTypes:(bool)arg1;
- (void)setShouldAllowDataForWiFiNetworkTypes:(bool)arg1;
- (void)setSizeLimit:(id)arg1 forNetworkType:(long long)arg2;

@end
