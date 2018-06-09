/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUEncodedBlockInfoWithDecodedLengthInternal : MDLTSUEncodedBlockInfoInternal {
    unsigned long long  _decodedLength;
}

- (unsigned long long)decodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1 decodedLength:(unsigned long long)arg2;

@end
