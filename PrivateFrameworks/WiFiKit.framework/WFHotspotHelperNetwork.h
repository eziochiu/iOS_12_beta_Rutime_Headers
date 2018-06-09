/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFHotspotHelperNetwork : NSObject {
    NSString * _bundleIdentifier;
    NSString * _label;
    NSString * _password;
    NSString * _ssid;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)description;
- (id)initWithSSID:(id)arg1 bundleIdentifier:(id)arg2 password:(id)arg3 label:(id)arg4;
- (id)label;
- (id)password;
- (void)setBundleIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)ssid;

@end
