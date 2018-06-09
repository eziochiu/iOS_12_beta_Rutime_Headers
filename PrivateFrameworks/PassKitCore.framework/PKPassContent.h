/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassContent : PKContent <NSSecureCoding> {
    NSDictionary * _allSemantics;
    NSArray * _backFieldBuckets;
    PKImage * _footerImage;
    NSArray * _frontFieldBuckets;
    NSString * _logoText;
    PKPassPersonalization * _personalization;
    NSDictionary * _semantics;
    long long  _transitType;
}

@property (nonatomic, copy) NSDictionary *allSemantics;
@property (nonatomic, copy) NSArray *backFieldBuckets;
@property (nonatomic, retain) PKImage *footerImage;
@property (nonatomic, copy) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *logoText;
@property (nonatomic, copy) PKPassPersonalization *personalization;
@property (nonatomic, readonly) NSArray *primaryFields;
@property (nonatomic, copy) NSDictionary *semantics;
@property (nonatomic) long long transitType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allSemantics;
- (id)backFieldBuckets;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)footerImage;
- (id)frontFieldBuckets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3;
- (id)logoText;
- (id)personalization;
- (id)primaryFields;
- (id)semantics;
- (void)setAllSemantics:(id)arg1;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setSemantics:(id)arg1;
- (void)setTransitType:(long long)arg1;
- (long long)transitType;

@end
