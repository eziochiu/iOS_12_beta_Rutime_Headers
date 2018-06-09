/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFMediaControlItem : HFControlItem <HFTogglableControlItem> {
    <HFMediaValueSource> * _mediaValueSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <HFMediaValueSource> *mediaValueSource;
@property (readonly) Class superclass;

+ (Class)valueClass;

- (void).cxx_destruct;
- (id)characteristicValuesForValue:(id)arg1;
- (id)copyWithCharacteristicOptions:(id)arg1 valueSource:(id)arg2;
- (id)initWithValueSource:(id)arg1 characteristicOptions:(id)arg2 displayResults:(id)arg3;
- (id)initWithValueSource:(id)arg1 displayResults:(id)arg2;
- (id)mediaValueSource;
- (id)normalizedValueForValue:(id)arg1;
- (id)readValueAndPopulateStandardResults;
- (long long)sortPriority;
- (id)togglePrimaryState;
- (id)toggleValue;
- (id)valueForCharacteristicValues:(id)arg1;
- (id)writePrimaryState:(long long)arg1;
- (id)writeValue:(id)arg1;

@end
