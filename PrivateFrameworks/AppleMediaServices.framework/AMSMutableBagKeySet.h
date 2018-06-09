/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMutableBagKeySet : AMSBagKeySet {
    NSMutableSet * _mutableKeys;
}

@property (nonatomic, retain) NSMutableSet *mutableKeys;

- (void).cxx_destruct;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2;
- (void)addBagKey:(id)arg1 valueType:(unsigned long long)arg2 defaultValue:(id)arg3;
- (id)init;
- (id)keys;
- (id)mutableKeys;
- (void)setMutableKeys:(id)arg1;
- (void)unionBagKeySet:(id)arg1;

@end
