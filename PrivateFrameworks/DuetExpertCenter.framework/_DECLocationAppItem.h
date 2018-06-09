/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECLocationAppItem : _DECAppItem {
    bool  _directionsSupported;
    NSURL * _launchURL;
    NSString * _name;
    NSString * _originatingBundleIdentifier;
    NSString * _shortName;
}

@property (nonatomic, readonly) bool directionsSupported;
@property (nonatomic, readonly, copy) NSURL *launchURL;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *originatingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *shortName;

+ (id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(bool)arg6;
+ (id)locationAppWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(bool)arg6 predictionSources:(long long)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isEqualToDECLocationAppItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)directionsSupported;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 name:(id)arg2 shortName:(id)arg3 launchURL:(id)arg4 originatingBundleIdentifier:(id)arg5 directionsSupported:(bool)arg6 predictionSources:(long long)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEquivalent:(id)arg1;
- (id)launchURL;
- (id)name;
- (id)originatingBundleIdentifier;
- (id)shortName;

@end
