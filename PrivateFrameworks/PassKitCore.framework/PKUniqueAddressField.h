/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKUniqueAddressField : NSObject {
    NSError * _error;
    long long  _index;
    NSString * _invalidText;
    NSString * _key;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) long long index;
@property (nonatomic, retain) NSString *invalidText;
@property (nonatomic, retain) NSString *key;

- (void).cxx_destruct;
- (id)error;
- (long long)index;
- (id)invalidText;
- (id)key;
- (void)setError:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setInvalidText:(id)arg1;
- (void)setKey:(id)arg1;

@end
