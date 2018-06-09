/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFormatter : NSObject <NSCoding, NSCopying>

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

- (long long)_cacheGenerationCount;
- (void)_invalidateCache;
- (bool)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (bool)_tracksCacheGenerationCount;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)editingStringForObjectValue:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg3 error:(out id*)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3;
- (bool)isPartialStringValid:(id*)arg1 proposedSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 errorDescription:(id*)arg5;
- (id)stringForObjectValue:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

- (void)_gkUpdateLocale;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_hf_airParticulateSizeFormatter;
+ (id)_hf_airQualityFormatter;
+ (id)_hf_configurationStateFormatter;
+ (id)_hf_contactStateStateFormatter;
+ (id)_hf_controlDescriptionForDetectionCharacteristicOfType:(id)arg1 withValue:(id)arg2;
+ (id)_hf_controlTitleForCharacteristicType:(id)arg1;
+ (id)_hf_currentAirPurifierStateFormatter;
+ (id)_hf_currentSecuritySystemStateFormatter;
+ (id)_hf_customValueFormatterForCharacteristicType:(id)arg1 metadata:(id)arg2 options:(id)arg3;
+ (id)_hf_doorStateFormatter;
+ (id)_hf_filterChangeIndicationFormatter;
+ (id)_hf_heatingCoolingFormatter;
+ (id)_hf_lockMechanismLastKnownActionFormatter;
+ (id)_hf_lockMechanismStateFormatter;
+ (id)_hf_microgramsPerMeterCubedFormatter;
+ (id)_hf_partsPerMillionFormatter;
+ (id)_hf_percentFormatterForMetadata:(id)arg1;
+ (id)_hf_positionFormatterWithMetadata:(id)arg1 options:(id)arg2;
+ (id)_hf_positionStateFormatter;
+ (id)_hf_powerStateFormatter;
+ (id)_hf_rotationDirectionFormatter;
+ (id)_hf_targetSecuritySystemStateFormatter;
+ (id)_hf_temperatureUnitFormatter;
+ (id)_hf_valueFormatterForCharacteristicMetadata:(id)arg1 options:(id)arg2;
+ (id)_hf_valueSetFormatterForCharacteristicType:(id)arg1 options:(id)arg2;
+ (id)hf_controlDescriptionFormatterForCharacteristic:(id)arg1 options:(id)arg2;
+ (id)hf_controlDescriptionFormatterForCharacteristicType:(id)arg1 withMetadata:(id)arg2 options:(id)arg3;
+ (id)hf_valueFormatterForCharacteristic:(id)arg1 options:(id)arg2;
+ (id)hf_valueFormatterForCharacteristicType:(id)arg1 withMetadata:(id)arg2 options:(id)arg3;

@end
