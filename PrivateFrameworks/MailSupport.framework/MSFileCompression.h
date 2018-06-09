/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSFileCompression : NSObject

+ (bool)_compressFile:(const char *)arg1 error:(id*)arg2;
+ (id)_compressionLock;
+ (struct CompressionQueueContext_s { }*)_compressionQueueContext;
+ (bool)compressDirectory:(id)arg1 shouldCancel:(id /* block */)arg2 error:(id*)arg3;
+ (bool)compressFile:(id)arg1 error:(id*)arg2;
+ (id)log;

@end
