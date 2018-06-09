/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCExtAudioFilePipe : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    unsigned long long  _accessQueueID;
    struct OpaqueExtAudioFile { } * _audioFileRef;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _outputFormatDescriptionStruct;
    unsigned long long  _sourceFileSize;
    struct AudioStreamBasicDescription { 
        double mSampleRate; 
        unsigned int mFormatID; 
        unsigned int mFormatFlags; 
        unsigned int mBytesPerPacket; 
        unsigned int mFramesPerPacket; 
        unsigned int mBytesPerFrame; 
        unsigned int mChannelsPerFrame; 
        unsigned int mBitsPerChannel; 
        unsigned int mReserved; 
    }  _sourceFormatDescriptionStruct;
    NSURL * _sourceURL;
}

@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*outputFormatDescription;
@property (nonatomic, readonly) unsigned long long sourceFileSize;
@property (nonatomic, readonly) struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*sourceFormatDescription;
@property (nonatomic, readonly) NSURL *sourceURL;

- (void).cxx_destruct;
- (void)_accessExtAudioFileWithBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 outputFrameRate:(double)arg2 outputFormatID:(unsigned int)arg3;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)outputFormatDescription;
- (void)performTransactionWithBlock:(id /* block */)arg1;
- (int)readConvertedFramesIntoBuffer:(id)arg1 requestedFrameCount:(int)arg2;
- (bool)seekToSourceFrameIndex:(long long)arg1;
- (long long)sourceCurrentFrameIndex;
- (unsigned long long)sourceFileSize;
- (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; }*)sourceFormatDescription;
- (long long)sourceFrameIndexForTime:(double)arg1;
- (id)sourceURL;

@end
