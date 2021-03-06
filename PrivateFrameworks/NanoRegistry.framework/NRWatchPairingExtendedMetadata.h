/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {
    long long  _chipID;
    bool  _postFailsafeObliteration;
    NSString * _productType;
}

@property (nonatomic) long long chipID;
@property (nonatomic) bool postFailsafeObliteration;
@property (nonatomic, retain) NSString *productType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)chipID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)postFailsafeObliteration;
- (id)productType;
- (void)setChipID:(long long)arg1;
- (void)setPostFailsafeObliteration:(bool)arg1;
- (void)setProductType:(id)arg1;

@end
