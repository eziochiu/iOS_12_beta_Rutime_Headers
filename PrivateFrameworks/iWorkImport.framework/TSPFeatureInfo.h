/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPFeatureInfo : NSObject {
    NSString * _identifier;
    unsigned long long  _readVersion;
    unsigned long long  _writeVersion;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long readVersion;
@property (nonatomic, readonly) unsigned long long writeVersion;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 readVersion:(unsigned long long)arg2 writeVersion:(unsigned long long)arg3 fromArchiver:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (unsigned long long)readVersion;
- (unsigned long long)writeVersion;

@end
