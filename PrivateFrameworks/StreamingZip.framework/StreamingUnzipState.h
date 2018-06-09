/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
 */

@interface StreamingUnzipState : NSObject {
    unsigned long long  _bytesHashedInChunk;
    struct { 
        char *dst_ptr; 
        unsigned long long dst_size; 
        char *src_ptr; 
        unsigned long long src_size; 
        void *state; 
    }  _cmpState;
    unsigned long long  _currentCRC32;
    unsigned short  _currentLFMode;
    struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; } * _currentLFRecord;
    unsigned long long  _currentLFRecordAllocationSize;
    bool  _currentLFRequiresDataDescriptor;
    unsigned long long  _currentOffset;
    int  _currentOutputFD;
    struct { unsigned char x1[4]; union { struct { struct { unsigned int x_1_3_1; } x_1_2_1; struct { unsigned long long x_2_3_1; } x_1_2_2; struct { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; struct { struct { unsigned int x_1_3_1; } x_2_2_1; struct { unsigned int x_2_3_1; } x_2_2_2; struct { unsigned int x_3_3_1; } x_2_2_3; } x_2_1_2; } x2; } * _dataDescriptor;
    bool  _denyInvalidSymlinks;
    struct { 
        int hashType; 
        union { 
            struct CC_MD5state_st { 
                unsigned int A; 
                unsigned int B; 
                unsigned int C; 
                unsigned int D; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                int num; 
            } md5; 
            struct CC_SHA1state_st { 
                unsigned int h0; 
                unsigned int h1; 
                unsigned int h2; 
                unsigned int h3; 
                unsigned int h4; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                int num; 
            } sha1; 
            struct CC_MD2state_st { 
                int num; 
                unsigned char data[16]; 
                unsigned int cksm[16]; 
                unsigned int state[16]; 
            } md2; 
            struct CC_MD4state_st { 
                unsigned int A; 
                unsigned int B; 
                unsigned int C; 
                unsigned int D; 
                unsigned int Nl; 
                unsigned int Nh; 
                unsigned int data[16]; 
                unsigned int num; 
            } md4; 
            struct CC_SHA256state_st { 
                unsigned int count[2]; 
                unsigned int hash[8]; 
                unsigned int wbuf[16]; 
            } sha224; 
            struct CC_SHA256state_st { 
                unsigned int count[2]; 
                unsigned int hash[8]; 
                unsigned int wbuf[16]; 
            } sha256; 
            struct CC_SHA512state_st { 
                unsigned long long count[2]; 
                unsigned long long hash[8]; 
                unsigned long long wbuf[16]; 
            } sha384; 
            struct CC_SHA512state_st { 
                unsigned long long count[2]; 
                unsigned long long hash[8]; 
                unsigned long long wbuf[16]; 
            } sha512; 
        } context; 
    }  _hashContext;
    unsigned long long  _hashedChunkSize;
    NSArray * _hashes;
    NSMutableData * _inMemoryFileData;
    NSString * _lastChunkPartialHash;
    unsigned long long  _lastResumptionSavedOffset;
    unsigned long long  _recordsProcessed;
    bool  _storeCurrentFileInMemory;
    NSDictionary * _streamInfoDict;
    unsigned char  _streamState;
    unsigned long long  _thisStageBytesComplete;
    unsigned long long  _totalFileSizeWritten;
    unsigned long long  _totalRecordCount;
    unsigned long long  _totalUncompressedBytes;
    unsigned long long  _uncompressedBytesOutput;
    NSMutableData * _unsureData;
    NSString * _unzipPath;
}

@property (nonatomic, readonly) unsigned long long bytesHashedInChunk;
@property (nonatomic, readonly) struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; }*cmpState;
@property (nonatomic) unsigned long long currentCRC32;
@property (nonatomic) unsigned short currentLFMode;
@property (nonatomic) struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*currentLFRecord;
@property (nonatomic) unsigned long long currentLFRecordAllocationSize;
@property (nonatomic) bool currentLFRequiresDataDescriptor;
@property (nonatomic) unsigned long long currentOffset;
@property (nonatomic) int currentOutputFD;
@property (nonatomic) struct { unsigned char x1[4]; union { struct { struct { unsigned int x_1_3_1; } x_1_2_1; struct { unsigned long long x_2_3_1; } x_1_2_2; struct { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; struct { struct { unsigned int x_1_3_1; } x_2_2_1; struct { unsigned int x_2_3_1; } x_2_2_2; struct { unsigned int x_3_3_1; } x_2_2_3; } x_2_1_2; } x2; }*dataDescriptor;
@property (nonatomic) bool denyInvalidSymlinks;
@property (nonatomic, readonly) struct { int x1; union { struct CC_MD5state_st { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7[16]; int x_1_2_8; } x_2_1_1; struct CC_SHA1state_st { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8[16]; int x_2_2_9; } x_2_1_2; struct CC_MD2state_st { int x_3_2_1; unsigned char x_3_2_2[16]; unsigned int x_3_2_3[16]; unsigned int x_3_2_4[16]; } x_2_1_3; struct CC_MD4state_st { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; unsigned int x_4_2_7[16]; unsigned int x_4_2_8; } x_2_1_4; struct CC_SHA256state_st { unsigned int x_5_2_1[2]; unsigned int x_5_2_2[8]; unsigned int x_5_2_3[16]; } x_2_1_5; struct CC_SHA256state_st { unsigned int x_6_2_1[2]; unsigned int x_6_2_2[8]; unsigned int x_6_2_3[16]; } x_2_1_6; struct CC_SHA512state_st { unsigned long long x_7_2_1[2]; unsigned long long x_7_2_2[8]; unsigned long long x_7_2_3[16]; } x_2_1_7; } x2; } hashContext;
@property (nonatomic, readonly) unsigned long long hashedChunkSize;
@property (nonatomic, retain) NSMutableData *inMemoryFileData;
@property (nonatomic, retain) NSString *lastChunkPartialHash;
@property (nonatomic) unsigned long long recordsProcessed;
@property (nonatomic) bool storeCurrentFileInMemory;
@property (nonatomic, retain) NSDictionary *streamInfoDict;
@property (nonatomic) unsigned char streamState;
@property (nonatomic) unsigned long long thisStageBytesComplete;
@property (nonatomic) unsigned long long totalFileSizeWritten;
@property (nonatomic) unsigned long long totalRecordCount;
@property (nonatomic) unsigned long long totalUncompressedBytes;
@property (nonatomic) unsigned long long uncompressedBytesOutput;
@property (nonatomic, retain) NSMutableData *unsureData;
@property (nonatomic, readonly) NSString *unzipPath;

+ (id)unzipStateWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_checkHashForOffset:(unsigned long long)arg1;
- (void)_internalSetStreamState:(unsigned char)arg1;
- (unsigned long long)bytesHashedInChunk;
- (id)checkLastChunkPartialHash;
- (void)clearSavedState;
- (struct { char *x1; unsigned long long x2; char *x3; unsigned long long x4; void *x5; }*)cmpState;
- (unsigned long long)currentCRC32;
- (unsigned short)currentLFMode;
- (struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)currentLFRecord;
- (unsigned long long)currentLFRecordAllocationSize;
- (bool)currentLFRequiresDataDescriptor;
- (unsigned long long)currentOffset;
- (int)currentOutputFD;
- (struct { unsigned char x1[4]; union { struct { struct { unsigned int x_1_3_1; } x_1_2_1; struct { unsigned long long x_2_3_1; } x_1_2_2; struct { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; struct { struct { unsigned int x_1_3_1; } x_2_2_1; struct { unsigned int x_2_3_1; } x_2_2_2; struct { unsigned int x_3_3_1; } x_2_2_3; } x_2_1_2; } x2; }*)dataDescriptor;
- (void)dealloc;
- (bool)denyInvalidSymlinks;
- (id)finishStream;
- (struct { int x1; union { struct CC_MD5state_st { unsigned int x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; unsigned int x_1_2_6; unsigned int x_1_2_7[16]; int x_1_2_8; } x_2_1_1; struct CC_SHA1state_st { unsigned int x_2_2_1; unsigned int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; unsigned int x_2_2_6; unsigned int x_2_2_7; unsigned int x_2_2_8[16]; int x_2_2_9; } x_2_1_2; struct CC_MD2state_st { int x_3_2_1; unsigned char x_3_2_2[16]; unsigned int x_3_2_3[16]; unsigned int x_3_2_4[16]; } x_2_1_3; struct CC_MD4state_st { unsigned int x_4_2_1; unsigned int x_4_2_2; unsigned int x_4_2_3; unsigned int x_4_2_4; unsigned int x_4_2_5; unsigned int x_4_2_6; unsigned int x_4_2_7[16]; unsigned int x_4_2_8; } x_2_1_4; struct CC_SHA256state_st { unsigned int x_5_2_1[2]; unsigned int x_5_2_2[8]; unsigned int x_5_2_3[16]; } x_2_1_5; struct CC_SHA256state_st { unsigned int x_6_2_1[2]; unsigned int x_6_2_2[8]; unsigned int x_6_2_3[16]; } x_2_1_6; struct CC_SHA512state_st { unsigned long long x_7_2_1[2]; unsigned long long x_7_2_2[8]; unsigned long long x_7_2_3[16]; } x_2_1_7; } x2; })hashContext;
- (unsigned long long)hashedChunkSize;
- (id)inMemoryFileData;
- (id)init;
- (id)initWithPath:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)lastChunkPartialHash;
- (void)markResumptionPoint;
- (unsigned long long)recordsProcessed;
- (id)serializeState;
- (void)setCurrentCRC32:(unsigned long long)arg1;
- (void)setCurrentLFMode:(unsigned short)arg1;
- (void)setCurrentLFRecord:(struct { unsigned char x1[4]; struct { unsigned short x_2_1_1; } x2; struct { unsigned short x_3_1_1; } x3; struct { unsigned short x_4_1_1; } x4; union { struct { struct { unsigned short x_1_3_1; } x_1_2_1; struct { unsigned short x_2_3_1; } x_1_2_2; } x_5_1_1; struct { unsigned int x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; } x6; struct { unsigned int x_7_1_1; } x7; struct { unsigned int x_8_1_1; } x8; struct { unsigned short x_9_1_1; } x9; struct { unsigned short x_10_1_1; } x10; unsigned char x11[0]; }*)arg1;
- (void)setCurrentLFRecordAllocationSize:(unsigned long long)arg1;
- (void)setCurrentLFRequiresDataDescriptor:(bool)arg1;
- (void)setCurrentOffset:(unsigned long long)arg1;
- (void)setCurrentOutputFD:(int)arg1;
- (void)setDataDescriptor:(struct { unsigned char x1[4]; union { struct { struct { unsigned int x_1_3_1; } x_1_2_1; struct { unsigned long long x_2_3_1; } x_1_2_2; struct { unsigned long long x_3_3_1; } x_1_2_3; } x_2_1_1; struct { struct { unsigned int x_1_3_1; } x_2_2_1; struct { unsigned int x_2_3_1; } x_2_2_2; struct { unsigned int x_3_3_1; } x_2_2_3; } x_2_1_2; } x2; }*)arg1;
- (void)setDenyInvalidSymlinks:(bool)arg1;
- (void)setInMemoryFileData:(id)arg1;
- (void)setLastChunkPartialHash:(id)arg1;
- (void)setRecordsProcessed:(unsigned long long)arg1;
- (void)setStoreCurrentFileInMemory:(bool)arg1;
- (void)setStreamInfoDict:(id)arg1;
- (void)setStreamState:(unsigned char)arg1;
- (void)setThisStageBytesComplete:(unsigned long long)arg1;
- (void)setTotalFileSizeWritten:(unsigned long long)arg1;
- (void)setTotalRecordCount:(unsigned long long)arg1;
- (void)setTotalUncompressedBytes:(unsigned long long)arg1;
- (void)setUncompressedBytesOutput:(unsigned long long)arg1;
- (void)setUnsureData:(id)arg1;
- (bool)storeCurrentFileInMemory;
- (id)streamInfoDict;
- (unsigned char)streamState;
- (unsigned long long)thisStageBytesComplete;
- (unsigned long long)totalFileSizeWritten;
- (unsigned long long)totalRecordCount;
- (unsigned long long)totalUncompressedBytes;
- (unsigned long long)uncompressedBytesOutput;
- (id)unsureData;
- (id)unzipPath;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3;
- (id)updateHashFromOffset:(unsigned long long)arg1 withBytes:(const void*)arg2 length:(unsigned long long)arg3 onlyFinishCurrentChunk:(bool)arg4;

@end
