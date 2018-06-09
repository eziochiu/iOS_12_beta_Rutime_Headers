/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey {
    NSString * _nameSuffix;
    Class  _payloadClass;
}

@property (nonatomic, retain) NSString *nameSuffix;
@property (nonatomic) Class payloadClass;

+ (id)payloadClass:(Class)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)name;
- (id)nameSuffix;
- (Class)payloadClass;
- (void)setNameSuffix:(id)arg1;
- (void)setPayloadClass:(Class)arg1;
- (unsigned long long)value;

@end
