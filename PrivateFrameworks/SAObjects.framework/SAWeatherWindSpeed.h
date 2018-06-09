/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *value;
@property (nonatomic, copy) NSString *windDirection;
@property (nonatomic, copy) NSNumber *windDirectionDegree;

+ (id)windSpeed;
+ (id)windSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (void)setWindDirection:(id)arg1;
- (void)setWindDirectionDegree:(id)arg1;
- (id)value;
- (id)windDirection;
- (id)windDirectionDegree;

@end
