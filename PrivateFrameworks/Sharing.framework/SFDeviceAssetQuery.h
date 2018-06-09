/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFDeviceAssetQuery : NSObject {
    NSDictionary * _additionalQueryParameters;
    NSString * _color;
    NSString * _colorCoverGlass;
    NSString * _colorHousing;
    bool  _forEngagement;
    bool  _legacyFormats;
    NSString * _mappedMarketingProductNumber;
    NSString * _mappedProductType;
    NSString * _marketingProductNumber;
    NSString * _productType;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    unsigned long long  _version;
}

@property (nonatomic, readonly) NSDictionary *additionalQueryParameters;
@property (nonatomic, readonly) NSString *color;
@property (nonatomic, readonly) NSString *colorCoverGlass;
@property (nonatomic, readonly) NSString *colorHousing;
@property (nonatomic, readonly) bool forEngagement;
@property (nonatomic, readonly) bool legacyFormats;
@property (nonatomic, retain) NSString *mappedMarketingProductNumber;
@property (nonatomic, retain) NSString *mappedProductType;
@property (nonatomic, readonly) NSString *marketingProductNumber;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *stringIdentifier;
@property (nonatomic, readonly) struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*ucat;
@property (nonatomic, readonly) unsigned long long version;

+ (bool)deviceWantsLegacyFormats;

- (void).cxx_destruct;
- (id)additionalQueryParameters;
- (id)color;
- (id)colorCoverGlass;
- (id)colorHousing;
- (id)description;
- (id)effectiveMarketingProductNumber;
- (id)effectiveProductType;
- (bool)forEngagement;
- (unsigned long long)hash;
- (id)initWithBluetoothProductIdentifier:(unsigned long long)arg1 color:(unsigned long long)arg2 engagement:(bool)arg3;
- (id)initWithHomePodColor:(unsigned long long)arg1;
- (id)initWithPhoneProductType:(id)arg1 colorHousing:(id)arg2 colorCoverGlass:(id)arg3;
- (id)initWithProductType:(id)arg1;
- (id)initWithProductType:(id)arg1 additionalQueryParameters:(id)arg2;
- (id)initWithWatchProductType:(id)arg1 marketingProductNumber:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)legacyFormats;
- (id)loggingMarketingProductNumber;
- (id)loggingProductType;
- (id)mappedMarketingProductNumber;
- (id)mappedProductType;
- (id)marketingProductNumber;
- (id)productType;
- (void)setMappedMarketingProductNumber:(id)arg1;
- (void)setMappedProductType:(id)arg1;
- (id)stringIdentifier;
- (struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; }*)ucat;
- (unsigned long long)version;

@end
