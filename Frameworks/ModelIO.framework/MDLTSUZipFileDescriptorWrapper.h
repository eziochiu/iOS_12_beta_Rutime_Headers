/* made by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLTSUZipFileDescriptorWrapper : NSObject {
    NSObject<OS_dispatch_group> * _accessGroup;
    int  _fileDescriptor;
    <MDLTSUReadChannel> * _readChannel;
}

@property (nonatomic, readonly) int fileDescriptor;
@property (nonatomic, readonly) <MDLTSUReadChannel> *readChannel;

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
