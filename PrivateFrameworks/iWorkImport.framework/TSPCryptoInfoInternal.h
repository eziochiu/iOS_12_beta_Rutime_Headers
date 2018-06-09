/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCryptoInfoInternal : NSObject <TSPCryptoInfo> {
    NSArray * _blockInfos;
    SFUCryptoKey * _cryptoKey;
    unsigned long long  _decodedLength;
    unsigned long long  _preferredBlockSize;
}

@property (nonatomic, retain) NSArray *blockInfos;
@property (nonatomic, readonly) SFUCryptoKey *cryptoKey;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long decodedLength;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDecodedLength;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long preferredBlockSize;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)blockInfos;
- (id)cryptoKey;
- (unsigned long long)decodedLength;
- (bool)hasDecodedLength;
- (id)initWithCryptoInfo:(id)arg1;
- (id)initWithCryptoKey:(id)arg1 preferredBlockSize:(unsigned long long)arg2 blockInfos:(id)arg3 decodedLength:(unsigned long long)arg4;
- (id)mutableCryptoInfoCopy;
- (unsigned long long)preferredBlockSize;
- (void)setBlockInfos:(id)arg1;
- (void)setDecodedLength:(unsigned long long)arg1;

@end