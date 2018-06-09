/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
 */

@interface UserFSItem : NSObject {
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _createdDate;
    bool  _isDirectory;
    unsigned long long  _length;
    bool  _locked;
    struct timespec { 
        long long tv_sec; 
        long long tv_nsec; 
    }  _modifiedDate;
    NSString * _name;
    NSString * _path;
    UserFSVolume * _volume;
}

@property (nonatomic) struct timespec { long long x1; long long x2; } createdDate;
@property (nonatomic) bool isDirectory;
@property (nonatomic) unsigned long long length;
@property (getter=isLocked, nonatomic) bool locked;
@property (nonatomic) struct timespec { long long x1; long long x2; } modifiedDate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, retain) UserFSVolume *volume;

+ (id)_itemWithVolume:(id)arg1 path:(id)arg2 properties:(id)arg3;

- (void).cxx_destruct;
- (struct timespec { long long x1; long long x2; })createdDate;
- (bool)isDirectory;
- (bool)isLocked;
- (unsigned long long)length;
- (struct timespec { long long x1; long long x2; })modifiedDate;
- (id)name;
- (id)path;
- (void)setCreatedDate:(struct timespec { long long x1; long long x2; })arg1;
- (void)setIsDirectory:(bool)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLocked:(bool)arg1;
- (void)setModifiedDate:(struct timespec { long long x1; long long x2; })arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setVolume:(id)arg1;
- (id)volume;

@end
