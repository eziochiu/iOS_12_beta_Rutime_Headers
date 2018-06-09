/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchiveOutputStream : NSObject {
    bool  _descriptorsEnabled;
    bool  _doneWritingClassInfoMap;
    bool  _doneWritingFileDescriptorProtos;
    bool  _doneWritingObjectEntries;
    long long  _offset;
    <SFUSimpleOutputStream> * _outputStream;
    bool  _tocEnabled;
}

- (void).cxx_destruct;
- (id)initWithOutputStream:(id)arg1 checkCrc:(unsigned int)arg2 enableDescriptors:(bool)arg3 enableToc:(bool)arg4 closedCleanly:(bool)arg5 archivedVersions:(struct { unsigned long long x1; unsigned long long x2; })arg6;
- (bool)writeEntry:(id)arg1 offset:(long long*)arg2 headerLength:(unsigned int*)arg3 error:(id*)arg4;

@end
