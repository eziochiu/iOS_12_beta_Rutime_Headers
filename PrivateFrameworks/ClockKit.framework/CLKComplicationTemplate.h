/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKComplicationTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSMutableSet * _activeClients;
    bool  _finalized;
    UIColor * _tintColor;
}

@property (nonatomic, readonly) long long timeTravelUpdateFrequency;
@property (nonatomic, copy) UIColor *tintColor;

+ (id)complicationTemplateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (void)_enumerateAllKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateDateKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateIntegerKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateProgressProviderKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateScalarKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
- (void)_setProvidersPaused:(bool)arg1;
- (void)beginUpdatesForClient:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endUpdatesForClient:(id)arg1;
- (void)enumerateImageProviderKeysWithBlock:(id /* block */)arg1;
- (void)enumerateProgressProviderKeysWithBlock:(id /* block */)arg1;
- (void)enumerateTextProviderKeysWithBlock:(id /* block */)arg1;
- (void)finalize;
- (id)finalizedCopy;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isCompatibleWithFamily:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })maxSizeForImageProviderKey:(id)arg1;
- (void)setTintColor:(id)arg1;
- (long long)timeTravelUpdateFrequency;
- (id)tintColor;
- (void)validate;

@end
