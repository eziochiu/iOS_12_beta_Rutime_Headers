/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoDCFDirectory : PLPhotoDCFObject {
    bool  _considerInvalidFileGroups;
    PLPhotoDCIMDirectory * _dcimDirectory;
    struct __CFDictionary { } * _fileGroupsByNumber;
    int  _lastUsedFileGroupNumber;
    int  _maxFileGroupNumber;
}

@property bool considerInvalidFileGroups;

+ (id)fileGroupRequiredEmptyExtensions;
+ (id)fileGroupRequiredEmptyPrefixes;
+ (void)initializeFileGroupPrefixAndExtensions;

- (unsigned int)_calculateBaseDirectoryValue;
- (bool)_canAddItemWithPrefix:(id)arg1;
- (bool)_canAddItemWithPrefix:(id)arg1 minimumFileGroupNumber:(int)arg2;
- (id)_lastUsedFileGroupUserInfoKey;
- (id)_nextAvailableFileGroupWithPrefix:(id)arg1 extension:(id)arg2;
- (bool)canAddFileGroupWithGroupNumber:(int)arg1;
- (bool)canAddImage;
- (bool)canAddVideo;
- (bool)considerInvalidFileGroups;
- (id)dcimDirectory;
- (void)dealloc;
- (void)ensureDirectoryExists;
- (id)fileGroups;
- (id)fullPath;
- (id)initWithName:(id)arg1 number:(int)arg2 dcimDirectory:(id)arg3;
- (bool)isEntensionValid:(id)arg1;
- (id)nextAvailableFileGroup;
- (id)nextAvailableVideoFileGroupWithExtension:(id)arg1;
- (void)removeFileGroup:(id)arg1;
- (void)setConsiderInvalidFileGroups:(bool)arg1;
- (void)setWriteIsPending:(bool)arg1;

@end
