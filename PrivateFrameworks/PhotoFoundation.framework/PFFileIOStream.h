/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

@interface PFFileIOStream : PFFileIStream <PFOStream>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)openStream;
- (bool)reserveLength:(long long)arg1;
- (bool)truncateLength:(long long)arg1;
- (bool)writeStream:(id)arg1;
- (bool)writeStream:(id)arg1 blockSize:(unsigned long long)arg2;
- (bool)writeStream:(const char *)arg1 length:(unsigned long long)arg2 written:(unsigned long long*)arg3;

@end
