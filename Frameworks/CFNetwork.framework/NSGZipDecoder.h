/* made by EzioChiu
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder> {
    bool  _decodedHeader;
    NSString * _filename;
    bool  _finishedInflating;
    unsigned long long  _modificationTime;
    bool  _pad;
    struct z_stream_s { 
        char *next_in; 
        unsigned int avail_in; 
        unsigned long long total_in; 
        char *next_out; 
        unsigned int avail_out; 
        unsigned long long total_out; 
        char *msg; 
        struct internal_state {} *state; 
        int (*zalloc)(); 
        int (*zfree)(); 
        void *opaque; 
        int data_type; 
        unsigned long long adler; 
        unsigned long long reserved; 
    }  _stream;
    bool  _streamInitialized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)MIMEType;
+ (bool)canDecodeDownloadHeaderData:(id)arg1;
+ (bool)decodeDownloadHeader:(id)arg1 headerLength:(int*)arg2 modificationTime:(unsigned long long*)arg3 filename:(id*)arg4;

- (void)dealloc;
- (id)decodeData:(id)arg1;
- (bool)decodeDownloadData:(id)arg1 dataForkData:(id*)arg2 resourceForkData:(id*)arg3;
- (id)fileAttributes;
- (id)filenameWithOriginalFilename:(id)arg1;
- (void)finalize;
- (bool)finishDownloadDecoding;
- (id)init;
- (bool)isFinishedDecoding;

@end
