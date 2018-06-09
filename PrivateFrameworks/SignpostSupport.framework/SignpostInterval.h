/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostInterval : SignpostObject {
    SignpostEvent * _beginEvent;
    SignpostEvent * _endEvent;
}

@property (nonatomic, readonly) NSString *_intervalTypeString;
@property (nonatomic, retain) SignpostEvent *beginEvent;
@property (nonatomic, retain) SignpostEvent *endEvent;

+ (id)serializationTypeNumber;

- (void).cxx_destruct;
- (id)_eventDescriptions;
- (id)_intervalTypeString;
- (id)beginEvent;
- (id)debugDescription;
- (id)descriptionStringForColumn:(unsigned long long)arg1 timeInSeconds:(bool)arg2;
- (id)descriptionWithTimeInSeconds:(bool)arg1 verbosity:(unsigned char)arg2;
- (unsigned long long)durationMachContinuousTime;
- (float)durationSeconds;
- (id)endEvent;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)hash;
- (id)initWithBeginEvent:(id)arg1 endEvent:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)number1Name;
- (id)number1Value;
- (id)number2Name;
- (id)number2Value;
- (unsigned long long)scope;
- (id)serializeableDictionary;
- (void)setBeginEvent:(id)arg1;
- (void)setEndEvent:(id)arg1;
- (unsigned long long)startMachContinuousTime;
- (id)string1Name;
- (id)string1Value;
- (id)string2Name;
- (id)string2Value;
- (bool)telemetryEnabled;

@end
