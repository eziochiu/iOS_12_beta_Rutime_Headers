/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFDiskCacheFile : NSObject {
    PFChecksum * _checksum;
    int  _fd;
    NSString * _path;
    struct stat { 
        int st_dev; 
        unsigned short st_mode; 
        unsigned short st_nlink; 
        unsigned long long st_ino; 
        unsigned int st_uid; 
        unsigned int st_gid; 
        int st_rdev; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_atimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_mtimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_ctimespec; 
        struct timespec { 
            long long tv_sec; 
            long long tv_nsec; 
        } st_birthtimespec; 
        long long st_size; 
        long long st_blocks; 
        int st_blksize; 
        unsigned int st_flags; 
        unsigned int st_gen; 
        int st_lspare; 
        long long st_qspare[2]; 
    }  _statBuf;
}

- (void).cxx_destruct;
- (void)_closeCacheFile;
- (struct { long long x1; struct PFChecksumBytes { unsigned char x_2_1_1[16]; } x2; unsigned int x3; unsigned int x4; })_headerForFormat:(unsigned int)arg1 checksum:(id)arg2 formatSpecificData:(unsigned int)arg3;
- (void)_logError:(id)arg1;
- (bool)_openCacheFileForRead;
- (bool)_openCacheFileForWrite;
- (bool)_readBytesIntoPtr:(void*)arg1 length:(unsigned long long)arg2;
- (bool)_readHeader:(struct { long long x1; struct PFChecksumBytes { unsigned char x_2_1_1[16]; } x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)_readObj:(int)arg1 queue:(id)arg2;
- (bool)_swapTempFileIntoPlace;
- (bool)_writeBytesFromPtr:(const void*)arg1 length:(unsigned long long)arg2;
- (int)_writeHeaderForFormat:(unsigned int)arg1 formatSpecificData:(unsigned int)arg2;
- (bool)_writeObj:(id)arg1 queue:(id)arg2;
- (bool)checkIntegrity:(long long)arg1;
- (void)dealloc;
- (bool)deleteCacheFile;
- (id)init;
- (id)initWithPath:(id)arg1 checksum:(id)arg2;
- (id)read:(int)arg1;
- (void)write:(id)arg1 preparationBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;

@end
