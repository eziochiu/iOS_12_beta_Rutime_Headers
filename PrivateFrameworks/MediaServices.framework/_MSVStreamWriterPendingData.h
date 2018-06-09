/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface _MSVStreamWriterPendingData : NSObject {
    long long  _bytesWritten;
    id /* block */  _completionHandler;
    NSData * _data;
}

@property (nonatomic) long long bytesWritten;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, copy) NSData *data;

- (void).cxx_destruct;
- (long long)bytesWritten;
- (id /* block */)completionHandler;
- (id)data;
- (void)setBytesWritten:(long long)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setData:(id)arg1;

@end
