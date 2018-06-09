/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> * _accessGroup;
    int  _fileDescriptor;
    <TSUReadChannel> * _readChannel;
}

@property (nonatomic, readonly) int fileDescriptor;
@property (nonatomic, readonly) <TSUReadChannel> *readChannel;

- (void).cxx_destruct;
- (void)beginAccess;
- (void)dealloc;
- (void)endAccess;
- (int)fileDescriptor;
- (id)init;
- (id)initWithFileDescriptor:(int)arg1 queue:(id)arg2;
- (id)readChannel;
- (void)waitForAccessToEnd;

@end
