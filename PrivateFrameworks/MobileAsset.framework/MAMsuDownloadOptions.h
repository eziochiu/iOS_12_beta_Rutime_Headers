/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAMsuDownloadOptions : MADownloadOptions {
    long long  _delayPeriod;
    NSString * _requestedProductVersion;
    bool  _supervised;
}

@property (nonatomic) long long delayPeriod;
@property (nonatomic, retain) NSString *requestedProductVersion;
@property (nonatomic) bool supervised;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (long long)delayPeriod;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)logOptions;
- (id)requestedProductVersion;
- (void)setDelayPeriod:(long long)arg1;
- (void)setRequestedProductVersion:(id)arg1;
- (void)setSupervised:(bool)arg1;
- (bool)supervised;

@end
