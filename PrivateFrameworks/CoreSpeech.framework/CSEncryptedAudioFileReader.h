/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSEncryptedAudioFileReader : NSObject {
    NSData * _aesKey;
    NSURL * _fileUrl;
    NSData * _readBuffer;
    unsigned long long  _sampleByteDepth;
}

@property (nonatomic, retain) NSData *aesKey;
@property (nonatomic, retain) NSURL *fileUrl;
@property (nonatomic, retain) NSData *readBuffer;
@property (nonatomic) unsigned long long sampleByteDepth;

- (void).cxx_destruct;
- (id)aesKey;
- (id)fileUrl;
- (id)initWithFileUrl:(id)arg1 aesKey:(id)arg2 sampleByteDepth:(unsigned long long)arg3;
- (bool)readAudioChunksWithCallback:(id /* block */)arg1;
- (id)readBuffer;
- (unsigned long long)sampleByteDepth;
- (void)setAesKey:(id)arg1;
- (void)setFileUrl:(id)arg1;
- (void)setReadBuffer:(id)arg1;
- (void)setSampleByteDepth:(unsigned long long)arg1;

@end
