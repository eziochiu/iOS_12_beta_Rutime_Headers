/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPDataRecorder : NSObject <_DPDataRecorder, _DPDataRecorderKeyProperties> {
    unsigned long long  _fragmentCount;
    unsigned long long  _fragmentWidth;
    NSString * _keyName;
    _DPKeyProperties * _keyProperties;
    double  _privacyParameter;
    NSObject * _randomizer;
    unsigned long long  _range;
}

@property (nonatomic, readonly) unsigned long long fragmentCount;
@property (nonatomic, readonly) unsigned long long fragmentWidth;
@property (nonatomic, readonly, copy) NSString *keyName;
@property (nonatomic, readonly) _DPKeyProperties *keyProperties;
@property (nonatomic, readonly) double privacyParameter;
@property (nonatomic, readonly) NSObject *randomizer;
@property (nonatomic, readonly) unsigned long long range;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)fragmentCount;
- (unsigned long long)fragmentWidth;
- (id)init;
- (id)initWithKey:(id)arg1;
- (id)keyName;
- (id)keyProperties;
- (double)privacyParameter;
- (id)randomizer;
- (unsigned long long)range;
- (void)recordBitValues:(id)arg1;
- (void)recordNumbers:(id)arg1;
- (void)recordStrings:(id)arg1;
- (void)recordWords:(id)arg1;

@end