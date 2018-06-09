/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEventLocation : NSObject {
    long long  _position;
    NSString * _type;
    NSMutableDictionary * _values;
}

@property (nonatomic) long long locationPosition;
@property (nonatomic, copy) NSString *locationType;
@property (nonatomic, readonly) NSDictionary *reportingDictionary;

- (void).cxx_destruct;
- (long long)locationPosition;
- (id)locationType;
- (id)reportingDictionary;
- (void)setLocationPosition:(long long)arg1;
- (void)setLocationType:(id)arg1;
- (void)setValue:(id)arg1 forLocationKey:(id)arg2;
- (id)valueForLocationKey:(id)arg1;

@end
