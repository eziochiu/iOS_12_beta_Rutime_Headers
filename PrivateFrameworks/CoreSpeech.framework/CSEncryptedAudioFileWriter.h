/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSEncryptedAudioFileWriter : NSObject <CSAudioFileWriter> {
    NSURL * _fileUrl;
    unsigned long long  _sampleByteDepth;
    NSMutableData * _writeBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSURL *fileUrl;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long sampleByteDepth;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableData *writeBuffer;

- (void).cxx_destruct;
- (bool)addSamples:(const void*)arg1 numSamples:(unsigned long long)arg2;
- (bool)endAudio;
- (id)fileUrl;
- (id)initWithFileUrl:(id)arg1 sampleByteDepth:(unsigned long long)arg2;
- (unsigned long long)sampleByteDepth;
- (void)setFileUrl:(id)arg1;
- (void)setSampleByteDepth:(unsigned long long)arg1;
- (void)setWriteBuffer:(id)arg1;
- (id)writeBuffer;

@end