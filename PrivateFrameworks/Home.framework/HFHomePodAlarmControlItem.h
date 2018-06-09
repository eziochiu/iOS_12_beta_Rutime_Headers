/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFHomePodAlarmControlItem : HFControlItem {
    <HFMediaProfileContainer> * _mediaProfileContainer;
}

@property (nonatomic, readonly) <HFMediaProfileContainer> *mediaProfileContainer;
@property (nonatomic, readonly) HFMediaProfileContainerSettingsValueManager *valueManager;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithMediaProfileContainer:(id)arg1 displayResults:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)mediaProfileContainer;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)valueManager;

@end
